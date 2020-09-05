#include <iostream>
#include "data/Task.h"
#include "core/TaskSerializer.h"
#include "string"
#include "interface/AbstractUserInterface.h"
#include "cli/TimeWorkerCli.h"

using namespace std;

int main() {
    Task *task = new Task("name");
    // Create Serialize Interface
    AbstractUserInterface *userInterface = new TimeWorkerCli();
    // Start the interface
    userInterface->start();
    TaskSerializer *taskSerializer = new TaskSerializer();
    string appData = getenv("APPDATA");
    string filePath = appData + "/timeworker.data";
    string *filePathPointer = &filePath;
    //taskSerializer->serialize_object(task);
    taskSerializer->deserialize_object(filePathPointer);

    // Delete pointer references

    return 0;
}
