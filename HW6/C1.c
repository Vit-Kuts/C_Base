#include <stdio.h>

int moduleNumber(int number);

int moduleNumber(int number) {
  if (number < 0) {
    number *= -1;
  }
  return number;
}

int main() {
  int number = 0;
  scanf("%d", &number);
  printf("%d", moduleNumber(number));
  return 0;
}