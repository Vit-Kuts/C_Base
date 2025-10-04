#include "data.h"
#include <stdio.h>

// static function declaration
static void AddRecord(sensor_t *info, uint32_t number, uint16_t year,
                      uint8_t month, uint8_t day, uint8_t hour, uint8_t minute,
                      float temperature);
static void Swap(sensor_t *info, int i, int j);
static int Compare(const void *arg1, const void *arg2);
// static uint64_t DataAndTimeToInt(sensor_t *info);
//____________________________________________________________________________

int DATA_AddInfo(sensor_t *info) {
  int number_of_records = 0;
  AddRecord(info, number_of_records++, 2021, 1, 1, 12, 10, -40);
  AddRecord(info, number_of_records++, 2018, 1, 4, 23, 15, 0);
  AddRecord(info, number_of_records++, 2025, 1, 10, 0, 30, -30);
  AddRecord(info, number_of_records++, 2021, 3, 15, 1, 55, 6);
  AddRecord(info, number_of_records++, 2020, 9, 7, 7, 2, 2);
  AddRecord(info, number_of_records++, 2025, 1, 14, 17, 7, 23);
  AddRecord(info, number_of_records++, 2025, 2, 14, 17, 0, -10);
  return number_of_records;
}

static void AddRecord(sensor_t *info, uint32_t number, uint16_t year,
                      uint8_t month, uint8_t day, uint8_t hour, uint8_t minute,
                      float temperature) {
  info[number].year = year;
  info[number].month = month;
  info[number].day = day;
  info[number].hour = hour;
  info[number].minute = minute;
  info[number].temperature = temperature;
}

void DATA_Print(sensor_t *info, int number) {
  for (int i = 0; i < number; i++) {
    printf("%04d-%02d-%02d %1.2d:%1.2d temperature = %2.f°C\n", info[i].year,
           info[i].month, info[i].day, info[i].hour, info[i].minute,
           info[i].temperature);
  };
}

void DATA_SortByTemperature(sensor_t *info, int number_of_records) {
  printf(
      "======================================================\nSorted by "
      "temperature:\n");
  for (int i = 0; i < number_of_records; i++) {
    for (int j = i; j < number_of_records; j++) {
      if (info[i].temperature >= info[j].temperature) {
        Swap(info, i, j);
      }
    }
  }
}

static void Swap(sensor_t *info, int i, int j) {
  sensor_t temp = info[i];
  info[i] = info[j];
  info[j] = temp;
}

void DATA_SortByDate(sensor_t *info, int number_of_records) {
  printf(
      "======================================================\nSorted by "
      "date:\n");
  for (int i = 0; i < number_of_records; i++) {
    for (int j = i; j < number_of_records; j++) {
      if (Compare(info + i, info + j) > 0) {
        Swap(info, i, j);
      }
    }
  }
}

// static uint64_t DataAndTimeToInt(sensor_t *info) {
//   return (uint64_t)info->year << 32 | (uint64_t)info->month << 24 |
//          (uint64_t)info->day << 16 | (uint64_t)info->hour << 8 |
//          (uint64_t)info->minute;
// }

static int Compare(const void *arg1, const void *arg2) {
  const sensor_t *a = (const sensor_t *)arg1;
  const sensor_t *b = (const sensor_t *)arg2;

  if (a->year != b->year) return a->year - b->year;
  if (a->month != b->month) return a->month - b->month;
  if (a->day != b->day) return a->day - b->day;
  if (a->hour != b->hour) return a->hour - b->hour;
  if (a->minute != b->minute) return a->minute - b->minute;
}
