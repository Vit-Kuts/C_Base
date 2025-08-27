#include <stdio.h>

int func(long unsigned int number) {
  static int count = 0;
  if (number >= 2)
    func(number / 2);
    if (number % 2) {
      count++;
    }
  return count;
}

int main() {
  long int n = 0;
  scanf("%d", &n);
  printf("%d", func(n));
  return 0;
}