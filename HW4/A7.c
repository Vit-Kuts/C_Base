#include <stdio.h>

int a = 0, b = 0;

int main() {
  scanf("%d%d", &a, &b);
  a > b ? printf("%d %d", b, a) : printf("%d %d", a, b);
  return 0;
}