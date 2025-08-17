#include <stdio.h>
#include <math.h>

int middle(int number1, int number2);

int middle(int number1, int number2) {
  return (number1 + number2) / 2;
}

int main() {
  int number1 = 0, number2 = 0;
  scanf("%d%d", &number1, &number2);
  printf("%d", middle(number1, number2));
  return 0;
}
