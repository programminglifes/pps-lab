#include <stdio.h>
#define TOTAL 100

int main(){
  int marks;
  printf("Enter your marks out of %d: ", TOTAL);
  scanf("%d", &marks);

  float perc = ((float) marks / TOTAL) * 100;
  printf("\n Your percentage is %f", perc);
  
  if ( perc < 40 ) {
    printf("\n You are failed\n");
  } else if (perc >= 40 && perc <= 60 ){
    printf("\n You are 2nd class\n");
  } else if (perc >= 60 && perc <= 70 ){
    printf("\n You are 1st class\n");
  } else {
    printf("\n You are in distinction\n");
  }
}
