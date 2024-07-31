#include <stdio.h>

int main(){
  printf("Enter three numbers: ");
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
 
  // finding the min
  if( a <= b && a <= c){
    printf("\n%d is min", a);
  } else if( b <= a && b <= c){
    printf("\n%d is min", b);
  } else if( c <= a && c <= b){
    printf("\n%d is min", c);
  }

  // finding the max
  if( a >= b && a >= c){
    printf("\n%d is max", a);
  } else if( b >= a && b >= c){
    printf("\n%d is max", b);
  } else if( c >= a && c >= b){
    printf("\n%d is max", c);
  }

  return 0;
}
