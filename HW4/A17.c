#include <stdio.h>

int main() {
  int year = 0;

  scanf("%d", &year);

  if (year == 12 || year == 1 || year == 2) {
    printf("winter");
  }

  if (year >= 3 && year <= 5) {
    printf("spring");
  }

  if (year >= 6 && year <= 8) {
    printf("summer");
  }

  if (year >= 9 && year <= 11) {
    printf("autumn");
  }

  return 0;
}