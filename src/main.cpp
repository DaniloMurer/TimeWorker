#include <iostream>
#include "data/Task.h"
#include "core/TaskSerializer.h"
#include "string"
#include "interface/AbstractUserInterface.h"
#include "cli/TimeWorkerCli.h"

int main() {
    Task *task = new Task("name");
    // Create Serialize Interface
    AbstractUserInterface *userInterface = new TimeWorkerCli();
    // Start the interface
    userInterface->start();
    TaskSerializer *taskSerializer = new TaskSerializer();
    std::string appData = getenv("APPDATA");
    std::string filePath = appData + "/timeworker.data";
    std::string *filePathPointer = &filePath;
    //taskSerializer->serialize_object(task);
    taskSerializer->deserialize_object(filePathPointer);

    // Delete pointer references
    delete userInterface;
    delete taskSerializer;

    return 0;
}
