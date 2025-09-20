#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main() {
  FILE* input;
  FILE* output;

  input = fopen("input.txt", "r");
  if (input == NULL) {
    perror("input.txt");
    return 1;
  }

  output = fopen("output.txt", "w");
  if (output == NULL) {
    perror("output.txt");
    return 1;
  }

  char c = 0;
  while ((c = fgetc(input)) != EOF) {
    if ((c == 'a') || (c == 'A')) {
      if (isupper(c)) {
        c = 'B';
      } else {
        c = 'b';
      }
    } else if ((c == 'b') || (c == 'B')) {
      if (isupper(c)) {
        c = 'A';
      } else {
        c = 'a';
      }
    }
    fputc(c, output);
  }

  fclose(input);
  fclose(output);

  return 0;
}