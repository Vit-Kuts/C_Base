#include <stdio.h>

void convert(int n, int b) {
  if (n / b) convert(n / b, b);
  putchar(n % b + '0');
}

int main() {
  int n, b;
  scanf("%d%d", &n, &b);
  convert(n, b);
}