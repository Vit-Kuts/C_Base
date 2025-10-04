#include <locale.h>
#include <stdio.h>
#include <windows.h>
#include "temp_api.h"
#include "list.h"


int main() {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, "en_US.UTF-8");

  sensor_t info[MAX_RECORDS];
  list_t list;
  LIST_init(&list);

  // int number_of_records = DATA_AddInfo(info);
  
  // for (int i = 0; i < number_of_records; i++) {
  //   LIST_add_item_to_end(&list, info[i]);
  // }

  // LIST_print_list(list);

  // TEMP_API_StatisticsForTheMonth(&list, 2025, 1);
  // TEMP_API_StatisticsForTheYear(&list, 2025);

  printf("\nPress enter to exit...");
  getchar();
  return 0;
}