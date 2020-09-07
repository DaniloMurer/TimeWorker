//
// Created by jada on 07.09.2020.
//

#ifndef TIMEWORKER_STRINGHELPER_H
#define TIMEWORKER_STRINGHELPER_H

#include <vector>
#include <string>
#include "list"

using namespace std;
class StringHelper {
public:
    static list<string> split_string(string inputString, char splitCharacter);
};


#endif //TIMEWORKER_STRINGHELPER_H
