#include <locale.h>
#include <stdio.h>
#include <windows.h>
#include "temp_api.h"


int main() {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, "en_US.UTF-8");

  sensor_t info[MAX_RECORDS];

  int number_of_records = DATA_AddInfo(info);
  DATA_Print(info, number_of_records);

  DATA_SortByTemperature(info, number_of_records);
  DATA_Print(info, number_of_records);

  DATA_SortByDate(info, number_of_records);
  DATA_Print(info, number_of_records);

  TEMP_API_StatisticsForTheMonth(info, 2025, 1, number_of_records);
  TEMP_API_StatisticsForTheYear(info, 2025, number_of_records);

  printf("\nPress enter to exit...");
  getchar();
  return 0;
}