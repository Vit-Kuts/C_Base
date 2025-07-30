#include <stdio.h>

int numb[5];
int min = 0;

int main() {
  for (int i = 0; i < 5; ++i) {
    scanf("%d", &numb[i]);
  }

  min = numb[0];
  
  for (int i = 0; i < 5; ++i) {
    if (numb[i] < min) {
      min = numb[i];
    }
  }

  printf("%d", min);

  return 0;
}