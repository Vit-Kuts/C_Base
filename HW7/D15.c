#include <stdio.h>

void func() {
  static int max = 0;
  static int number;
  scanf("%d", &number);

  if (max == 0) {
    max = number;
  }
  if (number != 0) {
    if (number > max) {
      max = number;
    }
    func();
  } else {
    printf("%d", max);
  }
}

int main() {
  func();
  return 0;
}