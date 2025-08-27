#include <stdio.h>

void func(int number) {
  if (number >= 2) {
    if (!(number % 2)) {
      func(number / 2);
    } else {
      printf("NO");
      return;
    }
  } else {
    printf("%s", number < 1 ? "NO" : "YES");
  }
}

int main() {
  int n = 0;
  scanf("%d", &n);
  func(n);
  return 0;
}