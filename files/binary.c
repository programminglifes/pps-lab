#include <stdio.h>

int main() {
  FILE *file1;
  char filename[100];

  printf("File filename: ");
  scanf("%s", filename);

  file1 = fopen(filename, "wb");
  if(file1 == NULL){
    printf("Cannot create file\n");
  }

  printf("Enter 10 integers: ");
  int nums[10];
  for (int i = 0; i < 10; i++) {
    scanf("%d", &nums[i]);
  }

  fwrite(nums, sizeof(int), 10, file1);
  fclose(file1);

  // reading file
  file1 = fopen(filename, "rb");
  if(file1 == NULL) {
    printf("Cannot open file\n");
  }

  int nums2[10];
  fread(nums2, sizeof(int), 10, file1);
  for(int i = 0; i < 10; i++) {
    printf("%d ", nums2[i]);
  }
  printf("\n");

  fclose(file1);
}
