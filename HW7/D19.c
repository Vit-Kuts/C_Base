#include <stdio.h>

void func() {
  int n = 0;
  static int count = 0;
  if ((n = getchar()) != '.') {
    if (n == 'a') count++;
    func();
  } else {
    printf("%d", count);
  }
}

int main() {
  func();
  return 0;
}