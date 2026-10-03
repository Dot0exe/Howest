// Sayit, Ali - 1DAE13

#include <iostream> // enables the usage of std::cout and std::cin

int main()
{
	std::cout << "Please enter the first number: ";
	float firstNumber{1.f};
	std::cin >> firstNumber;

	std::cout << "Please enter the second number: ";
	float secondNumber{};
	std::cin >> secondNumber;

	float totalNumber{ firstNumber + secondNumber };

	//std::cout << firstNumber += secondNumber;
	std::cout << "The result of number " << firstNumber << " + " 
		<< secondNumber << " = " << totalNumber;

	return 0;
}

