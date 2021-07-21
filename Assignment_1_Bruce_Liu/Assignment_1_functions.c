#include "functions.h"
#include <float.h>
#include <stdio.h>
void problem7()
{
int zero_constant = 0;
// initalization of user input section
int first_input = 0;
int second_input = 0;
int third_input = 0;

// sort temporary storage
int first_sort = 0;
int second_sort = 0;
int third_sort = 0;

// sorted value initalization section
int high_value = 0;
int mid_value = 0;
int low_value = 0;

// initalization of caluculated values
int sum_of_inputs = 0;
double average_of_inputs = 0;


// start input request and storage section
printf("\n\nInput 3 interger values\n\n"
        "Input your first value:"
      );
scanf("%d",& first_input);

printf("\nInput your second value:");
scanf("%d",&second_input);

printf("\nInput your third value:");
scanf("%d",&third_input);

// input return section

printf("\n\nThe first input was:  %d\n\n"
       "The second input was: %d\n\n"
       "The third input was: %d\n\n",
       first_input,second_input,third_input
      );


//conditional operator sorting

//finds high_value

first_sort = (first_input > second_input)?
              first_input:second_input;

high_value = (first_sort > third_input)?
               first_sort:third_input;

// finds low_value
second_sort = (first_input > second_sort)?
               second_input:first_input;

low_value = (second_sort > third_input)?
             third_input:second_sort;


//find mid_value

mid_value = (high_value != first_input)?
              first_input : mid_value;
mid_value = (high_value != second_input)?
              second_input:mid_value;
mid_value = (high_value != third_input)?
              third_input:mid_value;

mid_value = (low_value != first_input)?
             first_input:mid_value;
mid_value = (low_value != second_input)?
             second_input:mid_value;
mid_value = (low_value != third_input)?
             third_input:mid_value;


// output sorting values

printf("\n\nThe high value is: %d\n\n"
       "The middle value is: %d\n\n"
       "The low value is: %d\n\n\n\n",
        high_value, mid_value , low_value
      );


// calculated values section

sum_of_inputs = first_input + second_input + third_input;
average_of_inputs = sum_of_inputs / 3.0;


// output caluculated values section

printf("The sum of inputs is %d\n\n"
       "The average of inputs %.2lf\n\n ",
       sum_of_inputs, average_of_inputs
      );

}


void float_and_double_range()
{
  printf("The range of float is %e and %e \n\n\n", FLT_MIN , FLT_MAX);
  printf("The range of double is %e and %e \n\n\n", LDBL_MIN , LDBL_MAX);

}


void test_conditional()
{
  // conditional experimentation
    int input_1 = 654;
    int input_2 = 5671;
    int input_3 = 24;

    (input_1 > input_2) ?

      printf("input 1 is greater than input 2\n\n")// true branch

      :printf("input 2 is greater than input 1 \n\n" );// false branch

}
