#include <stdio.h>
#include <ctype.h>

void func();

void func() {
  int c = 0, count = 0;
  while ((c = getchar()) != '.') {
    if (isdigit(c))
    count++;
  }
  
  printf("%d", count);
  return;
}

int main() {
  func();
}