#include <stdio.h>

void func() {
  int ch, tmp = 0;
  int alphabet[26] = {0};

  tmp = getchar();
  alphabet[tmp - 'a']++;
  printf("%c", tmp);

  while ((ch = getchar()) != '.') {
    if (ch == tmp) {
      alphabet[tmp - 'a']++;
    }

    if (ch != tmp) {
      printf("%d%c", alphabet[tmp - 'a'], ch);
      tmp = ch;
      alphabet[ch - 'a']++;
    }
  }
  printf("%d", alphabet[tmp - 'a']);
}

int main(void) { func(); }