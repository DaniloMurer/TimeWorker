//
// Created by jada on 10.08.2020.
//

#include "TaskSerializer.h"
#include "fstream"
#include "iostream"
#include <string>
#include <vector>
#include "iomanip"
using namespace std;
void TaskSerializer::serialize_object(Task *object) const {
    // Store elements from class
    int *id = object->get_id();
    std::string *taskName = object->get_name();
    int *loggedHours = object->get_logged_time();
    time_t *time = object->get_time();
    // Convert time to string
    std::string timeString = ctime(time);
    // Get the AppData Folder
    std::string appData = getenv("APPDATA");
    cout << *taskName << endl;
    cout << *loggedHours << endl;
    cout << ctime(reinterpret_cast<const time_t *>(*time)) << endl;
    cout << *id << endl;
    // Write data to file
    std::ofstream fileStream;
    fileStream.open(appData + "/timeworker.data", std::ios::app);

    fileStream << "," + std::to_string(*id) + "," + *taskName + "," + std::to_string(*loggedHours) + "," + timeString;
    fileStream.close();
}

void TaskSerializer::deserialize_object(std::string *filePath) const {
    std::string appData = getenv("APPDATA");
    std::fstream fileStream;
    fileStream.open(*filePath);
    std::vector<std::string> splitData;

    if (fileStream.is_open()) {
        std::string line;
        while (std::getline(fileStream, line, ',')) {
            if (line.empty()) {
                continue;
            }
            splitData.push_back(line);
            cout << splitData.size() <<std::endl;
        }
    }
    fileStream.close();

    this->convert_to_list(splitData);
}

std::list<Task> TaskSerializer::convert_to_list(std::vector<std::string> splitData) const {
    std::list<Task> taskList;
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
                    break;
            }
        }
        // Create new Task and push it to the list
        Task *task = new Task(id, taskName, loggedHours, taskTime);
        taskList.push_front(*task);
    }
    return std::list<Task>();
}


