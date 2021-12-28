#include <iostream>

int main()
{
	// continue statement
	// Used inside loops only
	// Skips to next iteration of loop
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			continue;

		std::cout << i << " : in continue loop" << std::endl;
	}

	// break statement
	// Used in loops and switch cases
	// breaks the control flow -> get out of loop
	for (int i = 0; i < 5; i++)
	{
		if (i > 2)
			break;

		std::cout << i <<" : in break loop" << std::endl;
	}

	// return statement
	// can be written anywhere
	// get out of function entirely
	// if function has returning a value, we must return some value with
	// return statement to exit the function
	if (2 > 1)
			return 0;

	std::cout << "Print executed" << std::endl;

	std::cin.get();
	return 0;
}
