#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
  FILE *input;
  FILE *output;

  input = fopen("input.txt", "r");
  if (input == NULL)
  {
    perror("input.txt");
    return 1;
  }

  output = fopen("output.txt", "w");
  if (output == NULL)
  {
    perror("output.txt");
    fclose(input);
    return 1;
  }

  char c[1000] = {0};
  fseek(input, 0, SEEK_END);
  int file_size = ftell(input);
  fseek(input, 0, SEEK_SET);

  int bytes_read = fread(c, 1, file_size, input);
  c[bytes_read] = '\0';

  int length = bytes_read;
  while (length > 0 && (c[length - 1] == '\n' || c[length - 1] == '\r'))
  {
    length--;
  }

  for (int i = length - 1, j = 0; j < i; i--, j++)
  {
    if (c[i] != c[j])
    {
      fprintf(output, "NO");
      fclose(input);
      fclose(output);
      return 0;
    }
  }

  fprintf(output, "YES");
  fclose(input);
  fclose(output);
  return 0;
}