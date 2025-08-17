#include <stdio.h>

int func(void);

int func(void) {
  int number = 0, result = 0, max = 0;
  scanf("%d", &number);

  while (number) {
    if (number >= -2 && number < 2) {
      result = number * number;
    }

    if (number >= 2) {
      result = number * number + 4 * number + 5;
    }

    if (number < -2) {
      result = 4;
    }

    if (max < result) {
      max = result;
    }
    scanf("%d", &number);
  }
  printf("%d", max);
  return max;
}

int main() {
  func();
  return 0;
}
