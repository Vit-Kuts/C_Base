#include <stdio.h>

int main() {
  int a, equalitiesCounter = 0;

  scanf("%d", &a);

  while (a != 0) {
    int temp = a % 10;
    a /= 10;

    if (temp == 9) {
      equalitiesCounter++;
    }
  }

  if (equalitiesCounter == 1) {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}