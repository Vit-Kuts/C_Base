#include <stdio.h>

int func(int number) {
  static int step = 1;
  static int b = 0;
  if (number > 0) {
    printf("\n number = %d step = %d\n", number, step);
    for (int i = 0 ; i < number - step; i++) {
      printf("%d", step);
      b++;
    }
    step++;
    //printf("%d", step);
    func(number - b);
  }

  // if (number == 1)
  // printf("%d", step + 1);
}

int main() {
  int n = 0;
  scanf("%d", &n);
  func(n);
  return 0;
}