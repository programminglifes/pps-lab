#include <stdio.h>

int main(){
  int num, count;
  printf("Enter your number: ");
  scanf("%d", &num);
  printf("Enter the number of rows you want: ");
  scanf("%d", &count);

  for (int i = 1; i <= count; i++){
    printf("\n %d x %d = %d", num, i, i * num);
  }
  printf("\n");

  return 0;
}
