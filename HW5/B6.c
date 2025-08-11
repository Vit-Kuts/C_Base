#include <stdio.h>

int main() {
  int a, count = 0, summ = 0;

  scanf("%d", &a);
  
  while (a != 0) {
    int temp = a % 10;
    a /= 10;
    if (temp == a % 10) {
      printf("YES");
      return 0;
    }
  }
  printf("NO");

  return 0;
}