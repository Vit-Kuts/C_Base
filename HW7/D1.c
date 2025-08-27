#include <stdio.h>

void func(long int number) {
  if (number != 1) {
    func(number - 1);
  }
  printf("%d ", number);
  return;
}

int main() {
  long int n = 0;
  scanf("%d", &n);
  func(n);
  return 0;
}