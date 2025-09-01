#include <stdio.h>

int main() {
  int number[10];
  int max1 = 0, max2 = 0;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &number[i]);
  }

  if (number[0] > number[1]) {
    max1 = number[0];
    max2 = number[1];
  } else {
    max1 = number[1];
    max2 = number[0];
  }

  for (int i = 2; i < 10; i++) {
    if (number[i] > max1) {
      max2 = max1;
      max1 = number[i];
    } else {
      if (number[i] > max2) {
        max2 = number[i];
      }
    }
  }

  printf("%d", max1 + max2);
  return 0;
}