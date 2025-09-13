#include <ctype.h>
#include <stdio.h>

int find_max_array(int size, int a[]) {
  int max = a[0];

  for (int i = 1; i < size; i++) {
    if (max < a[i]) {
      max = a[i];
    }
  }
  return max;
}

int main() {
  int input[] = {100, 101};
  int size = sizeof(input) / sizeof(int);
  printf("%d", find_max_array(size, input));
  return 0;
}