#include <iostream>
#include "data/Task.h"
#include "core/TaskSerializer.h"
int main() {

    Task *task = new Task("Test123");
    TaskSerializer *taskSerializer = new TaskSerializer();

    taskSerializer->serialize_object(task);
    return 0;
}
