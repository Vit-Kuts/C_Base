#include <stdio.h>

int len(int n) {
  int size = 0;

  while (n) {
    n /= 10;
    size++;
  }
  return size;
}

void func(int n) {
  const int size = len(n);
  int arr[size];
  for (int i = size - 1; i >= 0; i--) {
    arr[i] = n % 10;
    n /= 10;
  }

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int n = 0;
  scanf("%d", &n);
  func(n);
  return 0;
}