#include <stdio.h>

int a = 0, b = 0, c = 0, result = 0;

int main() {
  scanf("%d", &a);

  result = a / 100;
  a = a % 100;

  result *= a / 10;
  a = a % 10;

  result *= a;
  printf("%d", result);
  return 0;
}