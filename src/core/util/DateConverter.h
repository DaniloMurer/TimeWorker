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
    /**
     * Convert date string to @class time_t
     */
    static time_t convert_long_int_to_date(long int longDate);

    static long int convert_date_to_long_int(time_t date);
};


#endif //TIMEWORKER_DATECONVERTER_H
