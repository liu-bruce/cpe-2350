#include <stdio.h>
#include <stdlib.h>
#include "function.h"


int main()
{
  int A[MAX_ROWS][MAX_COLS] = {
                                {9, 8, 7},
                                {4, 5, 6},
                                {3, 2, 1}
                              };

  int B[MAX_COLS][MAX_ROWS] ={
                                {1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}
                              };

  int B_T[MAX_COLS][MAX_ROWS];//Transpose of Matrix B

  int mul[MAX_COLS][MAX_ROWS];//Result of Multiplication between Matrix A and B

  int mul_trans[MAX_COLS][MAX_ROWS];//Result of Multiplication between Matrix A and B by transpose Matrix B_T

  // Print the matrix A, B
  printf("\n Matrix A: \n");
  display(A);
  printf("\n Matrix B: \n");
  display(B);

  // Print the transpose of Matrix B
  transpose_2D(B, B_T);
  printf("\n Transpose of Matrix B: \n");
  display(B_T);

  printf("\n Matrix A: \n");
  display(A);
  printf("\n Matrix B: \n");
  display(B);

  // Multiplication between Matrix A and B
  multiply(A, B, mul);
  printf("\n Multiplication of Matrix A and B: \n");
  display(mul);

  // Multiplication between Matrix A and B by transpose Matrix B_T
  multiply_trans(A, B_T, mul_trans);
  printf("\n Multiplication of Matrix A and B(trans): \n");
  display(mul_trans);

  //HINT: The result of multiply(A, B, mul) and multiply_trans(A, B_T, mul_trans) should be same!
}
