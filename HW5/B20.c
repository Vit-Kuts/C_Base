#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, count = 0;

  scanf("%d", &a);
  if (a <= 1) {
    printf("NO");
    return 0;
  }

  for (int i = 1; i <= a; i++) {
    if (a % i == 0) {
      count++;
    }
  }

  if ((count == 0) || (count > 2)) {
    printf("NO");
  } else {
    printf("YES");
  }
  return 0;
}
