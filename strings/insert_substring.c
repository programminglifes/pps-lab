#include <stdio.h>
#include <string.h>
#include <strings.h>

int main() {
  char string[100];

  printf("Enter a string: ");
  scanf("%[^\n]s", string);

  printf("Enter a substring: ");
  char substring[100];
  scanf("\n%[^\n]s", substring);

  printf("Insert position: ");
  int position;
  scanf("%d", &position);

  int len = strlen(string);
  int sublen = strlen(substring);

  if (position < 0 || position > len) {
    printf("Invalid position. Position should be between 0 and %d\n", len);
  } else {
    char new_string[100];
    // copy the first part until the position
    strncpy(new_string, string, position);
    // from the new position of the string copy the sub string
    strncpy(new_string + position, substring, sublen);
    // from the position after substring copy the remaining first string
    strncpy(new_string + position + sublen, string + position, len - position);
    printf("New string: %s\n", new_string);
  }
}
