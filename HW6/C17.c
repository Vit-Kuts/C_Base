#include <stdio.h>

void func(int n);

void func(int n) {
  int summ = 0, multiply = 1;

  while (n) {
    summ += n % 10;
    multiply *= n % 10;
    n /= 10;
  }

  summ == multiply ? printf("YES") : printf("NO");
  return;
}

int main() {
  int a = 0;
  scanf("%d", &a);
  func(a);
}