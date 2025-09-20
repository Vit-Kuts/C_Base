#include <stdio.h>
#include <string.h>

int main() {
  FILE* input;
  FILE* output;

  input = fopen("input.txt", "r");
  if (input == NULL) {
    perror("input.txt");
    return 1;
  }

  output = fopen("output.txt", "w");
  if (output == NULL) {
    perror("output.txt");
    return 1;
  }

  char words[200] = {0};
  char word1[100] = {0};
  char word2[100] = {0};
  int alpha[26] = {0};

  fgets(words, sizeof(words), input);

  int offset = 0;
  int size_word1 = 0;
  int size_word2 = 0;
  for (int i = 0; words[i] != ' '; i++) {
    word1[i] = words[i];
    offset++;
    size_word1++;
  }

  for (int i = 0; words[i] != '\0'; i++) {
    word2[i] = words[offset + i];
    size_word2++;
  }

  char *ptr_arr_min = NULL, *ptr_arr_max = NULL;
  int *size_min = NULL, *size_max = NULL;

  if (size_word1 >= size_word2) {
    ptr_arr_min = word2;
    size_min = &size_word2;
    ptr_arr_max = word1;
    size_max = &size_word1;

  } else {
    ptr_arr_min = word1;
    size_min = &size_word1;
    ptr_arr_max = word2;
    size_max = &size_word2;
  }

  for (int i = 0; i < *size_min; i++) {
    char temp = *(ptr_arr_min + i);
    for (int j = 0; j < *size_max; j++) {
      if (temp == ptr_arr_max[j]) {
        alpha[temp - 'a']++;
      }
    }
  }

  for (int i = 0; i < 26; i++) {
    if (alpha[i] == 1) {
      fprintf(output, "%c ", i + 'a');
    }
  }

  fclose(input);
  fclose(output);

  return 0;
}