#include <stdio.h>
#include <string.h>

int main() {
  FILE* fp;
  char buff[100] = {0};

  fp = fopen("input.txt", "r");
  if (fp == NULL) {
    perror("input.txt");
    return 1;
  }

  int count = 0;
  int c;
  while ((c = fgetc(fp)) != EOF) {
    buff[count] = c;
    count++;
  }
  buff[count] = '\0';
  fclose(fp);

  int actual_count = count;
  if (count > 0 && buff[count - 1] == '\n') {
    actual_count--;
    buff[actual_count] = '\0';
  }

  fp = fopen("output.txt", "w");
  if (fp == NULL) {
    perror("output.txt");
    return 1;
  }

  for (int i = 0; i < 3; i++) {
    if (i > 0) {
      fprintf(fp, ", ");
    }
    fprintf(fp, "%s", buff);
  }

  fprintf(fp, " %d", actual_count);
  fclose(fp);

  return 0;
}