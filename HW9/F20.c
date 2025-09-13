#include <stdio.h>

int main() {
  int arr[10];
  int even_count = 0, odd_count = 0;

  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0) {
      even_count++;
    } else {
      odd_count++;
    }
  }

  int product_of_odd_digits(int num) {
    if (num == 0) return 0;

    int product = 1;
    int has_odd_digit = 0;
    num = (num < 0) ? -num : num;

    while (num > 0) {
      int digit = num % 10;
      if (digit % 2 != 0) {
        product *= digit;
        has_odd_digit = 1;
      }
      num /= 10;
    }
    return has_odd_digit ? product : 0;
  }

  int product_of_even_digits(int num) {
    if (num == 0) return 0;

    int product = 1;
    int has_even_digit = 0;
    num = (num < 0) ? -num : num;

    while (num > 0) {
      int digit = num % 10;
      if (digit % 2 == 0 && digit != 0) {
        product *= digit;
        has_even_digit = 1;
      }
      num /= 10;
    }
    return has_even_digit ? product : 0;
  }

  if (even_count > odd_count) {
    for (int i = 0; i < 10; i++) {
      if (arr[i] % 2 != 0) {
        arr[i] = product_of_odd_digits(arr[i]);
      }
    }
  } else {
    for (int i = 0; i < 10; i++) {
      if (arr[i] % 2 == 0) {
        arr[i] = product_of_even_digits(arr[i]);
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}