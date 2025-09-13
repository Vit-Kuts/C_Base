#include <stdio.h>

void change_max_min(int size, int arr[]) {
  int *min, *max = NULL;

  min = &arr[0];
  max = &arr[1];

  for (int i = 0; i < size; i++) {
    if (*min > arr[i]) {
      min = &arr[i];
    }

    if (*max < arr[i]) {
      max = &arr[i];
    }
  }

  int temp = arr[min - arr];
  arr[min - arr] = arr[max - arr];
  arr[max - arr] = temp;
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);

  change_max_min(size, arr);
  return 0;
}