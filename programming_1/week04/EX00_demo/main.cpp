// Sayit, Ali - DAE13

#include <iostream> // enables the usage of std::cout and std::cin

enum class Direction 
{
	forward = 1,
	backward = -1
};

struct Plane
{
	int positionX;
	int positionY;
	Direction horizontalDirection;
	Direction verticalDirection;
};

int main()
{
	Plane airPlane
	{
		200,200,Direction::forward,Direction::backward
	};

	std::cout << "Position of arilplane: " << airPlane.positionX << "\n";
	std::cout << "Horizontal direction of airplane: " << static_cast<int>(airPlane.horizontalDirection) << "\n";

	const int speed{ 10 };
	airPlane.positionX += static_cast<int>(airPlane.horizontalDirection) * speed;
	std::cout << "Position of airplane: " << airPlane.positionX << "\n";

	airPlane.horizontalDirection = Direction::backward;
	airPlane.positionX += static_cast<int>(airPlane.horizontalDirection) * speed;
	std::cout << "New position of airplane: " << airPlane.positionX << "\n";
	
	return 0;
}

