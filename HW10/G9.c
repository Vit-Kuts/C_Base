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

  char c[1000] = {0};
  int size = fread(c, 1, sizeof(c), input);
  c[size] == '\0';
  bool printed[93] = {false};

  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= 93; j++) {
      if ((c[i] == (j + '!')) && (printed[j] == false)) {
        fprintf(output, "%c", c[i]);
        printed[j] = true;
      }
    }
  }

  fclose(input);
  fclose(output);
  return 0;
}
