#include <stdio.h>

void func(int a, int b);

void func(int a, int b) {
  if (a == 0) {
    printf("%d", b);
    return;
  }

  if (b == 0) {
    printf("%d", a);
    return;
  }

  if (a < b) {
    int summ = a + b;
    a = summ - a;
    b = summ - b;
  }

  int temp = 1;

  while (temp) {
    temp = a % b;
    a = b;
    b = temp;

    if (!(a % b)) {
      printf("%d", temp);
      return;
    }
  }
}

int main() {
  int a = 0, b = 0;
  scanf("%d %d", &a, &b);
  func(a, b);
}