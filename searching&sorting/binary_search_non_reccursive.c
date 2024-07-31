#include <stdbool.h>
#include <stdio.h>

int main() {
  int count;
  printf("Enter the number of elements you want: ");
  scanf("%d", &count);

  int list[count];
  printf("Make sure you enter numbers in sorted order: \n");
  for (int i = 0; i < count; i++) {
    printf("%d: ", i + 1);
    scanf("%d", &list[i]);
  }

  printf("Enter the number you want to search: ");
  int num;
  scanf("%d", &num);

  int start = 0;
  int end = count;
  int position = -1;
  while (true) {
    int mid = (start + end) / 2;
    if (list[mid] == num) {
      printf("%d found at %d of index %d\n", num, mid + 1, mid);
      position = mid;
      break;
    } else if (start == end || start == end - 1) {
      break;
    } else if (list[mid] > num) {
      end = mid;
    } else if (list[mid] < num) {
      start = mid;
    }
  }
  if (position == -1)
    printf("%d not found\n", num);
}
