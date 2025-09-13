#include <stdio.h>

void sort_array(int size, int a[]) {
  int temp = 0;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {20, 19, 4,  3,  2,  1, 18, 17, 13, 12,
               11, 16, 15, 14, 10, 9, 8,  7,  6,  5};
  int size = sizeof(arr) / sizeof(int);

  sort_array(size, arr);
  return 0;
}