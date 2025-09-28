#ifndef TEMP_API_H_
#define TEMP_API_H_
#include "data.h"

void TEMP_API_StatisticsForTheMonth(sensor_t *info, int year_number,
                                    int monthly_number, int number_of_records);
void TEMP_API_StatisticsForTheYear(sensor_t *info, int year_number,
                                   int number_of_records);

#endif /*TEMP_API_H_*/
