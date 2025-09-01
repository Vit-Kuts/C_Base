#include <stdio.h>

int len(int n) {
  int size = 0;

  while (n) {
    n /= 10;
    size++;
  }
  return size;
}

void func(int *arr, int n) {
  const int size = len(n);
  for (int i = size - 1; i >= 0; i--) {
    arr[i] = n % 10;
    n /= 10;
  }
}

void func1(int n) {
  int size = len(n);
  int arr[size];
  func(arr, n);

  int max = arr[0];
  int temp = 0;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] < arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int i = 0; i < size; i++) {
    printf("%d", arr[i]);
  }
}

int main() {
  int n = 0;
  scanf("%d", &n);
  func1(n);
  return 0;
}