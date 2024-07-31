#include <stdio.h>

int main ()
{
  printf("Enter the number of elements you want: ");
  int n;
  scanf("%d", &n);

  if( n <= 0 ){
    printf("\n You cannot have an empty list, please choose a positive number > 0");
    return 0;
  }

  int list[n];

  for(int i = 0; i < n; i++){
     printf("Enter %d element: ", i);
     scanf("%d", &list[i]);
  }

  // finding minimum
  int min = list[0], min_index;
  
  for(int i = 0; i < n; i++){
    if (min > list[i]){
      min = list[i];
      min_index = i;
    }
  }

  // finding maximum
  int max = 0, max_index;

  for(int i = 0; i < n; i++){
    if( max < list[i]){
      max = list[i];
      max_index = i;
    }
  }
  
  // finding average
  int avg, sum = 0;
  for(int i = 0; i < n; i++){
    sum += list[i];
  }
  avg = sum/n;

  printf("\n you maximum is: %d with index %d", max, max_index);
  printf("\n you minumum is: %d with index %d", min, min_index);
  printf("\n you average is: %d", avg);
  return 0;
}

