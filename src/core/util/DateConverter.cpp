//
// Created by jada on 12.08.2020.
//

#include "DateConverter.h"

time_t DateConverter::convert_long_int_to_date(long int dateLong) {
    return static_cast<time_t>(dateLong);
}

long int DateConverter::convert_date_to_long_int(time_t date) {
    return static_cast<long int>(date);
}
