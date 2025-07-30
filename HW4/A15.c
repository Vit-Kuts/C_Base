#include <stdio.h>

int main() {
  int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  float k = (float)(y2 - y1) / (float)(x2 - x1);
  float b = (float)(y1 - (k * x1));

  printf("%.2f %.2f", k, b);

  return 0;
}