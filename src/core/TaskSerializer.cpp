//
// Created by jada on 10.08.2020.
//

#include "TaskSerializer.h"
#include "fstream"
#include "iostream"
#include <string>
#include <vector>

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

    // Write data to file
    std::ofstream fileStream;
    fileStream.open(appData + "/timeworker.data", std::ios::app);

    fileStream << "," + std::to_string(*id) + "," + *taskName + "," + std::to_string(*loggedHours) + "," + timeString;

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
            std::cout << splitData.size() <<std::endl;
        }
    }

    //TODO: Process splitted data into tasks
}
