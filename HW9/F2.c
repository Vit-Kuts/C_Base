#include <stdio.h>
#include <string.h>

void sort_even_odd(int n, int a[]) {
  int temp[n];
  int j = 0;

  memcpy(temp, a, n * sizeof(int));

  for (int i = 0; i < n; i++) {
    if (!(temp[i] % 2)) {
      a[j++] = temp[i];
    }
  }

  for (int i = 0; i < n; i++) {
    if ((temp[i] % 2)) {
      a[j++] = temp[i];
    }
  }
}

int main() {
  int arr[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
               10, 9,  8,  7,  6,  5,  4,  3,  2,  1};
  int size = sizeof(arr) / sizeof(int);

  sort_even_odd(size, arr);
  return 0;
}