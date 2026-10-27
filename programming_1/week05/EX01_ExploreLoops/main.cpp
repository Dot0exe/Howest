// Sayit, Ali - DAE13

#include <iostream> // enables the usage of std::cout and std::cin

int main()
{
	const int limit{ 24 };
	const int steps{ 2 };
	
	int i{ 2 };
	int m{ 2 };
	int k{ 2 };
	for (; i <= limit ; i += steps )
	{
		std::cout << i << ", ";
	}

	std::cout << "\n ==================================\n\n";

	while (m <= limit)
	{
		std::cout << m << ", ";
		m += steps;
	}

	std::cout << "\n ==================================\n\n";

	do
	{
		std::cout << k << ", ";
		k += steps;
	} while (k <= limit);

	return 0;
}

