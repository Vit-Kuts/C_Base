#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "data.h"
#include "list.h"
#include "temp_function.h"

// static function declaration
static void FlagHandler(flag_and_pfram_t *temp);
static void PrintHelpMessage(void);
static int ParseFile(char *file_name, list_t *list);

//____________________________________________________________________________
void DATA_FlagAnalysis(int arg, char *argv[]) {
  int rez = 0;
  flag_and_pfram_t temp;

  temp.h = false;
  temp.f = NULL;
  temp.y = 0;
  temp.m = 0;

  if (arg == 1) {
    temp.h = true;
  }

  while ((rez = getopt(arg, argv, "hf:y:m:")) != -1) {
    switch (rez) {
      case 'h':
        temp.h = true;
        break;
      case 'f':
        temp.f = optarg;
        break;
      case 'y':
        temp.y = strtol(optarg, NULL, 10);
        break;
      case 'm':
        temp.m = strtol(optarg, NULL, 10);
        break;
    }
  }
  FlagHandler(&temp);
}

//____________________________________________________________________________
static void FlagHandler(flag_and_pfram_t *temp) {
  if (temp->h && temp->f == 0) {
    PrintHelpMessage();
    return;
  } else if (temp->h) {
    PrintHelpMessage();
  }

  list_t list;
  LIST_Init(&list);

  if (ParseFile(temp->f, &list) == 0) {
    if (temp->y && temp->m) {
      TEMP_API_StatisticsForTheMonth(&list, temp->y, temp->m);
    } else if (temp->y && temp->m == 0) {
      TEMP_API_StatisticsForTheYear(&list, temp->y);
    } else if (temp->y == 0 && temp->m) {
      printf("========================ERROR!========================\n");
      printf("year not entered\n");
      printf("======================================================\n");
      printf("\n");
      return;
    }
  } else {
    printf("=======================WARNING!=======================\n");
    printf("%s could not find the input file\n", temp->f);
    printf("======================================================\n");
    printf("\n");
    return;
  }
}

//____________________________________________________________________________
static void PrintHelpMessage(void) {
  printf(
      "===================================================HELP================="
      "==================================\n");
  printf("%-10s%s\n", "-h",
         "Obtaining information about possible launch keys with a");
  printf("%-10s%s\n", "", "brief description of their purpose;");
  printf("%-10s%s\n", "-f <arg>",
         "Specifying the file to be processed, where <arg> is the file name.");
  printf("%-10s%s\n", "",
         "If the \"-m\" option is not added in this mode, only statistics");
  printf("%-10s%s\n", "", "for the entire file will be displayed;");
  printf("%-10s%s\n", "-y <arg>",
         "Output temperature information for the specified year.");
  printf("%-10s%s\n", "", "Where <arg> is the year number;");
  printf("%-10s%s\n", "-m <arg>",
         "Output temperature information for the specified month.");
  printf("%-10s%s\n", "",
         "Where <arg> is the month number. Only used in conjunction");
  printf("%-10s%s\n", "", "with the \"-y\" switch;");
  printf(
      "========================================================================"
      "==================================\n");
  printf("\n");
}
//____________________________________________________________________________
static int ParseFile(char *file_name, list_t *list) {
  FILE *file = fopen(file_name, "r");
  if (file == NULL) {
    printf("========================ERROR!========================\n");
    printf("Failed to open %s file!\n", file_name);
    printf("======================================================\n");
    printf("\n");
    return 1;
  }

  printf("=======================SUCCESS!=======================\n");
  printf("%s file is open successfully!\n", file_name);
  printf("======================================================\n");

  printf("Processing file...\n");

  char line[256];
  int line_number = 0;
  int error_count = 0;
  int error_lines[10];
  char error_contents[10][100];

  while (fgets(line, sizeof(line), file) != NULL) {
    line_number++;

    line[strcspn(line, "\n")] = '\0';

    int Y, M, D, H, m, T;

    if (sscanf(line, "%d;%d;%d;%d;%d;%d", &Y, &M, &D, &H, &m, &T) == 6) {
      sensor_t item;
      item.year = Y;
      item.month = M;
      item.day = D;
      item.hour = H;
      item.minute = m;
      item.temperature = T;

      LIST_AddItemToEnd(list, item);
    } else {
      if (error_count < 10) {
        error_lines[error_count] = line_number;
        strncpy(error_contents[error_count], line, 99);
        error_contents[error_count][99] = '\0';
      }
      error_count++;
    }
  }

  printf("\n=======================COMPLETE!======================\n");
  printf("File processing completed! Processed %d lines.\n", line_number);

  if (error_count > 0) {
    printf("Format errors found: %d\n", error_count);
    if (error_count <= 10) {
      printf("Error details:\n");
      for (int i = 0; i < error_count; i++) {
        printf("  Line %d: %s\n", error_lines[i], error_contents[i]);
      }
    } else {
      printf("First 10 errors:\n");
      for (int i = 0; i < 10; i++) {
        printf("  Line %d: %s\n", error_lines[i], error_contents[i]);
      }
      printf("  ... and %d more errors\n", error_count - 10);
    }
  }
  printf("\n");
  fclose(file);
  return 0;
}