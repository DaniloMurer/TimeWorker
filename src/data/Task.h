//
// Created by jada on 10.08.2020.
//
#include <iostream>
#include <ctime>

#ifndef TIMEWORKER_TASK_H
#define TIMEWORKER_TASK_H

using namespace std;

class Task {
private:

    /**
     * Task Id
     */
    int *id;

    /**
     * Task name
     */
    string *taskName;

    /**
     * Last start of the task
     */
    time_t *taskTime;

    /**
     * Logged hours for the task
     */
    int *loggedHours;

public:

    /**
     * Get id from Task
     * @return The Id of the task
     */
    int* get_id();

    /**
     * Get the time of the task
     * @return Time of the task
     */
    time_t* get_time();

    /**
     * Get the name of the task
     * @return The name of the task
     */
    string* get_name();

    /**
     * Get the logged time for the task
     * @return The logged time
     */
    int* get_logged_time();

    /**
     * Destructor for Task class for deleting all pointer references
     */
    ~Task();

    /**
     * Constructor for auto generating task with the name only
     * @param taskName The name of the task
     */
    explicit Task(string taskName);

    /**
     * Constructor for creating a task with all properties
     * @param id Id of the task
     * @param taskName Name of the task
     * @param loggedHours Logged Hours for the task
     * @param taskTime Time of the task
     */
    explicit Task(int id, string taskName, int loggedHours, time_t taskTime);
};


#endif //TIMEWORKER_TASK_H
