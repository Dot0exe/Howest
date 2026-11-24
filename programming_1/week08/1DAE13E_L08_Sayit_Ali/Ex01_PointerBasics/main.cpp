//Sayit, Ali - DAE13E

#include <iostream> // enables the usage of std::cout and std::cin

int main()
{
	int cupsOfCoffee{ 1 };
	int* pEnergyLevel{&cupsOfCoffee};

	std::cout << "Cups of coffee: " << cupsOfCoffee << "\n";
	std::cout << "Location of coffee: " << &cupsOfCoffee << "\n";
	std::cout << "Energy level: " << pEnergyLevel << "\n";
	std::cout << "Dereferenced energy level: " << * pEnergyLevel << "\n";

	// pEnergyLevel -= 1;
	*pEnergyLevel -= 1;

	std::cout << "New energy level: " << pEnergyLevel << "\n";
	std::cout << "New dereferenced energy level: " << *pEnergyLevel << "\n";
	std::cout << "Cups of coffee now: " << cupsOfCoffee << "\n";


	return 0;
}

