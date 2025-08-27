#include <stdio.h>

void func(long unsigned int number) {
  if (number >= 2)
    func(number / 2);
  printf("%d", number % 2);
}

int main() {
  long int n = 0;
  scanf("%d", &n);
  func(n);
  return 0;
}