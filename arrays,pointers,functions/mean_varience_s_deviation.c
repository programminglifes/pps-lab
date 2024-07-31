#include <stdio.h>

double mean(int data[], int count) {
  int sum = 0;
  for(int i = 0; i < count; i++){
    sum += data[i];
  }
  double mean = (double) sum / count;
  return mean;
}

double varience(int data[], int count, double mean_value){
  double variance, variance_sum = 0;
  for (int i = 0; i < count; i++) {
    variance_sum += (data[i] - mean_value) * (data[i] - mean_value);
  }
  variance = variance_sum / count;
  return variance;
}

int main() {
  int count;
  printf("----- Mean, Varience, Standard Deviation -----");
  printf("\nEnter the number of elemnts you want to enter: ");
  scanf("%d", &count);

  int data[count], square_sum = 0;
  
  for (int i = 0; i < count; i++) {
    printf("%d. ", i + 1);
    scanf("%d", &data[i]);
  }

  printf("Enter your numbers");
  double mean_value = mean(data, count);
  printf("\nMean of the data is: %f\n", mean_value);

  double variance_value = varience(data, count, mean_value);
  printf("\nVarience of the data is: %f\n", variance_value);

  return 0;
}
