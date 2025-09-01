#include <stdio.h>

int main() {
  int number[10];
  int min = 0, max = 0, indexmin = 0, indexmax = 0;

  scanf("%d", &number[0]);
  min = number[0];
  max = number[0];
  for (int i = 1; i < 10; i++) {
    scanf("%d", &number[i]);
    if (min > number[i]) {
      min = number[i];
      indexmin = i;
    }

    if (max < number[i]) {
      max = number[i];
      indexmax = i;
    }
  }
  printf("%d %d %d %d", indexmax + 1, max, indexmin + 1, min);
  return 0;
}