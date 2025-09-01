#include <stdio.h>

#define SIZE 10

int main() {
  int arr[SIZE];

  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < SIZE - 1; i++) {
    for (int j = 0; j < SIZE - 1 - i; j++) {
      if (arr[j] % 10 > arr[j + 1] % 10) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}