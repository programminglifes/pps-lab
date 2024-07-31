#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int position;

  printf("Enter your string: ");
  scanf("%[^\n]s", str);

  printf("Enter the position you want to delete from: ");
  scanf("%d", &position);

  int len = strlen(str);

  char new_str[100];
  strncpy(new_str, str, position - 1);
  new_str[position - 1] = '\0';

  printf("Your new string is: %s\n", new_str);
}
