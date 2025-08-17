#include <stdio.h>

void func() {
  int count = 0;
  char c;

  while ((c = getchar()) != '.') {
    if (c == '(') {
      count++;
    } else if (c == ')') {
      count--;
      if (count < 0) {
        printf("NO");
        return;
      }
    }
  }
  printf(count == 0 ? "YES" : "NO");
}

int main() {
  func();
  return 0;
}