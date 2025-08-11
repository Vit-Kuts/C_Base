#include <stdio.h>

int main() {
  int a, even = 0, odd = 0;

  scanf("%d", &a);

  while (a != 0) {
    float temp = (a % 10) % 2;

    if (temp) {
      odd++;
    } else {
      even++;
    }

    a /= 10;
  }

  printf("%d %d", even, odd);

  return 0;
}