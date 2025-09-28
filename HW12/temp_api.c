#include "temp_api.h"

#include <stdbool.h>
#include <stdio.h>

// static function declaration
static float AverageMonthlyTemperature(sensor_t *info, int year_number,
                                       int monthly_number,
                                       int number_of_records);
static float MinTemperatureForTheCurrentMonth(sensor_t *info, int year_number,
                                              int monthly_number,
                                              int number_of_records);
static float MaxTemperatureForTheCurrentMonth(sensor_t *info, int year_number,
                                              int monthly_number,
                                              int number_of_records);
static float AverageAnnualTemperature(sensor_t *info, int year_number,
                                      int number_of_records);
static float MinTemperatureForTheYear(sensor_t *info, int year_number,
                                      int number_of_records);
static float MaxTemperatureForTheYear(sensor_t *info, int year_number,
                                      int number_of_records);
//____________________________________________________________________________

void TEMP_API_StatisticsForTheMonth(sensor_t *info, int year_number,
                                    int monthly_number, int number_of_months) {
  printf(
      "======================================================\nStatistics for "
      "the %02d "
      "months in %04d:\n",
      monthly_number, year_number);
  printf("Average temperature for %02d months in %04d = %.2f°C\n",
         monthly_number, year_number,
         AverageMonthlyTemperature(info, year_number, monthly_number,
                                   number_of_months));

  printf("Min temperature for %02d months in %04d = %.2f°C\n", monthly_number,
         year_number,
         MinTemperatureForTheCurrentMonth(info, year_number, monthly_number,
                                          number_of_months));

  printf("Max temperature for %02d months in %04d = %.2f°C\n", monthly_number,
         year_number,
         MaxTemperatureForTheCurrentMonth(info, year_number, monthly_number,
                                          number_of_months));
}

static float AverageMonthlyTemperature(sensor_t *info, int year_number,
                                       int monthly_number,
                                       int number_of_records) {
  float summ = 0;
  int count = 0;

  for (int i = 0; i < number_of_records; i++) {
    if ((info[i].year == year_number) && (info[i].month == monthly_number)) {
      summ += info[i].temperature;
      count++;
    }
  }

  float average_temperature = ((float)summ / count);
  return average_temperature;
}

static float MinTemperatureForTheCurrentMonth(sensor_t *info, int year_number,
                                              int monthly_number,
                                              int number_of_records) {
  float min_temp = 0;
  bool temp_init = false;

  for (int i = 0; i < number_of_records; i++) {
    if ((info[i].year == year_number) && (info[i].month == monthly_number)) {
      if (temp_init == false) {
        min_temp = info[i].temperature;
        temp_init = true;
        continue;
      }
      if (min_temp > info[i].temperature) {
        min_temp = info[i].temperature;
      }
    }
  }
  return min_temp;
}

static float MaxTemperatureForTheCurrentMonth(sensor_t *info, int year_number,
                                              int monthly_number,
                                              int number_of_records) {
  float max_temp = 0;
  bool temp_init = false;

  for (int i = 0; i < number_of_records; i++) {
    if ((info[i].year == year_number) && (info[i].month == monthly_number)) {
      if (temp_init == false) {
        max_temp = info[i].temperature;
        temp_init = true;
        continue;
      }
      if (max_temp < info[i].temperature) {
        max_temp = info[i].temperature;
      }
    }
  }
  return max_temp;
}

void TEMP_API_StatisticsForTheYear(sensor_t *info, int year_number,
                                   int number_of_records) {
  printf(
      "======================================================\nStatistics for "
      "the %04d "
      "year:\n",
      year_number);
  printf("Average temperature in the %04d year = %.2f°C\n", year_number,
         AverageAnnualTemperature(info, year_number, number_of_records));
  printf("Max temperature in the %04d year = %.2f°C\n", year_number,
         MaxTemperatureForTheYear(info, year_number, number_of_records));
  printf("Min temperature in the %04d year = %.2f°C\n", year_number,
         MinTemperatureForTheYear(info, year_number, number_of_records));
}

static float AverageAnnualTemperature(sensor_t *info, int year_number,
                                      int number_of_records) {
  float summ = 0;
  int count = 0;

  for (int i = 0; i < number_of_records; i++) {
    if (info[i].year == year_number) {
      summ += info[i].temperature;
      count++;
    }
  }

  float average_temperature = ((float)summ / count);
  return average_temperature;
}

static float MinTemperatureForTheYear(sensor_t *info, int year_number,
                                      int number_of_records) {
  float min_temp = 0;
  bool temp_init = false;

  for (int i = 0; i < number_of_records; i++) {
    if (info[i].year == year_number) {
      if (temp_init == false) {
        min_temp = info[i].temperature;
        temp_init = true;
        continue;
      }
      if (min_temp > info[i].temperature) {
        min_temp = info[i].temperature;
      }
    }
  }
  return min_temp;
}

static float MaxTemperatureForTheYear(sensor_t *info, int year_number,
                                      int number_of_records) {
  float max_temp = 0;
  bool temp_init = false;

  for (int i = 0; i < number_of_records; i++) {
    if (info[i].year == year_number) {
      if (temp_init == false) {
        max_temp = info[i].temperature;
        temp_init = true;
        continue;
      }
      if (max_temp < info[i].temperature) {
        max_temp = info[i].temperature;
      }
    }
  }
  return max_temp;
}