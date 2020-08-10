#include <iostream>
#include "data/Task.h"
#include "core/TaskSerializer.h"
int main() {

    Task *task = new Task("Test123");
    TaskSerializer *taskSerializer = new TaskSerializer();
    std::string appData = getenv("APPDATA");
    std::string filePath = appData + "/timeworker.data";
    std::string *filePathPointer = &filePath;
    //taskSerializer->serialize_object(task);
    taskSerializer->deserialize_object(filePathPointer);
    return 0;
}
