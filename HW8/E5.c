#include <stdio.h>

int main() {
  int number[10];
  int summ = 0; 
  for (int i = 0; i < 10; i++) {
    scanf("%d", &number[i]);
    if (number[i] > 0) {
      summ += number[i];
    }
  }
  printf("%d", summ);
  return 0;
}