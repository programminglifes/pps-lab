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

  // bubble sort
  for (int i = 0; i < count; i++) {
    int j = i + 1;
    if (list[i] > list[j]) {
      int temp = list[i];
      list[i] = list[j];
      list[j] = temp;
    }
  }

  printf("Sorted list: ");
  print_list(list, count);
  printf("\n");
}
