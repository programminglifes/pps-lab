#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  char S[100];
  char ch;

  printf("Enter a string: ");
  scanf("%[^\n]s", S);

  printf("Find character: ");
  scanf("\n%c", &ch);

  bool found = false;
  int position = -1;
  for (int i = 0; i < strlen(S); i++) {
    if (tolower(S[i]) == tolower(ch)) {
      found = true;
      position = i + 1;
      break;
    }
  }

  if (found == true) {
    printf("%c is found at position %d\n", ch, position);
  } else {
    printf("%c is not found: %d\n", ch, position);
  }
}
