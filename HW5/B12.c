#include <stdio.h>

int main() {
  int a, min = 0, max = 0;

  scanf("%d", &a);

  if (a < 0) {
    return 0;
  }

  min = max = a % 10;

  while (a != 0) {
    if (min > a % 10) {
      min = a % 10;
    }

    if (max < a % 10) {
      max = a % 10;
    }

    a /= 10;
  }

  printf("%d %d", min, max);

  return 0;
}