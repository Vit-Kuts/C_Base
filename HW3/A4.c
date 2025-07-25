#include <stdio.h>

int a = 0, b = 0, c = 0, result = 0;

int main() {
  scanf("%d %d %d", &a, &b, &c);
  result = a + b + c;
  printf("%d+%d+%d=%d\n", a, b, c, result);
  result = a * b * c;
  printf("%d*%d*%d=%d", a, b, c, result);
  return 0;
}