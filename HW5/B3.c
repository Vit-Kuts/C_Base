#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, summ = 0;

  scanf("%d %d", &a, &b);

  if (abs(a) > 100 || abs(b) > 100) {
    return 0;
  }

  if (a <= b) {
    for (int i = a; i <= b; ++i) {
      summ += i * i;
    }
    printf("%d ", summ);
  }
  return 0;
}