#include <stdio.h>

void func(int n) {
  int arr[8] = {0};
  int offset = 2;

  for (int i = 2; i <= n; i++) {
    for (int j = 2; j <= 9; j++) {
      if (!(i % j)) {
        arr[j - offset] += 1;
      }
    }
  }

  for (int i = 0; i < 8; i++) {
    printf("%d %d\n", i + 2, arr[i]);
  }
}

int main() {
  int n = 0;
  scanf("%d", &n);
  func(n);
  return 0;
}