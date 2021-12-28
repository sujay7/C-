#include <iostream>

int main()
{
	int x = 5;
	int comparisonResult = x == 5;

	// Conditional / Branching statement 
	// jump to different parts of code (je/jne)
	if (comparisonResult)
		std::cout << "Hello World!" << std::endl;

	const char* ptr = nullptr;
	if(ptr)
		std::cout << "Hello Ptr!" << std::endl;
	else
		std::cout << "Ptr is null!" << std::endl;

	// else if statement is just combination of else and if
	// else
	// { 
	//	 if{} 
	// }

	std::cin.get();
	return 0;
}
