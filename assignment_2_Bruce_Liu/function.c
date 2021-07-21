#include "function.h"
#include <stdio.h>

void hello_world()
{
	// enviroment testing
	printf("Hello World\n\n\n");

}
void if_else_test_case()
{
	// had an error 
	//end result forgot it was military time
	int test_input = 13;
	if (test_input >= 12 && test_input < 14)
	{
		printf("proc\n\n\n");
	}
	else
	{
		printf("not working\n\n\n");
	}
}