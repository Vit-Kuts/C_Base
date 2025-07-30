#include <stdio.h>

int numb[3];
int max = 0;

int main() {
  for (int i = 0; i < 3; ++i) {
    scanf("%d", &numb[i]);
  }

  for (int i = 0; i < 3; ++i) {
    if (numb[i] > max) {
      max = numb[i];
    }
  }

  printf("%d", max);

  return 0;
}