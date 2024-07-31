/*
 * there is some missing code
 * and a bug of row and column
 * DO NOT WRITE THIS IN RECORD YET
 */

#include <stdio.h>

void print_matrix(int row, int col, int matrix[10][10]) {
  for (int i = 0; i < col; i++) {
    printf("  |\t");
    for (int j = 0; j < row; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("|\t\n");
  }
}

int main() {
  int matrix1[10][10];
  int matrix2[10][10];
  int row1, col1;
  int row2, col2;

  printf("Enter row and col: ");
  scanf("%d%d", &row1, &col1);

  printf("First matrix: ");
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col1; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("\nSecond matrix: \n");
  printf("Enter row and col: ");
  scanf("%d%d", &row2, &col2);

  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col1; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  printf("\n matrix1: \n");
  print_matrix(row1, col1, matrix1);
  printf("\n matrix2: \n");
  print_matrix(row2, col2, matrix2);

  if (row1 != row2 || col1 != col2) {
    printf("\nMatrix addition is not possible\n");
  } else {
    int result[10][10];
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
        result[i][j] = matrix1[i][j] + matrix2[i][j];
      }
    }
    printf("\nAddition: \n");
    print_matrix(row1, col1, result);
  }

  if ( row1 != col2 || col1 != row2) {
    printf("\nMatrix multiplication is not possible\n");
    return 0; // execution stops here
  }

  int matrix3[10][10];
  for (int i = 0; i < row1; i++) {
    for (int j = 0; j < col1; j++) {
      matrix3[i][j] = 0;
      for (int k = 0; k < row1; k++) {
        matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  printf("\n after multiplication: \n");
  print_matrix(row1, col1, matrix3);
}
