#include <stdio.h>

int count_between(int from, int to, int size, int a[]) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] >= from && a[i] <= to) {
      count++;
    }
  }
  return count;
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);

  printf("%d", count_between(0, 1, size, arr));
  return 0;
}