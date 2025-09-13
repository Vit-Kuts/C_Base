#include <stdio.h>

void func(int size, int arr[]) {
  int *min1, *min2 = NULL;

  min1 = &arr[0];
  min2 = &arr[1];

  for (int i = 2; i < size; i++) {
    if (*min1 >= arr[i]) {
      min2 = min1;
      min1 = &arr[i];
    } else if (*min2 > arr[i]) {
      min2 = &arr[i];
    }
  }

  if (min1 > min2) {
    int *temp = min2;
    min2 = min1;
    min1 = temp;
  }
  printf("%d %d", min1 - arr, min2 - arr);
}

int main(void) {
  int arr[30] = {0};

  for (int i = 0; i < 30; i++) {
    scanf("%d", &arr[i]);
  }

  func(30, arr);
  return 0;
}