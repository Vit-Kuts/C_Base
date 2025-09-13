#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

void func() {
  int arr[5][5] = {0};

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int summ = 0;
  int j = 0;
  for (int i = 0; i < 5; i++, j++) {
    summ += arr[i][j];
  }

  int count = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (arr[i][j] > (summ / 5)) {
        count++;
      }
    }
  }
  printf("%d", count);
}

int main(void) {
  func();
  return 0;
}