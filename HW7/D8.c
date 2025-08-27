#include <stdio.h>

void func(int a, int b) {
  if (a == b) {
    printf("%d", b);
  }

  if (a < b) {
    printf("%d ", a);
    func(a + 1, b);
  } else if (a > b) {
    printf("%d ", a);
    func(a - 1, b);
  }
}

int main() {
  int a = 0, b = 0;
  scanf("%d %d", &a,&b);
  func(a, b);
  return 0;
}