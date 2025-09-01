#include <stdio.h>

#define SIZE 10

int main() {
  int arr[SIZE];

  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr[i]);
    if ((arr[i] / 10) % 10 == 0) {
      printf("%d ", arr[i]);
    }
  }
  return 0;
}