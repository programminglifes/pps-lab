#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  char string[100];

  printf("Enter a string: ");

  // used to include multiple lines in one string
  int i = 0;
  int prev_char;
  while (true) {
    char ch;
    scanf("%c", &ch);
    if (ch == '\n' && prev_char == '\n') {
      string[i - 1] = '\0'; // removes the previsous end of line
      break;
    }
    string[i] = ch;
    prev_char = ch;
    i++;
  }

  int char_count = 0, lines = 0, sentances = 0, words = 0;

  for (int i = 0; i < strlen(string); i++) {
    char_count++;
    if (string[i] == ' ') {
      words++;
    } else if (string[i] == '\n') {
      lines++;
    } else if (string[i] == '.' || string[i] == '!' || string[i] == '?') {
      sentances++;
    }
  }

  if (string[0] != '\0')
    words++;

  printf("Number of characters: %d\n"
         "Number of words: %d\n"
         "Number of lines: %d\n"
         "Number of sentances: %d\n",
         char_count, words, lines, sentances);
}
