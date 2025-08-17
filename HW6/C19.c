#include <ctype.h>
#include <stdio.h>


void func();

void func() {
  int c = 0, summ = 0;
  while ((c = getchar()) != '.') {
    if (isdigit(c)) summ += c - '0';
  }

  printf("%d", summ);
  return;
}

int main() { func(); }