#include <stdio.h>
#include "function.h"

// Sorry I must change the apporch
void binary_convert_intake()
{
	int user_input = 0;

	printf("Input a value to be converted to binary.\n\n");
	scanf_s("%i", &user_input);
	binary_convert(user_input);
}

void binary_convert(int integer_input)
{
	int binary_memory[64],
		count = 0;

	// binary conersion and storage
	while (integer_input > 0)
	{
		if (integer_input % 2 == 1)
		{
			binary_memory[count] = 1;
		}
		else
		{
			binary_memory[count] = 0;
		}
		count++;
		integer_input /= 2;
	}

	// inverts the array since the mod tactic needs to be inverted
	// this is also why I rebeled against the template
	for (int dicount = count - 1; dicount >= 0; dicount--)
	{
		printf("%i", binary_memory[dicount]);
	}

}
