#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

void BlackOrWhite() {
  int coordinate[2] = {0};

  for (int i = 0; i < 2; i++) {
    coordinate[i] = getchar();
    if (isalpha(coordinate[i])) {
      coordinate[i] = toupper(coordinate[i]);
    }
  }

  uint8_t horizontal = coordinate[0] - 'A';
  uint8_t vertical = (coordinate[1] - '0') - 1;
  uint8_t board[8][8] = {0};
  uint8_t size = sizeof(board) / sizeof(board[0]);
  uint8_t color = 0;
  uint8_t temp = 0;

  for (int i = 0; i < size; i++) {
    color = temp;
    for (int j = 0; j < size; j++) {
      board[i][j] = color;
      temp = color;
      color = !color;
    }
  }
  printf("%s", board[vertical][horizontal] ? "WHITE" : "BLACK");
  return;
}

int main(void) {
  BlackOrWhite();
  return 0;
}