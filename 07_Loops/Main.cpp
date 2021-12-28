#include <iostream>

int main()
{
	// for loop -> Execute block of code multiple time
	// It consists of 3 statements
	// 1. Variable Declaration / Iterator
	// 2. Condition
	// 3. Coded that will be called before next iteration of loop

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Hello World!" << std::endl;
	}

	// Following loop is same as above
	/*
	int i = 0;
	bool condition = true;
	for ( ; condition; )
	{
		std::cout << "Hello Earth!" << std::endl;
		i++;
		if (!(i < 5))
			condition = false;
	}
	*/

	// while loop -> Same as for loop but just with one condition
	// Preferred when there is existing condition in code
	int j = 0;
	while (j < 5)
	{
		std::cout << "While loop" << std::endl;
		j++;
	}

	// do while loop -> Essentially a while loop but,
	// the loop body will be executed at least once no matter what
	bool condition = false;
	do
	{
		std::cout << "do-while loop" << std::endl;
	} while (condition);

	std::cin.get();
	return 0;
}
