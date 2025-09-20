#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_int(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

int main() {
  FILE *input;
  FILE *output;

  input = fopen("input.txt", "r");
  if (input == NULL) {
    perror("input.txt");
    return 1;
  }

  output = fopen("output.txt", "w");
  if (output == NULL) {
    perror("output.txt");
    fclose(input);
    return 1;
  }

  char c[1001] = {0};
  int size = fread(c, 1, sizeof(c) - 1, input);
  c[size] = '\0';

  char temp[1001] = {0};
  char *ptr = c;
  int count = 0;

  while (sscanf(ptr, "%1000s", temp) == 1) {
    ptr += strlen(temp);
    if (*(ptr - 1) == 'a') {
      count++;
    }
    while (*ptr == ' ') {
      ptr++;
    }
  }

  fprintf(output, "%d", count);

  fclose(input);
  fclose(output);
  return 0;
}
