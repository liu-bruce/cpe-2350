#include "function.h"
#include <stdio.h>
#include <stdlib.h>

void test_and_debug()
{
  printf("test and debug\n");
}

void single_dimesional_print(int *array_input , int array_size)
{

  for(int count = 0; count < array_size; count++ )
  {
    printf("array_input %i : %i \n",count ,array_input[count] );
  }

}
