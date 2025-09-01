#include <stdio.h>

int main(void) {
  int numbers[10];

  for (int i = 0; i < 10; i++) {
    int offset = i + 1;

    if (offset >= 10) {
      offset = i - 9;
    }
    scanf("%d", (numbers + offset));
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", numbers[i]);
  }
  return 0;
}
