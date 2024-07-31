#include <stdio.h>
 
long long unsigned int factorial(int num){
  if(num <= 1){
    return 1;
  }

  return factorial(num - 1) * num;
}

int main(){

  int num;
  printf("Enter your number (20 max): ");
  scanf("%d", &num);

  long long unsigned int fact = factorial(num);
  printf("Factorial of %d is %lld\n", num, fact);
  
  return 0;
}
