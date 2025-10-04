#ifndef TEMP_API_H_
#define TEMP_API_H_
#include "data.h"
#include "list.h"

void TEMP_API_StatisticsForTheMonth(list_t *list, int year_number,
                                    int monthly_number);
void TEMP_API_StatisticsForTheYear(list_t *list, int year_number);

#endif /*TEMP_API_H_*/
