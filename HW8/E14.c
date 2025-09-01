#include <stdio.h>

#define SIZE 10

int main() {
  int arr[SIZE];
  int print[SIZE] = {0};

  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < SIZE; i++) {
    if (print[i]) {
      continue;
    }

    int count = 0;

    for (int j = i; j < SIZE; j++) {
      if (arr[i] == arr[j]) {
        count++;
        print[j] = 1;
      }
    }

    if (count > 1) {
      printf("%d ", arr[i]);
    }
  }
  return 0;
}