#include <stdio.h>
#include <string.h>
#include <ctype.h>

int factorial (int n);

int factorial (int n) {
  int summ = 1;
  for (int i = 1; i <= n; i++) {
    summ *= i;
  }
  return summ;
}

int main() {
  int n = 0;
  scanf("%d", &n);
  printf("%d", factorial(n));
}