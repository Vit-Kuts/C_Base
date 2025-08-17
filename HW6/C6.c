#include <stdio.h>
#include <math.h>

unsigned long long int quantityOfRice(int cellNumber);

unsigned long long int quantityOfRice(int cellNumber) {
  return pow(2, cellNumber - 1);
}

int main() {
  unsigned long long int number = 0;
  scanf("%llu", &number);
  printf("%llu", quantityOfRice(number));
  return 0;
}