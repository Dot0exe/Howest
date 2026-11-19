// Sayit, Ali - DAE13

#include <iostream> // enables the usage of std::cout and std::cin

int main()
{
	unsigned int tableNumber{};
	std::cout << "Enter a table number: ";
	std::cin >> tableNumber;

	unsigned int limit{};
	std::cout << "Enter limit: ";
	std::cin >> limit;
	std::cout << "\n";
	
	
	
	
	
	for (int i{1}; i <= limit; ++i)
	{
		const int result{ i * static_cast<int>(tableNumber) };
		std::cout << i << " * " << tableNumber << " = " << i * tableNumber << "\n";
	}


	unsigned int counter{1};
	while (counter <= 10)
	{
		std::cout << counter << " * " << tableNumber << " = " << counter * tableNumber << "\n";
		++counter;
	}
	



	return 0;
}

