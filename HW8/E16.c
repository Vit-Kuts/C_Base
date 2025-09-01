#include <stdio.h>

#define SIZE 10

int main() {
  int arr[SIZE];
  int print[SIZE] = {0};

  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < SIZE; i++) {
    for (int j = i; j < SIZE; j++) {
      if (arr[i] == arr[j]) {
        print[j] += 1;
      }
    }
  }

  int max = print[0];
  int ptr = 0;

  for (int i = 0; i < SIZE; i++) {
    if (print[i] > max) {
      max = print[i];
      ptr = i;
    }
  }

  printf("%d", arr[ptr]);

  return 0;
}