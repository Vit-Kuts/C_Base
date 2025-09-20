#include <ctype.h>
#include <stdio.h>
#include <string.h>

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

  char c[10000] = {0};
  int size = fread(c, 1, sizeof(c), input);
  c[size] == '\0';

  int upper = 0, lower = 0;
  for (int i = 0; i < size; i++) {
    if (isalpha(c[i])) {
      isupper(c[i]) ? upper++ : lower++;
    }
  }

  fprintf(output, "%d %d", lower, upper);

  fclose(input);
  fclose(output);
  return 0;
}