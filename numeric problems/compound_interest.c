#include <math.h>
#include <stdio.h>

int main() {
  float p, t, r;
  printf("Enter your principle amount: ");
  scanf("%f", &p);
  printf("Enter your yearly rate: ");
  scanf("%f", &r);
  printf("Enter number of years of interest: ");
  scanf("%f", &t);
  
  float amount = p * pow((double) 1 + r/100, (double) t);
  float ci = amount -  p; // formula
  printf("\n your interest is %f\n", ci);
}
