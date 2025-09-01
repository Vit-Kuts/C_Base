#include <stdio.h>

void Swap(int *arrayElementOne, int *arrayElementTwo) {
  int temp = *arrayElementTwo;
  *arrayElementTwo = *arrayElementOne;
  *arrayElementOne = temp;
}

void inversion(int *arr, size_t arrLen) {
  for (int i = 0; i < arrLen / 2; i++) {
    Swap(&arr[i], &arr[arrLen - 1 - i]);
  }
}

void InversionOfTheThird(int *arr, size_t arrLen) {
  int third = arrLen / 3;
  for (int i = 0; i < 3; i++) {
    inversion(arr + (third * i), third);
  }
}

int main() {
  int number[12];
  size_t arrLen = sizeof(number) / sizeof(int);

  for (size_t i = 0; i < arrLen; i++) {
    scanf("%d", &number[i]);
  }

  InversionOfTheThird(number, arrLen);

  for (size_t j = 0; j < arrLen; j++) {
    printf("%d ", number[j]);
  }

  return 0;
}