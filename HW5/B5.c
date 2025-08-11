#include <stdio.h>

int main() {
  int a, count = 0, summ = 0;

  scanf("%d", &a);

  if (a < 0) {
    return 0;
  }

  while (a != 0) {
    summ += a % 10;
    a /= 10;
  }
  printf("%d", summ);

  return 0;
}