#include <stdio.h>

int func(long int number) {
  static int summ = 0;
  if (number != 1) {
    func(number - 1);
  }
  summ += number;
  return summ;
}

int main() {
  long int n = 0;
  scanf("%d", &n);
  printf("%d ", func(n));
  return 0;
}