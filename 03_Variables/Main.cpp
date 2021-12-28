#include <iostream>

int main()
{
	// Variables -> data 
	// Size of memory allocated for us
	
	// Interger types
	int variable = 8;				// 4 byte, 31 bits, 1 bit for sign
	unsigned int x = 4294967295;	// 32 bits

	char a = 'a';		// 1 bytes
	short b = 1;		// 2 bytes
	long c = 2;			// 4 bytes
	long long d = 3;	// 8 bytes

	// Decimal types
	float x1 = 5.5f;	// 4 bytes
	double x2 = 5.2;	// 8 bytes

	// Boolean
	bool flag = true;	// 1 byte 0 or 1

	// Size of data types
	std::cout << sizeof(long float) << std::endl;
	std::cin.get();

	return 0;
}