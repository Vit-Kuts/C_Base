#include <stdio.h>

void func(int number);

void func(int number) {
  int summ = 0;

  while (number) {
    summ += number % 10;
    number /= 10;
  }

  summ % 2 ? printf("NO") : printf("YES");
  return;
}

int main() {
  int a = 0;
  scanf("%d", &a);
  func(a);
}