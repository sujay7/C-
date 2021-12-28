#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
	/// References / Alias
	// Extension of pointers / pointers in disguise
	// Have to refernce a already sexisting variable
	// References themselves are not new variables like pointers
	// they do not occupy memory
	
	int var = 7;
	int& ref = var;
	// ref is just a new name for var now
	// we are not going to have two variables in memory
	// ref just exists in source code for referncing var

	ref = 2;
	LOG(ref);

	// Example use case:-
	void IncrementWithPtr(int* value);
	void IncrementWithRef(int& value);
	
	IncrementWithPtr(&var);
	LOG(var);

	IncrementWithRef(ref);
	LOG(ref);

	// Once we declare a reference, we cant change what it refernces
	int a = 7;
	int b = 2;
	
	int& aRef = a;
	ref = b;
	// this statement will just assign value of b to aref and a
	
	LOG(a);
	LOG(aRef);

	std::cin.get();
	return 0;
}

void IncrementWithPtr(int* value)
{
	(*value)++;
}

// More easy and readable code, just a syntax sugar
void IncrementWithRef(int& value)
{
	value++;
}
