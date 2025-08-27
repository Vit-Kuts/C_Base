#include <stdio.h>

int func(int number) {
  static int dev = 2;
  if (number != 1) {
    if (!(number % dev)) {
      printf("%d ", dev);
      func(number / dev);
    } else {
      dev += 1;
      func(number);
    }
  }
}

int main() {
  int n = 0;
  scanf("%d", &n);
  func(n);
  return 0;
}