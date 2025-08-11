#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  int a;
  
  while((a = getchar()) != '.') {
     char c = tolower(a);
     printf("%c", c);
  }
  printf("\n");

  return 0;
}
