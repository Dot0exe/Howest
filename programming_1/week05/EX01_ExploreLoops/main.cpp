// Sayit, Ali - DAE13

#include <iostream> // enables the usage of std::cout and std::cin
#include <string>
#include <iomanip>
#include <math.h>

void EvenNumber();
void MovieRatings();
void GuessCounter();
void TrigonametryTable();
void AsciiTable();


int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	EvenNumber();
	MovieRatings();
	GuessCounter();
	TrigonametryTable();
	AsciiTable();
	return 0;
}

void EvenNumber()
{
	const int limit{ 24 };
	const int steps{ 2 };

	int i{ 2 };
	for (i; i <= limit; i += steps)
	{
		std::cout << i << ", ";
	}

	std::cout << "\n ==================================\n\n";

	int m{ 2 };
	while (m <= limit)
	{
		std::cout << m << ", ";
		m += steps;
	}

	std::cout << "\n ==================================\n\n";

	int k{ 2 };
	do
	{
		std::cout << k << ", ";
		k += steps;
	} while (k <= limit);
}

void MovieRatings()
{
	std::cout << "--- Movie Rating ---\n";
	bool isExit{};
	std::string exitString{ "exit" };
	std::string movie{};
	int counter{};
	int totalRating{};
	int stars{};
	const int maxRating{ 5 };

	while(!isExit)
	{

		std::cout << "Enter a movie you wish to rate (or type \"exit\" to stop): ";
		std::getline(std::cin, movie);
		if (movie == exitString)
		{
			break;
		}

		std::cout << "-> How many stars for this movie [0-5]? ";
		std::cin >> stars;
		std::cout << "| " << movie << " | ";
		std::cin.ignore();
		
		int i{};
		for (i ; i <= stars; i++)
		{
			std::cout << "*";
		}
		for (i;i <= maxRating ; i++)
		{
			std::cout << "-";
		}
		std::cout << " |\n";
		totalRating += stars;
		counter++;
	}
	float averageRating{ totalRating / static_cast<float>(counter) };
	std::cout << "Thank you for using our rating system.\n";
	std::cout << "-> On average, you give a rating of " << averageRating << " out of  5.";
}

void GuessCounter()
{
	std::cout << "--- Guess Number ---\n";
	std::cout << "Number to guess ? ";
	int numberIO{};
	std::cin >> numberIO;
	int randNum{};

	while (numberIO <= 0 || numberIO >= RAND_MAX)
	{
		std::cout << "This is a wrong number, number to guess ? ";
		std::cin >> numberIO;
	}

	int guessCounter{};
	while (numberIO != randNum)
	{
		randNum = rand();
		guessCounter++;
	}

	std::cout << "Number found after " << guessCounter << " guesses";
}

void TrigonametryTable()
{
	std::cout << "--- Trigonametry ---\n";
	std::cout << std::setw(10) << "Degrees" << std::setw(10) << "Radians" << std::setw(10) << "Cos" << std::setw(10) << "Sin\n";
	int degrees{};
	const int degreeSteps{ 10 };
	const int maxDegrees{180};

	float pi{ 3.14159 };

	for (degrees; degrees <= maxDegrees; degrees += degreeSteps)
	{
		float radians{ degrees * (pi / 180 ) };
		float cosCalc{cos(radians)};
		float sinCalc{sin(radians)};

		std::cout << std::setw(10) << degrees << std::setw(10) << std::setprecision(2) << std::fixed << radians << std::setw(10) << cosCalc << std::setw(10) << sinCalc << "\n";
	}
	

}

void AsciiTable()
{
	std::cout << "--- ASCII Table --- \n";
	char startOne{ 'a' };
	char endOne{ 'm' };
	char startTwo{ 'n' };
	char endTwo{ 'z' };
	for (startOne; startOne <= endOne; startOne++, startTwo++)
	{
		int charInInt{ startOne };
		std::cout << startOne << std::setw(10) << charInInt << std::setw(5);
		charInInt = startTwo;
		std::cout << startTwo << std::setw(10) << charInInt << "\n";
	}
}