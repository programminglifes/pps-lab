#include <stdio.h>
#include <math.h>

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  int binary = 0, place = 0, temp = num;

  while(temp > 0){
    binary += pow(10, place) * (temp % 2);
    temp /= 2;
    place++;
  }

  printf("in binary: %d\n", binary);

  return 0;
}
