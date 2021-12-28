#include <iostream>

// Functions
// Prevent code duplication / code reusability
// input as parameters, result as return value

// Signature
int Multiply(int a, int b)
{ 
	// Body
	int result = a * b;
	return result;
}

void MultiplyAndLog(int a, int b)
{
	std::cout << Multiply(a, b) << std::endl;
}

int main()
{
	// Function call
	MultiplyAndLog(5, 8);
	MultiplyAndLog(5, 4);
	MultiplyAndLog(2, 3);
	
	std::cin.get();
	return 0;
}
