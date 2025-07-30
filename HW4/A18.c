#include <stdio.h>

int main() {
  int num1 = 0, num2 = 0;

  scanf("%d%d", &num1, &num2);

  if (num1 > num2) {
    printf("Above");
  }

  if (num1 < num2) {
    printf("Less");
  }

  if (num1 == num2) {
    printf("Equal");
  }

  return 0;
}