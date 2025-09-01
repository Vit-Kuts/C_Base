#include <stdio.h>

#define SIZE 10

void SortUp(int *arr, size_t size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void SortDown(int *arr, size_t size) {
  for (int i = 0; i < size; i++) {
    for (int j = size; j < (size + size) - 1 - i; j++) {
      if (arr[j] < arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[SIZE];

  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr[i]);
  }

  for (int k = 0; k < SIZE; k++) {
    if (k < SIZE / 2) {
      SortUp(arr, SIZE / 2);
    }
    if (k > SIZE / 2) {
      SortDown(arr, SIZE / 2);
    }
  }

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}