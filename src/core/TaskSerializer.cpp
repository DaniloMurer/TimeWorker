//
// Created by jada on 10.08.2020.
//

#include "TaskSerializer.h"
#include "fstream"
#include "iostream"
#include <time.h>
#include <string>
#include <vector>
#include "iomanip"
#include "util/DateConverter.h"

using namespace std;
void TaskSerializer::serialize_object(Task *object) const {
    // Store elements from class
    int *id = object->get_id();
    string taskName = "tasl214";
    int *loggedHours = object->get_logged_time();
    time_t *time = object->get_time();
    // Convert time to string
    string timeString = ctime(time);
    // Get the AppData Folder
    string appData = getenv("APPDATA");
    // Write data to file
    ofstream fileStream;
    fileStream.open(appData + "/timeworker.data", ios::app);

    fileStream << "," + to_string(*id) + "," + taskName + "," + to_string(*loggedHours) + "," + to_string(DateConverter::convert_date_to_long_int(*time)) << endl;
    fileStream.close();
}

void TaskSerializer::deserialize_object(string *filePath) const {
    string appData = getenv("APPDATA");
    fstream fileStream;
    fileStream.open(*filePath);
    vector<string> splitData;

    if (fileStream.is_open()) {
        string line;
        while (getline(fileStream, line, ',')) {
            if (line.empty()) {
                continue;
            }
            splitData.push_back(line);
        }
    }
    fileStream.close();

    this->convert_to_list(splitData);
}

list<Task> TaskSerializer::convert_to_list(vector<string> splitData) const {
    list<Task> taskList;
    int id;
    string taskName;
    int loggedHours;
    time_t taskTime;

    //TODO: Process splitted data into tasks
    for (int i = 0; i < splitData.size() / 4; i++) {
        for (int j = 0; j < 4; j++) {
            switch(j) {
                case 0:
                    id = stoi(splitData[j]);
                    break;
                case 1:
                    taskName = splitData[j];
                    break;
                case 2:
                    loggedHours = stoi(splitData[j]);
                    break;
                case 3:
                    taskTime = DateConverter::convert_long_int_to_date(stol(splitData[j]));
                    cout << ctime(&taskTime);
                    break;
            }
        }
        // Create new Task and push it to the list
        Task *task = new Task(id, taskName, loggedHours, taskTime);
        taskList.push_front(*task);
    }
    return taskList;
}


