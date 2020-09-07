//
// Created by danil on 10.08.2020.
//

#include <iostream>
#include "TimeWorkerCli.h"
#include "../core/util/StringHelper.h"
#include "list"

using namespace std;

void TimeWorkerCli::start() const {
    cout << "Enter Command, for help menu enter: tw -h" << endl;
    string command = "";

    getline(cin, command);

    // Check if a command has been entered
    if (command.empty()) {
        throw logic_error("No Command was provided");
    }

    // Check if the command is a TimeWorker command
    list<string> myVector = StringHelper::split_string(command, ' ');
    cout << myVector.size();
}
