#include <locale.h>
#include <stdio.h>
#include <windows.h>

#include "list.h"
#include "temp_api.h"

int main(int argc, char *argv[]) {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, "en_US.UTF-8");

  DATA_FlagAnalysis(argc, argv);

  printf("Press enter to exit...");
  getchar();
  return 0;
}