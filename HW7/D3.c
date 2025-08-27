#include <stdio.h>

void func(long int number) {
  printf("%d ", number % 10);
  if (number / 10) {
    func(number / 10);
  }
  return;
}

int main() {
  long int n = 0;
  scanf("%d", &n);
  func(n);
  return 0;
}