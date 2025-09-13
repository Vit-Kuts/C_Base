#include <stdio.h>

int func() {
  int number[1000] = {0};
  int temp, size = 0;

  while (1) {
    scanf("%d", &temp);

    if (temp == 0) {
      break;
    }

    number[size++] = temp;
  }

  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (number[j] > number[j + 1]) {
        int temp = number[j];
        number[j] = number[j + 1];
        number[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < size - 1; i++) {
    if (number[i + 1] - number[i] >= 2) {
      return number[i] + 1;
    }
  }
  return 0;
}

int main(void) { printf("%d", func()); }