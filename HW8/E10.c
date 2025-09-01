#include <stdio.h>

int main(void) {
  int numbers[12];

  for (int i = 0; i < 12; i++) {
    int offset = i + 4;
    if (offset >= 12) {
      offset = i - 8;
    }
    scanf("%d", (numbers + offset));
  }

  for (int i = 0; i < 12; i++) {
    printf("%d ", numbers[i]);
  }
  return 0;
}
