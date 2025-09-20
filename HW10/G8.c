#include <ctype.h>
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

  char c[1000] = {0};
  int size = fread(c, 1, sizeof(c), input);
  c[size] == '\0';

  int numbers[size - 1];

  char *ptr = c;
  int temp = 0;
  int count = 0;
  int ptr_for_numbers = 0;

  while (*ptr) {
    if (sscanf(ptr, "%d%n", &temp, &count) == 1) {
      numbers[ptr_for_numbers++] = temp;
      ptr += count;
    } else {
      ptr++;
    }
  }

  qsort(&numbers[0], ptr_for_numbers, sizeof(int), compare_int);

  for (int i = 0; i < ptr_for_numbers; i++) {
    fprintf(output, "%d ", numbers[i]);
  }

  fclose(input);
  fclose(output);
  return 0;
}
