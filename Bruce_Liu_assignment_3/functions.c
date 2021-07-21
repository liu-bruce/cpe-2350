#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

void menu()
{
  int action_selection = 0; // variable that holds the user's selection

// menu print output
  printf("action selection:\n\n"

          "1) coin flips\n"
          "2) dice rolls\n"
          "3) program quit\n\n"

          "action selection is:"
        );

  scanf_s("%i", &action_selection);// stores request from keyboard to variable action_selection

  //  input varification
  printf("\n\nThe selected action is %i\n\n\n\n",
          action_selection);

// implementation of menu selection
  switch (action_selection)
  {
    case 1:
    {
      coin_flip_count(); // summons the coin flip function
      break;
    }
    case 2:
    {
      dice_roll_count(); // summons the dice roll_count_request function
      break;
    }
    case 3:
    {

      break;
    }
    default:
    {
      // in case of a accidental input calls the menu function again recursive if it continues.
      printf("invalid input\n");
      menu();
    }
  }

}


void coin_flip_count()
{
  // int variables initalization
  int coin_result_buffer = 2,// set at 2 so the inital result is not conflicting with results since % 2 is expected to give 0 or 1
      coin_toss_count_request = 0;

  //doubles variable initalization
  double heads_count = 0,
         tails_count = 0,
         heads_ratio = 0.0,
         tails_ratio = 0.0,
         coin_probability = 2.0;

         srand(time(0)); // starts a sudo random seed with time as the seed variable


         // tactical feedback and coin input request
  printf("Mode coin flips by count\n\n\n"
          "Input the number of coin flips that you want:");

        // stores the user input of number of coin tosses
  scanf_s("%i", &coin_toss_count_request);

  printf("The requested coin flips are: %i\n\n",
   coin_toss_count_request);


// generates and tallies the results
  for(int count = 0 ;
      count < coin_toss_count_request ;
      count++)
      {
        // generates the coin toss
        coin_result_buffer = rand()%2;

        //for the moment heads is assocated with 1 as a generated value
          if(coin_result_buffer == 1)
          {
            heads_count++;// increments heads_count
          }
          // zero is assocated with tails
          else if(coin_result_buffer == 0)
          {
            tails_count++;// increments tails_count
          }
          else
          {
            // although it isnt necessary catches errors should they occur
            printf("an error has happened\n");
          }
        }

        // ratio caluclation  although it wasn't necessary I thought it would be useful information
heads_ratio = heads_count / coin_toss_count_request;
tails_ratio = tails_count / coin_toss_count_request;

  // returns the heads_count, tails_count, heads_ratio, tails_ratio
  printf("The heads count is: %.2lf\n"
        "The tails count is : %.2lf\n\n"
         "The head ratio is: %.2lf\n"
         "The tails ratio is : %.2lf\n"
         , heads_count, tails_count,
          heads_ratio,tails_ratio
        );

}


void dice_roll_count()
{
  // int values initalization
  int dice_result_buffer = 0,
      roll_count_request = 0;

// double values initalization
  double one_count = 0.0,
         two_count = 0.0,
         three_count = 0.0,
         four_count = 0.0,
         five_count = 0.0,
         six_count = 0.0,

         one_probablity = 0.0,
         two_probability = 0.0,
         three_probability = 0.0,
         four_probability = 0.0,
         five_probability = 0.0,
         six_probability = 0.0;

// a blank string to use as a string buffer for printf formattting
  char blank[]= "";

//random seed initalization with time as seed
  srand(time(0));

  // tactical feedback and dice_roll_count_request
  printf("Mode dice roll count\n\n"
         "Input the number of dice rolls you desire:"
        );
// stores the inputed value
  scanf_s("%i", &roll_count_request);

// The results are offset by 1
// since the values start at 0 rather than 1
  for(int count = 0 ;
    count < roll_count_request;
    count++)
  {
    //generates the random value and stores it in the  dice_result_buffer
      dice_result_buffer = rand()%6;
      // increments the -1 offset result to the each count
      switch(dice_result_buffer)
      {
        case 0:
        {
          one_count++;
          break;
        }
        case 1:
        {
          two_count++;
          break;
        }
        case 2:
        {
          three_count++;
          break;
        }
        case 3:
        {
          four_count++;
          break;
        }
        case 4:
        {
          five_count++;
          break;
        }
        case 5:
        {
            six_count++;
            break;
        }
        default:
        {
          // outputs in case of any errors although there shouldn't be
          // note this did catch an error when I was coding forgot the break statments
            printf("dice roll error\n" );
            break;
        }
      }
  }

  // computes the probablities of all the outcomes
  one_probablity = one_count /roll_count_request;
  two_probability = two_count/ roll_count_request;
  three_probability = three_count/ roll_count_request;
  four_probability = four_count/ roll_count_request;
  five_probability = five_count/ roll_count_request;
  six_probability = six_count/ roll_count_request;

 //outputs the results
  printf("Roll count is %i\n"
         "One count: %10.2lf %5s probablity %10.2lf %%\n"
         "two count: %10.2lf %5s probablity %10.2lf %%\n"
         "three count: %8.2lf %5s probablity %10.2lf %%\n"
         "four count: %9.2lf %5s probablity %10.2lf %%\n"
         "five count: %9.2lf %5s probablity %10.2lf %%\n"
         "six count: %10.2lf %5s probablity %10.2lf %%\n"
        ,roll_count_request
        ,one_count,blank, one_probablity
        ,two_count,blank, two_probability
        ,three_count,blank, three_probability
        ,four_count,blank, four_probability
        ,five_count,blank, five_probability
        ,six_count,blank, six_probability
      );

}
