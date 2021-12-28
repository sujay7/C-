#include <iostream>
// Preprocessor statement (evaluated before compilation)
// Anything begining with # is a preprocessor statement in C++

// Declaration
void Log(const char* message);

int main()
{
	Log("Hello World!");
	std::cin.get();

	return 0;
}
