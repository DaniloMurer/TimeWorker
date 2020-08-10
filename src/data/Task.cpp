//
// Created by jada on 10.08.2020.
//

#include "Task.h"
#include "random"

using namespace std;

int *Task::get_id() {
    return Task::id;
}

time_t *Task::get_time() {
    return Task::taskTime;
}

std::string *Task::get_name() {
    return Task::taskName;
}

int *Task::get_logged_time() {
    return Task::loggedHours;
}

Task::~Task() {
    delete Task::id;
    delete Task::loggedHours;
    delete Task::taskName;
    delete Task::taskTime;
}

Task::Task(std::string taskName) {
    Task::taskName = &taskName;
    int id = rand() % 1000000 + 1;
    Task::id = &id;
    Task::loggedHours = new int(0);
    time_t time = std::time(0);
    Task::taskTime = &time;
 }

Task::Task(int id, std::string taskName, int loggedHours, time_t taskTime) {
    Task::id = &id;
    Task::taskName = &taskName;
    Task::loggedHours = &loggedHours;
    Task::taskTime = &taskTime;
}


