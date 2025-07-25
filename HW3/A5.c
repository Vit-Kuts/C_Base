#include <stdio.h>

int a = 0, b = 0, c = 0;
float result = 0;

int main() {
  scanf("%d%d%d", &a, &b, &c);
  result = ((float)a + (float)b + (float)c)/3;
  printf("%.2f", result);
  return 0;
}