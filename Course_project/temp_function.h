#ifndef TEMP_API_H_
#define TEMP_API_H_
#include "data.h"
#include "list.h"

void TEMP_FUNCTION_StatisticsForTheMonth(list_t *list, long int year_number,
                                    long int monthly_number);
void TEMP_FUNCTION_StatisticsForTheYear(list_t *list, int year_number);

#endif /*TEMP_API_H_*/
