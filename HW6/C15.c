#include <stdio.h>

void func(int number);

void func(int number) {
  int temp = number % 10;
  number /= 10;

  while (number) {
    if (number % 10 >= temp) {
      printf("NO");
      return;
    }
    temp = number % 10;
    number /= 10;
  }

  printf("YES");
  return;
}

int main() {
  int a = 0;
  scanf("%d", &a);
  func(a);
}