#include <stdio.h>

int main() {
  int a, b, remainder = 0, result = 0;

  scanf("%d %d", &a, &b);

  if (a < 0) {
    return 0;
  }

  if (b > a) {
    int summ = a + b;
    b = summ - b;
    a = summ - a;
  }

  while (a % b) {
    remainder = a % b;
    int summ = remainder + b;
    a = summ - remainder;
    b = summ - b;
  }

  printf("%d", remainder);
  return 0;
}