#include <stdio.h>

int main() {
  int number[12];
  float summ = 0;
  for (int i = 0; i < 12; i++) {
    scanf("%d", &number[i]);
    summ += number[i];
  }
  printf("%.2f", summ / 12);
  return 0;
}