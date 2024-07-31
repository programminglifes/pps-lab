#include <stdio.h>

int main() {
  FILE *file1;

  char filename[100];
  char find;
  printf("File filename: ");
  scanf("%s", filename);
  printf("Enter a character (case sensitve): ");
  scanf("\n%c", &find);

  file1 = fopen(filename, "r");

  int count = 0;
  while (!feof(file1)) {
    char ch;
    ch = fgetc(file1);

    if (ch == find) {
      count++;
    }
  }

  printf("The character '%c' appears %d times in the file.\n", find, count);
  fclose(file1);
}
