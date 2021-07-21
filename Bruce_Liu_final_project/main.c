#include "game.h"
#include <stdio.h>


void main()
{
  // interestingly enough the function input works with a scanf in it.
  unsigned int repeat = 1;
  while(repeat)
  {
    // the rock_paper_scissors_judge returns a zero to exit the loop.
  repeat  = rock_paper_scissors_judge(menu(), machine_action());
  // I was concerned the recusive way I was doing it befor might have caused a memory leak.
  }
}
