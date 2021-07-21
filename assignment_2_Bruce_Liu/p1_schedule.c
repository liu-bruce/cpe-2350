#include "function.h"
#include <stdio.h>


void p1_schedule_input_intake()
{
	/*intialzation declarations
	trying a new style and it worked since the compiler doesn't care about white space.
	Also it work as demoed here
	*/
	int day_number = 0,
		hour = 0 ;


	// weekday number input request
	printf ("Enter the weekday integer in the range 1-7 (sunday - saturday):\n");

	/* weekday input storing
	experimented declaration %i also works
	since decimal to interger was slightly confusing
	%i is more rational than %d
	although they do the same thing
	*/
	scanf_s("%i", &day_number);


	// hour of day input requestmiltary time
	printf("Enter the hour of the day interger in the range of 0-23 hours:\n");


	//hour of day storage
	scanf_s("%i", &hour);

	/* function abstraction
	although it was not needed
	I felt that the rest of this function
	could be reused so I abstracted the rest
	takes in day_number and hour
	*/
	school_schedule(day_number, hour);

}

void school_schedule(int day_number, int hour)
{
	switch (day_number)
	{
	case 7:
	case 6:
	{
		//weekend
		printf("It is weekend\n"
			"I have no classes today.\n"
			"Although I may have some students seeking my assistance.\n"
		);
		break;
	}
	case 1:
	case 3:
	{
		//monday wednesday output

		// weekday output rather than copying and pasteing
		if (day_number == 1)
		{
			printf("It is a Monday\n");
		}
		if (day_number == 3)
		{
			printf("It is a Wednesday\n");
		}

		// hour output select

		if (hour >= 12 && hour < 14)
		{
			printf("Currently I have economics of race and gender\n\n\n");
		}
		else if (hour >= 15 && hour < 17)
		{
			printf("Currently I have c programing for engineers\n\n\n");
		}
		else if (hour >= 18 && hour < 20)
		{
			printf("Currently I have computer science 2\n\n\n");
		}
		else if (hour >= 20 && hour <= 21 && day_number == 3)
		{
			printf("I currently am being a learning assistant for senior design 2\n\n\n");
		}
		else
		{
			printf("This time slot is free\n\n\n");
		}
		break;
	}
	case 2:
	case 4:
	{
		// output if the input is tuesday or thursday

		// weekday selection output rather than copying and pasteing the other stuff
		if (day_number == 2)
		{
			printf("It is Tuesday.\n\n");
		}
		if (day_number == 4)
		{
			printf("It is Thursday.\n\n");
		}


		// time slot output select
		if (hour >= 12 && hour < 14)
		{
			printf("I currently have Digital Systems 1.\n\n\n");
		}
		else
		{
			printf("This time slot is free. \n"
				   "Although there is a chance\n"
				   "I might be assisting someone\n");
		}
		break;
	}
	default:
		// outputs if a unpredicted action is inputed
		printf("Invalid input\n\n");
	}
}
