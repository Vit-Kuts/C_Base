#include <ctype.h>
#include <stdio.h>

void func(char* n) {
  int count[10] = {0};

  for (int i = 0; n[i] != '\0'; i++) {
    if (isdigit(n[i])) {
      count[n[i] - '0']++;
    }
  }

  for (int i = 0; i < 10; i++) {
    if (count[i] > 0) printf("%d %d\n", i, count[i]);
  }
}

int main() {
  char input[100];
  scanf("%99s", input);
  func(input);
  return 0;
}