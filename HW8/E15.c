#include <stdio.h>

#define SIZE 10

int main() {
  int arr[SIZE];
  int print[SIZE] = {0};

  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < SIZE; i++) {
    if (arr[i] == 0) {
      continue;
    }

    if (arr[i] > 0) {
      printf("%d ", arr[i]);
    }
  }

  for (int i = 0; i < SIZE; i++) {
    if (arr[i] == 0) {
      continue;
    }

    if (arr[i] < 0) {
      printf("%d ", arr[i]);
    }
  }

  return 0;
}