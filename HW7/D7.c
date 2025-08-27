#include <stdio.h>

void func(int number) {
  printf("%d ", number);
  if (number >= 2) func(number - 1);
}

int main() {
  int number = 0;
  scanf("%d", &number);
  func(number);
  return 0;
}