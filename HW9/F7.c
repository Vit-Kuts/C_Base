#include <stdio.h>

int compression(int a[], int b[], int N) {
  int current_element = 0;
  int number_elements = 0;

  if (a[0] == 0 || a[0] == 1) {
    for (int i = 0; i < N; i++) {
      if (a[i] != current_element) {
        number_elements++;
        current_element = a[i];
      }
      b[number_elements]++;
    }
    return number_elements + 1;
  }
  return 0;
}

int main(void) {
  int arrOut[17] = {0};
  int arr[] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1};
  int size = sizeof(arr) / sizeof(int);
  printf("%d\n", size);
  compression(arr, arrOut, size);
}