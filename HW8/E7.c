#include <stdio.h>

int main() {
  int number[10];
  int summ = 0, position = 4;
  
  for (int i = 0; i < 10; i++) {
    scanf("%d", &number[i]);
  }

  for (int i = 0; i < 10; i++) {
    if (i < 5) {
      printf("%d ", number[position--]);
    } 
    if ((i >= 5)) {
      printf("%d ", number[10 + position--]);
    }
  }
  return 0;
}