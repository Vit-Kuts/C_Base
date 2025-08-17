#include <stdio.h>

void is_prime(int n);

void is_prime(int n) {
  if (n < 2) {
    printf("NO");
    return;
  }

  for (int i = 2; i < n; i++) {
    if (!(n % i)) {
      printf("NO");
      return;
    }
  }

  printf("YES");
  return;
}

int main() {
  int a = 0;
  scanf("%d", &a);
  is_prime(a);
}