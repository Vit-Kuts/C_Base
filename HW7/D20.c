#include <stdio.h>

void func(int n, int p) {
  static int result = 1;
  if (p > 0) {
    result *= n;
    func(n, p - 1);
  } else {
    printf("%d", result);
  }
}

int main() {
  int n = 0, p = 0;
  scanf("%d %d", &n, &p);
  func(n, p);
  return 0;
}