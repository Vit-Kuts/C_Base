#include <stdio.h>

#define SIZE 10

int main() {
  int arr[SIZE];
  int print[SIZE] = {0};

  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr[i]);
  }

  int count = 0;

  for (int i = 0; i < SIZE; i++) {

    for (int j = i + 1; j < SIZE; j++) {
      if (arr[i] == arr[j]) {
        print[j] += 1;
        print[i] += 1;
      }
    }
  }

  for (int i = 0; i < SIZE; i++) {
    if (print[i] == 0) {
      printf("%d ", arr[i]);
    }
  }
  return 0;
}