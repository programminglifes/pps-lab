#include <stdio.h>

int main() {
  FILE * file1;
  char filename[100];

  printf("File filename: ");
  scanf("%s", filename);

  file1 = fopen(filename, "r");

  if(file1 == NULL) {
    printf("Cannot open file\n");
  }

  while(!feof(file1)) {
    printf("%c", fgetc(file1));
  }
  printf("\n");
}
