#include <stdio.h>

int main() {
  int a, reversed = 0;

  scanf("%d", &a);

  while (a != 0) {
    reversed = reversed * 10 + a % 10;
    a /= 10;
  }
  printf("%d", reversed);
  return 0;
}