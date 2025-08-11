#include <stdio.h>

int main() {
  int buff = 0, numbersCounter = 0;

  while (1) {
    scanf("%d", &buff);

    if (buff == 0) {
      printf("%d", numbersCounter);
      return 0;
    } else {
      float temp = buff % 2;
      if (temp == 0) {
        numbersCounter++;
      }
    }
  }
}