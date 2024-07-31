#include <stdio.h>

int main(){
  int count;
  printf("Enter number of numbers you want: ");
  scanf("%d", &count);

  int list[count];

  for(int i = 0; i < count; i++){
    printf("%d: ", i + 1);
    scanf("%d", &list[i]);
  }

  printf("Enter number you want to search: ");
  int num;
  scanf("%d", &num);

  for(int i = 0; i < count; i++){
    if(list[i] == num){
      printf("%d found at %d of index %d\n", num, i + 1, i);
    }
  }
}
