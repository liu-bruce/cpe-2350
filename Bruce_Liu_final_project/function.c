#include <stdio.h>
#include "game.h"
#include <stdlib.h>
#include <time.h>

// retrives and returns a players action selection.
unsigned int menu()
{
  system("pause");
  system("cls");
  unsigned int player_selection = 0;
  printf("Greetings make you selection for attack.\n"
          "Actions selection:\n"
          "action 0: rock\n"
          "action 1: paper\n"
          "action 2: scissors\n"
          "action anything else : exit\n"
        );
  scanf("%u", &player_selection );


  return (player_selection);
}
// processes the player action and the machine's roll
unsigned int rock_paper_scissors_judge(unsigned int player_action, unsigned int machine_action)
{
  /*
  "Actions legend"
  "action 0: rock"
  "action 1: paper"
  "action 2: scissors"
  "action anything else: exit"
  */

  printf("players action is %u\n"
          "machine action is %u\n",
          player_action, machine_action);

  // covers three tie cases
  if( player_action == machine_action)
  {
    printf("draw \n");
    return (1);
  }

  // rock vs paper cases
  else if(player_action == 0 && machine_action == 1)
  {
    printf("machine wins\n");
    return (1);
  }
  else if(player_action == 1 && machine_action == 0)
  {
    printf("player wins\n");
    return (1);
  }
  // paper vs scissors
  else if(player_action == 1 && machine_action == 2)
  {
    printf("machine wins\n");
    return (1);
  }
  else if (player_action == 2 && machine_action == 1)
  {
    printf("player wins\n");
    return (1);
  }
  // rock vs scissors
  else if (player_action == 0 && machine_action == 2)
  {
    printf("player wins\n");
    return (1);
  }
  else if (player_action == 2 && machine_action == 0)
  {
    printf("machine wins\n");
    return (1);
  }
  else
  {
    return (0);
  }

}

//returns machines auto action roll
unsigned int machine_action()
{
// randomization initlazation
  srand((unsigned)time(NULL));
  unsigned int machine_action_throw = rand() %3;
  return (machine_action_throw);

}
