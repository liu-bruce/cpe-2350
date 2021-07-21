#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void part2()
{
  char user_selection = 0;

  printf("\n\nSelect an action\n"
          "case 1 convert decimal to binary\n"
          "case 2 convert binary to decimal\n"
          "case 3 exit\n\n\n"
        );
  scanf("%c", &user_selection);


  switch(user_selection)
  {
      case '1' :
        {
          binary_convert_intake();
          part2();
         break;
        }
      case '2' :
        {
          part1();
          part2();
          break;

        }
      case '3':
        {
          break;
        }
      default:
      {
        printf("invalid user_input\n\n\n" );
        part2();
       break;
      }
    }

}



void part1()
{
  int user_input = 0,
      binary_value = 0,
      binary_base = 2,
      decimal_base = 10,
      decimal_value = 0,
      digit_count = 0,
      test_value = 0,
      binary_digit_value = 0;

    printf("Input a binary value:\n" );
    scanf("%i", & user_input);

     binary_value = user_input;
// counts the number of digits
    while(binary_value > 0)
    {
      binary_value = binary_value / decimal_base;

      digit_count++;

    }
    binary_value = user_input;
    while(digit_count > 0)
    {
    digit_count = digit_count - 1;
    binary_digit_value = binary_value / (int)pow(decimal_base,digit_count);
    decimal_value = decimal_value + (int)pow(binary_base,digit_count);
    }

//    printf("%i\n",binary_value );
    printf("decimal value equvalent is: %i", decimal_value);


}
