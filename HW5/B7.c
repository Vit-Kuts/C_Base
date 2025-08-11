#include <stdio.h>

int main() {
  int a;

  scanf("%d", &a);

  while (a != 0) {
    int temp = a % 10;
    a /= 10;

    int b = a;
    while (b != 0) {
      if (temp == b % 10) {
        printf("YES");
        return 0;
      } else {
        b /= 10;
      }
    }
  }
  printf("NO");

  return 0;
}