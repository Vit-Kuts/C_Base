#include <stdio.h>

int numb[5];
int max = 0;

int main() {
  for (int i = 0; i < 5; ++i) {
    scanf("%d", &numb[i]);
  }

  for (int i = 0; i < 5; ++i) {
    if (numb[i] > max) {
      max = numb[i];
    }
  }

  printf("%d", max);

  return 0;
}