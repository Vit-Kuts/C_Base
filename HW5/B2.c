#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;

  scanf("%d %d", &a, &b);

  if (abs(a) > 100 || abs(b) > 100) {
    return 0;
  }

  if (a <= b) {
    for (int i = a; i <= b; ++i) {
      printf("%d ", i * i);
    }
  }
  return 0;
}