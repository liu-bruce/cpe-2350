#include <stdio.h>
#include "functions.h"
/* function list for 2350
contol+c is for stop execution for conda
installed conda on windows and gcc
text editor: atom
author: Bruce Liu

*/
void text_output()
{
  //1/24/2021
  // initial test  for text may use for general interface debugging
  printf("Hello world??\n\n"
          "Verify output\n\n\n\n"

        );
}

void size_of_all_datatypes()
{
  // char branch

  int character = 0;
  int signed_char = 0;
  int unsigned_char = 0;

  character = sizeof(char);
  signed_char = sizeof(signed char);
  unsigned_char = sizeof(unsigned char);

  //signed  interger branch
  int short_int = 0;
  int interger = 0;
  int long_interger = 0;

  short_int = sizeof(short int);
  interger = sizeof(int);
  long_interger = sizeof(long int);

  //unsigned interger branch
  int unsigned_interger = 0;
  int unsigned_short_int = 0;
  int unsigned_long_int = 0;

  unsigned_interger = sizeof(unsigned int);
  unsigned_short_int = sizeof(unsigned short int);
  unsigned_long_int = sizeof(unsigned long int);

  //float branch
  int floating = 0;
  int double_float = 0;
  int long_double = 0;

  floating = sizeof(float);
  double_float = sizeof(double);
  long_double = sizeof(long double);

  //void
  int void_size = 0;

  void_size = sizeof(void);


  char first_part  [256] = "The size of the datatype:";
//  char second_part [256] = " "

printf("%s\n\n char is %i bytes.\n\n",first_part, character);
printf("%s\n\n signed char is %i bytes \n\n",first_part, signed_char);
printf("%s\n\n unsigned char is %i bytes \n\n",first_part, unsigned_char);
printf("%s\n\n short intger is %i bytes \n\n",first_part, short_int);
printf("%s\n\n int is %i bytes \n\n",first_part, interger);
printf("%s\n\n long interger is %i bytes \n\n",first_part, long_interger);
printf("%s\n\n unsigned interger is %i bytes \n\n",first_part, unsigned_interger);
printf("%s\n\n unsigned short interger is %i bytes \n\n",first_part, unsigned_short_int);
printf("%s\n\n unsigned long interger is %i bytes \n\n",first_part, unsigned_long_int);
printf("%s\n\n float is %i bytes \n\n",first_part, floating);
printf("%s\n\n double is %i bytes \n\n",first_part, double_float);
printf("%s\n\n long double is %i bytes \n\n",first_part, long_double);
printf("%s\n\n void is %i bytes \n\n",first_part, void_size);
}

void request_input()
{
  long int user_number_input = 0;
  printf("Input the long intger number:");
  scanf("%li", & user_number_input);
  printf("The inputed number is %ld \n",user_number_input );

}

void request_char_v1()
{
  char user_input = 0;

  printf(" Input the first letter of your name:");
  scanf("%c",& user_input);
  printf("The first letter of your name is: %c\n", user_input);

}

void request_char_v2()
{
  char user_input = 0;
  printf(" Input the first letter of your name :" );
  user_input = getchar();

  printf("The first character of your name is %c\n",user_input );
}

void ascii_return()
{
  printf("What is the letter of your inquiry?\n");
}

void test_bench()
{
   int abc;
   int 4item123;
}
