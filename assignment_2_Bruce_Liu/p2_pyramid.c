#include "function.h"
#include <stdio.h>

/* hypothesis space count negative count for loop
then star count negative for loop
then space count negative for loop

implementing as functions
since I see a chance for code reuse

realoaction of space count by 1 and star by 2

I am going to have a
redunant line of code
for last print row I think.

*/
void row_inquiry()
{
	// function requests the row count of the pyramid also passes it to P2_pyramid
	int row_count;
	printf("Input the number of row(s) for the pyramid:");
	scanf_s("%i", &row_count);
	p2_pyramid(row_count);

}
void p2_pyramid(int row_print_count)
{
	// prints the pyramid basied on the requested row_print_count requested number
	int star_count = 1;
	for(int count = row_print_count;
		count > 0;
		count--
		)
	{
		space_print_count(count);
		star_print_count(star_count);
		space_print_count(count);
		star_count += 2;
		printf("\n");
	}


}

void star_print_count(int print_star_count)
{
	// prints the number of stars requested
	for (int count = print_star_count;
		count > 0;
		count--
		)
		printf("*");
}

void space_print_count(int print_space_count)
{
	//prints the number of spaces requested
	for (int count = print_space_count;
		count > 0;
		count--
		)
		printf(" ");
}
