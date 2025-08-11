#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;

  scanf("%d", &a);

  if (a < 10) {
    return 0;
  }

  for (int i = 10; i <= a; i++) {
    int summ = 0;
    int digit = 1;
    int numb = i;

    while (numb) {
      int temp = numb % 10;
      summ += temp;
      digit *= temp;
      numb /= 10;
    }

    if (summ == digit) {
      printf("%d ", i);
    }
  }
  return 0;
}
