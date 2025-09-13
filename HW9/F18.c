#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

void func() {
  int arr[10][10] = {0};

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int summ = 0;
  int j = 0;
  for (int i = 0; i < 10; i++) {
    int max = arr[i][0];
    for (int j = 1; j < 10; j++) {
      if (max < arr[i][j]) {
        max = arr[i][j];
      }
    }
    summ += max;
  }
  printf("%d", summ);
}

int main(void) {
  func();
  return 0;
}