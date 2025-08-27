#include <stdio.h>

void func() {
  char ch = 0;
  while ((ch = getchar()) != '.') {
    func();
    printf("%c", ch);
    return;
  }
}

int main() {
  func();
  return 0;
}