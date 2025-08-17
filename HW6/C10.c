#include <stdio.h>

void func(int n);

void func(int n) {
  if (n < 2) {
    return;
  }

  while (n % 2 == 0) {
    printf("2 ");
    n /= 2;
  }

  for (int i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      printf("%d ", i);
      n /= i;
    }
  }

  if (n > 2) {
    printf("%d", n);
  }

  printf("\n");
}

int main() {
  int n = 0;
  scanf("%d", &n);
  func(n);
}