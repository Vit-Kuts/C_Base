
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *input = fopen("input.txt", "r");
  if (input == NULL) {
    perror("input.txt");
    return 1;
  }

  FILE *output = fopen("output.txt", "w");
  if (output == NULL) {
    perror("output.txt");
    fclose(input);
    return 1;
  }

  char c[1001] = {0};
  int size = fread(c, 1, sizeof(c) - 1, input);
  fclose(input);
  c[size] = '\0';

  char temp[1001];
  char *ptr = c;

  while (*ptr != '\0') {
    while (isspace(*ptr)) {
      ptr++;
    }
    if (*ptr == '\0') break;

    if (sscanf(ptr, "%1000s", temp) == 1) {
      fprintf(output, "%s\n", temp);
      ptr += strlen(temp);
    }
  }

  fclose(output);
  return 0;
}