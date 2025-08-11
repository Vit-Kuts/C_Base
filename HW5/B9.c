#include <stdio.h>

int main() {
  int a;

  scanf("%d", &a);

  while (a != 0) {
    int temp = a % 10;
    a /= 10;

    if (temp%2) {
      printf("NO");
      return 0;
    }
  }
    printf("YES");
  return 0;
}