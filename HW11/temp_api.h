#ifndef TEMP_API_H_
#define TEMP_API_H_

#include <stdint.h>


#define SIZE 30

typedef struct {
  uint16_t year;
  uint8_t month;
  uint8_t day;
  uint8_t hour;
  uint8_t minute;
  int8_t temperature;
} sensor_t; 

typedef struct {
    uint32_t number;
    sensor_t sensor_info[SIZE];
} data_t;

union sensor_serdes {
  data_t data;
  uint8_t bytes[sizeof(data_t)];
};

void AverageMonthlyTemperature(void);
void MinTemperatureForTheCurrentMonth(void);
void MaxTemperatureForTheCurrentMonth(void);
void StatisticsForTheYear(void);
void AverageAnnualTemperature(void);
void MinTemperature(void);
void MaxTemperature(void);

#endif /*TEMP_API_H_*/
