#include <iostream>

#define LOG(x) std::cout << x << std::endl;

/// Class
// Functionality provided by C++ for Object Oriented Programming
// Container for binding data and operations on data together

// By creating a class we create a new type
class Player
{
	// A class is private by default unlike struct which is public by default
public:
	// class variables / members
	int x, y;
	int speed;

	// class functions, operating on data of class
	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

int main()
{
	// Variables of class type are called objects
	Player player;

	// New object is called as instance
	// Here we instanciated object 'player'

	// Accessing variables and functionality of class with objects 
	player.x = 5;
	player.y = 5;
	player.speed = 1;
	player.Move(1, -1);

	LOG(player.x);
	LOG(player.y);

	std::cin.get();
	return 0;
}
