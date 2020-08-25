//
// Created by jada on 12.08.2020.
//

#include "DateConverter.h"

<<<<<<< HEAD
time_t DateConverter::convert_long_int_to_date(long int dateLong) {
    return static_cast<time_t>(dateLong);
}

long int DateConverter::convert_date_to_long_int(time_t date) {
    return static_cast<long int>(date);
=======
time_t DateConverter::convert_string_to_date(string stringDate) {
    struct tm  tm{};
    time_t rawTime;
    time ( &rawTime );
    tm = *localtime ( &rawTime );
    tm.tm_year = tm.tm_year;
    tm.tm_mon = tm.tm_mon;
    tm.tm_mday = tm.tm_mday;
    return mktime(&tm);
>>>>>>> 83f2b120207bd08c50dc86cdd2713f38af585a44
}
