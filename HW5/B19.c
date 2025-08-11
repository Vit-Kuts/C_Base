#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, summ = 0;

  scanf("%d", &a);
  if (a < 0) return 1;

  while (a) {
    summ += a % 10;
    a /= 10;
  }

  if (summ == 10) {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}
