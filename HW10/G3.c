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

  fseek(input, 0, SEEK_END);
  long file_size = ftell(input);

  fseek(input, -1, SEEK_END);
  char target = fgetc(input);

  if (target == '\n' || target == '\r') {
    fseek(input, -2, SEEK_END);
    target = fgetc(input);
    file_size--;
  }

  fseek(input, 0, SEEK_SET);
  char temp = 0;

  for (int i = 0; i < file_size - 1; i++) {
    if ((temp = fgetc(input)) == target) {
      fprintf(output, "%d ", i);
    }
  }

  fclose(input);
  fclose(output);

  return 0;
}