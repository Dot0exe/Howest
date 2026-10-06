#include <iostream> // enables the usage of std::cout and std::cin

void PrintDashedLine();
void PrintRandNum();
void PrintRandNumRestricted();
void PrintRandNumFloat();


int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	PrintDashedLine();
	PrintRandNum();
	PrintDashedLine();
	PrintRandNumRestricted();
	PrintDashedLine();
	PrintRandNumFloat();
	PrintDashedLine();


	return 0;
}

void PrintDashedLine()
{
	std::cout << "\n==========================\n\n";
}

void PrintRandNum()
{
	int randomNumber{rand()};
	std::cout << randomNumber << "\n";
	randomNumber = rand();
	std::cout << randomNumber << "\n";
	randomNumber = rand();
	std::cout << randomNumber << "\n";
	randomNumber = rand();
	std::cout << randomNumber << "\n";

}

void PrintRandNumRestricted()
{
	int randNumber{ rand() % 51 };
	std::cout << "[0,50]: " << randNumber << "\n";
	randNumber = (rand() % 71) + 10;
	std::cout << "[10,80]: " << randNumber << "\n";
	randNumber = (rand() % 41) - 20;
	std::cout << "[-20,20]: " << randNumber << "\n";
	randNumber = (rand() % 5) - 2;
	std::cout << "[-2,2]: " << randNumber << "\n";
}

void PrintRandNumFloat()
{
	int randNum{ (rand() % 501)};
	double convertedNum{ ((double)randNum / 100) +5 };
	std::cout << "[5.00,10.00]: " << convertedNum << "\n";
	randNum = (rand() % 1000);
	convertedNum = ((double)randNum / 100) - 5;
	std::cout << "[-5.00,5.00]: " << convertedNum << "\n";

}