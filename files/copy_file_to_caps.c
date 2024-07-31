#include <ctype.h>
#include <stdio.h>

int main() {
  FILE *file1;
  FILE *file2;

  char filename[100];
  printf("File filename to copy: ");
  scanf("%s", filename);

  char filename2[100];
  printf("File filename to copy to: ");
  scanf("%s", filename2);

  file1 = fopen(filename, "r");
  if (file1 == NULL) {
    printf("\n File does not exist\n");
    fclose(file1);
    fclose(file2);
    return 0;
  }

  file2 = fopen(filename2, "w");

  char ch;
  while ((ch = fgetc(file1)) != EOF) {
    ch = toupper(ch);
    fputc(ch, file2);
  }

  fclose(file1);
  fclose(file2);
  printf("\nFile copied successfully\n");
}
