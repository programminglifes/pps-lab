#include <stdio.h>

int main() {
  char str[100];
  printf("Enter roman numeral upto 50: ");

  scanf("%s", str);
  char ch = *str;
  int i = 0;
  int number = 0;

  while (ch != '\0') {
    if (ch == 'I') {
      if (str[i + 1] == 'V') {
        number += 4;
        i++;
      } else if (str[i + 1] == 'X') {
        number += 9;
        i++;
      } else {
        number += 1;
      }
    } else if (ch == 'V') {
      number += 5;
    } else if (ch == 'X') {
      if (str[i + 1] == 'L') {
        number += 40;
        i++;
      } else {
        number += 10;
      }
    } else if (ch == 'L'){
      number += 50;
    }
    ch = str[++i];
  }

  printf("%s in decimal is %d\n", str, number);
}
