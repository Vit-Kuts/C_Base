#include <stdio.h>

int sum_between_ab(int from, int to, int size, int a[]) {
  int summ = 0;
  for (int i = 0; i < size; i++) {
    if ((a[i] >= from && a[i] <= to) || (a[i] >= to && a[i] <= from)) {
      summ += a[i];
    }
  }
  return summ;
}

int main(void) {
  int arr[] = {-47, 19, 8, -41, 24, 22, 44, 23, 28, -29};
  int size = sizeof(arr) / sizeof(int);

  printf("%d", sum_between_ab(0, 5, size, arr));
  return 0;
}