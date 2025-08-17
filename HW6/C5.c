#include <stdio.h>

int summ(int number);

int summ(int number) {
  int summ = 0;

  for (int i = 1; i <= number; i++) {
    summ += i;
  }

  return summ;
}

int main() {
  int number = 0;
  scanf("%d", &number);
  printf("%d", summ(number));
  return 0;
}
