#include <stdio.h>

int main() {
  FILE * file1;
  FILE * file2;
  FILE * file3;
  char filename1[100];
  char filename2[100];
  char filename3[100];

  printf("File 1 filename: ");
  scanf("%s", filename1);
  printf("File 2 filename: ");
  scanf("%s", filename2);
  printf("Merge into filename: ");
  scanf("%s", filename3);

  file1 = fopen(filename1, "r");
  
  if(file1 == NULL) {
    printf("Cannot open file: %s \n", filename1);
  }
  
  file2 = fopen(filename2, "r");
  
  if(file2 == NULL) {
    printf("Cannot open file: %s\n", filename2);
  }
  
  file3 = fopen(filename3, "w");
  
  if(file3 == NULL) {
    printf("Cannot create file: %s\n", filename3);
  }

  while(!feof(file1)){
    fputc(fgetc(file1), file3);
  }

  while(!feof(file2)){
    fputc(fgetc(file2), file3);
  }
  fclose(file1);
  fclose(file2);
  fclose(file3);

  printf("Files are successfully merged into %s.\n", filename3);

}
