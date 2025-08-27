#include <stdio.h>

void func(int a) {
  static int summ = 0;
  if (a) {
    summ += a % 10;
    func(a / 10);
  }
  if (a == 0) {
    printf("%d", summ);
  }
}

int main() {
  int a = 0;
  scanf("%d", &a);
  func(a);
  return 0;
}