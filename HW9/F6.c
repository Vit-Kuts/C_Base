#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int is_two_same(int size, int a[]) {
  int temp = a[0];

  for (int i = 1; i < size; i++) {
    for (int j = i; j < size; j++) {
      if (a[j] == temp) return 1;
    }
    temp = a[i];
  }
  return 0;
}

int main() {
  int input[] = {1, 1, 2};
  int size = sizeof(input) / sizeof(int);

  printf("%s", is_two_same(size, input) ? "YES" : "NO");
  return 0;
}