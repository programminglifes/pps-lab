#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(){
   char name[100];
   char rev[100];

   printf("Enter a word: ");
   scanf("%[^\n]s", name);

   int len = strlen(name);

   for(int i = 0; i < len; i++){
     name[i] = tolower(name[i]);
   }

   int j = 0;
   for (int i = len - 1; i >= 0; i--){
     rev[j] = name[i];
     j++;
   }

   if(strcmp(name, rev) == 0){
     printf("%s is a palindrome\n", name);
   } else {
     printf("%s is not a palindrome\n", name);
   }

}
