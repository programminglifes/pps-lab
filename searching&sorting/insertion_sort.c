#include <stdio.h>

void print_list(int list[], int count) {
  for (int i = 0; i < count; i++) {
    printf("\t%d", list[i]);
  }
}

int main() {
  int count;
  printf("Enter the number of elements you want: ");
  scanf("%d", &count);

  int list[count];

  for (int i = 0; i < count; i++) {
    printf("%d: ", i + 1);
    scanf("%d", &list[i]);
  }

  for (int i = 0; i < count; i++) {
    int j = i + 1;
    int temp = list[i];

    for (j = i + 1; j < count; j++) {
      if (temp > list[j]) {
        temp = list[j];
        for (int k = j; k > i; k--) {
          list[k] = list[k - 1];
        }
        list[i] = temp;
      }
    }
  }

  printf("Sorted list: ");
  print_list(list, count);
  printf("\n");
}
