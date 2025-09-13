#include <stdio.h>

void swap_negmax_last(int size, int a[]) {
  int max_index = -1;

  for (int i = 0; i < size; i++) {
    if (a[i] < 0) {
      if (max_index == -1) {
        max_index = i;
      }

      if (a[max_index] < a[i]) {
        max_index = i;
      }
    }
  }

  if (max_index != -1) {
    int temp = a[size - 1];
    a[size - 1] = a[max_index];
    a[max_index] = temp;
  }
}

int main(void) {
  int arr[] = {1, -2, -3, -4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(int);
  swap_negmax_last(size, arr);
}