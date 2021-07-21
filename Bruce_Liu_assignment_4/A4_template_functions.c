#include "function.h"
#include <stdio.h>
void display(int arr[][MAX_COLS])\
{

  for(int count = 0 ; count < MAX_COLS ; count++ )
  {
    for(int dicount = 0 ; dicount< MAX_ROWS; dicount++)
    {
      printf("%i   ",arr[count][dicount] );
    }
    printf("\n" );
  }


}

void transpose_2D(int arr[][MAX_COLS], int arr_transpose[][MAX_ROWS])
{
  for(int count = 0 ; count < MAX_COLS ; count++ )
  {
    for(int dicount = 0; dicount < MAX_ROWS ; dicount++)
    {
        arr_transpose [dicount][count] = arr[count][dicount];
    }
  }
}

void multiply(int mat1[][MAX_COLS], int mat2[][MAX_COLS], int res[][MAX_COLS])
{
  for(int count = 0 ; count < MAX_COLS ; count++)
  {
    for(int dicount = 0 ; dicount < MAX_ROWS ; dicount++)
    {
      res[count][dicount] = mat1[count][dicount]* mat2[count][dicount];
    }
  }
}

void multiply_trans(int mat1[][MAX_COLS], int mat2_trans[][MAX_COLS], int res[][MAX_COLS])
{
  for(int count = 0; count < MAX_COLS ; count++)
  {
      for(int dicount = 0 ; dicount < MAX_COLS ; dicount++)
      {
        res[count][dicount] = mat1[count][dicount]* mat2_trans[count][dicount];
      }
  }

}
