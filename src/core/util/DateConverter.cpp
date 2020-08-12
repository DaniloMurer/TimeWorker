//
// Created by jada on 12.08.2020.
//

#include "DateConverter.h"

time_t DateConverter::convert_string_to_date(string stringDate) {
    struct tm  tm{};
    time_t rawTime;
    time ( &rawTime );
    tm = *localtime ( &rawTime );
    tm.tm_year = tm.tm_year - 1900;
    tm.tm_mon = tm.tm_mon - 1;
    tm.tm_mday = tm.tm_mday;
    return mktime(&tm);
}
