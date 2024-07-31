#include <stdio.h>

int main(){
  int num;
  printf("Enter your number (20 max): ");
  scanf("%d", &num);

  long long int fact = 1;
  for(int i = num; i >= 1; i--){
    fact *= i;
  }

  printf("Factorial of %d is %lld\n", num, fact);

  return 0;
}
