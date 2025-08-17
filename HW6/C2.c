#include <stdio.h>
#include <math.h>

int powNumber(int number, int index);

int powNumber(int number, int index) {
  return pow(number, index);;
}

int main() {
  int number = 0, index = 0;
  scanf("%d%d", &number, &index);
  printf("%d", powNumber(number, index));
  return 0;
}
