#ifndef DATA_H_
#define DATA_H_
#include <stdint.h>

typedef struct {
  uint16_t year;
  uint8_t month;
  uint8_t day;
  uint8_t hour;
  uint8_t minute;
  float temperature;
} sensor_t;

#define MAX_RECORDS 30

typedef struct {
  uint32_t number;
  sensor_t sensor_info[MAX_RECORDS];
} data_t;

union sensor_serdes {
  data_t data;
  uint8_t bytes[sizeof(data_t)];
};

int DATA_AddInfo(sensor_t *info);
void DATA_Print(sensor_t *info, int number);
void DATA_SortByTemperature(sensor_t *info, int number_of_records);
void DATA_SortByDate(sensor_t *info, int number_of_records);
#endif /*DATA_H_*/