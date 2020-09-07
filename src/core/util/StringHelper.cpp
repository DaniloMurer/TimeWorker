//
// Created by jada on 07.09.2020.
//

#include "StringHelper.h"

vector<string> StringHelper::split_string(string inputString, char splitCharacter) {
    bool splitCharacterFlag = false;
    vector<string>* stringVector = new vector<string>;
    string* stringToPush = new string;
    for (char c : inputString) {
        stringToPush->append(&c);
        if (c == splitCharacter) {
            splitCharacterFlag = true;
            stringVector->push_back(*stringToPush);
            stringToPush = new string;
        }
        // The splitCharacter was found, therefore append next chars to the string
        if (splitCharacterFlag) {
            stringToPush->append(&c);
        }
    }
    return *stringVector;
}
