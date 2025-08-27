#include <stdio.h>

void func(int a) {
  static int number = 0;
  static int count = 0;

  if (number == 0) {
    if (a > 1) {
      number = a;
    } else {
      printf("NO");
      return;
    }
  }

  if (a >= 1) {
    if (!(number % a)) {
      count += 1;
    }
    func(a - 1);
  }
  if (a == 1) {
    printf("%s", count > 2 ? "NO" : "YES");
  }
}

int main() {
  int a = 0;
  scanf("%d", &a);
  func(a);
  return 0;
}