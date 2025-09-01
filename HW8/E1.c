#include <stdio.h>

int main() {
  int number[5];
  float result = 0;
  for (int i = 0; i < 5; i++) {
    scanf("%d", &number[i]);
    result += number[i];
  }

 printf("%.3f", result / 5);
  return 0;
}