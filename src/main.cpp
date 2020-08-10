#include <iostream>
#include "data/Task.h"

int main() {
    Task *task = new Task;
    task->create_task((std::string *) "Test123");
    return 0;
}
