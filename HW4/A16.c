#include <stdio.h>

int main() {
  int num1 = 0, num2 = 0, num3 = 0;

  scanf("%d%d%d", &num1, &num2, &num3);

  if ((num1 < num2) && (num2 < num3)) {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}