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

string *Task::get_name() {
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

Task::Task(string taskName) {
    Task::taskName = &taskName;

    // Create random number using random library
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(1.0, 1000000.0);
    int randomNumber = dist(mt);

    Task::id = &randomNumber;
    Task::loggedHours = new int(0);
    time_t tempTaskTime = time(NULL);
    Task::taskTime = &tempTaskTime;
 }

Task::Task(int id, string taskName, int loggedHours, time_t taskTime) {
    Task::id = &id;
    Task::taskName = &taskName;
    Task::loggedHours = &loggedHours;
    Task::taskTime = &taskTime;
}


