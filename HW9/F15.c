#include <stdio.h>

int count_bigger_abs(int n, int a[]) {
  int max = a[0];
  for (int i = 1; i < n; i++) {
    if (max < a[i]) {
      max = a[i];
    }
  }

  int count = 0;

  for (int i = 0; i < n; i++) {
    if ((a[i] * (-1)) > max) {
      count++;
    }
  }

  return count;
}

int main(void) {
  int arr[] = {-47, 19, 8, -41, 24, 22, 44, 23, 28, -29};
  int size = sizeof(arr) / sizeof(int);

  printf("%d", count_bigger_abs(size, arr));
  return 0;
}