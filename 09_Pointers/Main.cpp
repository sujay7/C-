#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
	/// Pointers
	// Memory -> most important resource for a running program
	// pointers are extemely important tool for managing and manipulating memory
	// Pointer -> an inerger/number that stores memory address
	// address tells us where the specific byte is located in memory
	// types are meaningless for pointers, we just use types to make reading easier
	
	// not a valid pointer, NULL / nullptr
	int* ptr = 0;

	/// Getting memory address of a variable -> &
	int var = 8;
	ptr = &var;
	LOG("Memory address for var: " << ptr);

	/// Derefercing the pointer -> *
	// Accessing the stored at memory address
	*ptr = 10;
	LOG("value of var: " << var);

	/// Variables are held on stack
	// Holding the data using pointer(on Heap)

	// Create 8 bytes of data in memory and
	// return a pointer to the begining of that block of memory
	char* buffer = new char[8];
	
	// fill block of memory with data that we specify
	memset(buffer, 0, 8);
	
	/// Pointer to a pointer / double pointer
	// pointer to a memory address which is storing another memory address
	char** dptr = &buffer;

	// We should always delete the data we allocated on heap
	delete[] buffer;

	std::cin.get();
	return 0;
}
