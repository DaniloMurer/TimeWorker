//
// Created by jada on 07.09.2020.
//

#include "StringHelper.h"
#include "list"

list<string> StringHelper::split_string(string inputString, char splitCharacter) {
    bool splitCharacterFlag = false;
    auto* stringList = new list<string>;
    auto* stringToPush = new string;
    for (char c : inputString) {
        stringToPush += c;
        if (c == splitCharacter) {
            splitCharacterFlag = true;
            stringList->push_front(*stringToPush);
            stringToPush = new string;
        }
        // The splitCharacter was found, therefore append next chars to the string
        if (splitCharacterFlag) {
            stringToPush += c;
        }
    }
    return *stringList;
}
