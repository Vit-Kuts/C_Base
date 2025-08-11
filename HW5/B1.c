#include <stdio.h>
#include <locale.h>

int main() {
  int a, b, c;

  scanf("%d", &a);

  if (a > 100) {
    return 0;
  }

  for (int i = 1; i <= a ; ++i) {
    printf("%d %d %d\n", i, i*i, i*i*i);
  }
  return 0;
}