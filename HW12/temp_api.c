#include <stdbool.h>
#include <stdio.h>
#include "temp_api.h"

// static function declaration
static float AverageMonthlyTemperature(list_t list, int year_number,
                                       int monthly_number);
static float MinTemperatureForTheCurrentMonth(list_t list, int year_number,
                                              int monthly_number);
static float MaxTemperatureForTheCurrentMonth(list_t list, int year_number,
                                              int monthly_number);
static float AverageAnnualTemperature(list_t list, int year_number);
static float MinTemperatureForTheYear(list_t list, int year_number);
static float MaxTemperatureForTheYear(list_t list, int year_number);
static bool SearchInList(list_t list, int year_number, int monthly_number);
//____________________________________________________________________________

void TEMP_API_StatisticsForTheMonth(list_t *list, int year_number,
                                    int monthly_number) {
  printf(
      "======================================================\nStatistics for "
      "the %02d "
      "months in %04d:\n",
      monthly_number, year_number);

  if (SearchInList(*list, year_number, monthly_number) == false) {
    printf("Data for the %02dth month of %04d not found!\n",
           monthly_number, year_number);
    return;
  }

  printf("Average temperature for %02d month in %04d = %.2f°C\n",
         monthly_number, year_number,
         AverageMonthlyTemperature(*list, year_number, monthly_number));

  printf("Min temperature for %02d month in %04d = %.2f°C\n", monthly_number,
         year_number,
         MinTemperatureForTheCurrentMonth(*list, year_number, monthly_number));

  printf("Max temperature for %02d month in %04d = %.2f°C\n", monthly_number,
         year_number,
         MaxTemperatureForTheCurrentMonth(*list, year_number, monthly_number));
}

static bool SearchInList(list_t list, int year_number, int monthly_number) {
  node_t *current = list.head;

  while (current) {
    if (monthly_number == 0) {
      if (current->data.year == year_number) return true;
    }

    if ((current->data.month == monthly_number) &&
        (current->data.year == year_number))
      return true;

    current = current->next;
  }
  return false;
}

static float AverageMonthlyTemperature(list_t list, int year_number,
                                       int monthly_number) {
  node_t *current = list.head;
  float summ = 0;
  int count = 0;

  while (current) {
    if ((current->data.year == year_number) &&
        (current->data.month == monthly_number)) {
      summ += current->data.temperature;
      count++;
    }
    current = current->next;
  }

  float average_temperature = (float)summ / count;
  return average_temperature;
}

static float MinTemperatureForTheCurrentMonth(list_t list, int year_number,
                                              int monthly_number) {
  node_t *current = list.head;
  float min_temp = 0;
  bool temp_init = false;

  while (current) {
    if ((current->data.year == year_number) &&
        (current->data.month == monthly_number)) {
      if (temp_init == false) {
        min_temp = current->data.temperature;
        temp_init = true;
      }
      if (min_temp > current->data.temperature) {
        min_temp = current->data.temperature;
      }
    }
    current = current->next;
  }
  return min_temp;
}

static float MaxTemperatureForTheCurrentMonth(list_t list, int year_number,
                                              int monthly_number) {
  node_t *current = list.head;
  float max_temp = 0;
  bool temp_init = false;

  while (current) {
    if ((current->data.year == year_number) &&
        (current->data.month == monthly_number)) {
      if (temp_init == false) {
        max_temp = current->data.temperature;
        temp_init = true;
      }
      if (max_temp < current->data.temperature) {
        max_temp = current->data.temperature;
      }
    }
    current = current->next;
  }
  return max_temp;
}

void TEMP_API_StatisticsForTheYear(list_t *list, int year_number) {
  printf(
      "======================================================\nStatistics for "
      "the %04d "
      "year:\n",
      year_number);

  if (SearchInList(*list, year_number, 0) == false) {
    printf("Data for %04d not found!\n", year_number);
    return;
  }

  printf("Average temperature in the %04d year = %.2f°C\n", year_number,
         AverageAnnualTemperature(*list, year_number));
  printf("Max temperature in the %04d year = %.2f°C\n", year_number,
         MaxTemperatureForTheYear(*list, year_number));
  printf("Min temperature in the %04d year = %.2f°C\n", year_number,
         MinTemperatureForTheYear(*list, year_number));
}

static float AverageAnnualTemperature(list_t list, int year_number) {
  node_t *current = list.head;
  float summ = 0;
  int count = 0;

  while (current) {
    if (current->data.year == year_number) {
      summ += current->data.temperature;
      count++;
    }
    current = current->next;
  }

  float average_temperature = (float)summ / count;
  return average_temperature;
}

static float MinTemperatureForTheYear(list_t list, int year_number) {
  node_t *current = list.head;
  float min_temp = 0;
  bool temp_init = false;

  while (current) {
    if (current->data.year == year_number) {
      if (temp_init == false) {
        min_temp = current->data.temperature;
        temp_init = true;
      }
      if (min_temp > current->data.temperature) {
        min_temp = current->data.temperature;
      }
    }
    current = current->next;
  }
  return min_temp;
}

static float MaxTemperatureForTheYear(list_t list, int year_number) {
  node_t *current = list.head;
  float max_temp = 0;
  bool temp_init = false;

  while (current) {
    if (current->data.year == year_number) {
      if (temp_init == false) {
        max_temp = current->data.temperature;
        temp_init = true;
      }
      if (max_temp < current->data.temperature) {
        max_temp = current->data.temperature;
      }
    }
    current = current->next;
  }
  return max_temp;
}