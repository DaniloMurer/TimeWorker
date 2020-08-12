//
// Created by jada on 12.08.2020.
//

#ifndef TIMEWORKER_DATECONVERTER_H
#define TIMEWORKER_DATECONVERTER_H


#include <ctime>
#include "string"

using namespace std;
class DateConverter {
public:
    time_t convert_string_to_date(string stringDate);
};


#endif //TIMEWORKER_DATECONVERTER_H
