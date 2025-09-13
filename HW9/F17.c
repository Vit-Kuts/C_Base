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
  printf("%d ", summ);
}

int main(void) {
  func();
  return 0;
}