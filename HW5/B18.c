#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, f0 = 0, f1 = 1;

  scanf("%d", &a);
  if (a < 1) return 1;
  if (a == 1) {
    printf("%d ", a);
    return 0;
  }

  for (int i = 1; i < a; i++) {
    if (i == 1) {
      printf("%d ", f1);
    }

    int f = f1 + f0;
    printf("%d ", f);
    f0 = f1;
    f1 = f;
  }

  return 0;
}
