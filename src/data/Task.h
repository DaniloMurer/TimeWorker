//
// Created by jada on 10.08.2020.
//
#include <iostream>
#include <ctime>

#ifndef TIMEWORKER_TASK_H
#define TIMEWORKER_TASK_H


class Task {
private:
    int *id;
    std::string *taskName;
    time_t *taskTime;
    int *loggedHours;
public:
    int* get_id();
    time_t* get_time();
    std::string* get_name();
    int* get_logged_time();
    /**
     * Destructor for Task class for deleting all pointer references
     */
    ~Task();

    Task(std::string taskName);
};


#endif //TIMEWORKER_TASK_H
