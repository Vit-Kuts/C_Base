#ifndef DATA_H_
#define DATA_H_
#include <stdbool.h>
#include <stdint.h>

typedef struct {
  uint16_t year;
  uint8_t month;
  uint8_t day;
  uint8_t hour;
  uint8_t minute;
  float temperature;
} sensor_t;

typedef struct {
  bool h;
  char *f;
  long int y;
  long int m;
} flag_and_pfram_t;

void DATA_FlagAnalysis(int arg, char *argv[]);
#endif /*DATA_H_*/