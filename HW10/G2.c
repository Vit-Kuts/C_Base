#include <stdio.h>
#include <string.h>

int main() {
  FILE* fp;

  fp = fopen("input.txt", "r");
  if (fp == NULL) {
    perror("input.txt");
    return 1;
  }

  int number = 0;
  fscanf(fp, "%d", &number);

  char str[number];
  memset(str, 0, sizeof(char));

  fclose(fp);

  fp = fopen("output.txt", "w");
  if (fp == NULL) {
    perror("output.txt");
    return 1;
  }

  char alph = 'A';
  int numb = 1;
  for (int i = 1; i <= number; i++) {
    if (i % 2) {
      if (alph > 'Z') {
        alph = 'A';
      }
      fprintf(fp, "%c", alph++);
    } else {
      if (numb >= 10) {
        numb = 2;
      }
      fprintf(fp, "%d", numb);
    }
    numb++;
  }
  fclose(fp);
  return 0;
}