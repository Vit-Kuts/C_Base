#include <ctype.h>
#include <stdio.h>


void func() {
  int number = 0;
  scanf("%d", &number);
  if (number != 0) {
    if (number % 2) printf("%d ", number);
    func();
  }
}

int main() {
  func();
  return 0;
}