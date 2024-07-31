#include <stdio.h>

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  int temp = num;
  char str[10];
  int i = 0;
  while(temp > 0) {
    if(temp >= 50){
      str[i] = 'L';
      temp -= 50;
    } else if (temp >= 40){
      str[i] = 'X';
      str[++i] = 'L';
      temp -= 40;
    } else if (temp >= 10){
      str[i] = 'X';
      temp -= 10;
    } else if (temp >= 9){
      str[i] = 'I';
      str[++i] = 'X';
      temp -= 9;
    } else if (temp >= 5){
      str[i] = 'V';
      temp -= 5;
    } else if (temp >= 4){
      str[i] = 'I';
      str[++i] = 'V';
      temp -= 4;
    } else if (temp >= 1){
      str[i] = 'I';
      temp -= 1;
    }
    i++;
  }

  str[i] = '\0';
  printf("%d in roman numeral is %s\n", num, str);
}
