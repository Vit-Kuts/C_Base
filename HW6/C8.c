#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  int n = 0;

  while ( (n = getchar()) != '.') {
    islower(n)? putchar(toupper(n)) : putchar(n);
  }
}