#include <stdio.h>

int main() {
  int number[5];
  int min = 0;

  scanf("%d", &number[0]);
  min = number[0];
  for (int i = 1; i < 5; i++) {
    scanf("%d", &number[i]);
    if (min > number[i]) {
      min = number[i];
    }
  }
  printf("%d", min);
  return 0;
}