// Sayit, Ali - DAE13

#include <iostream> // enables the usage of std::cout and std::cin

void StorePositions();
void BestSoldGames();


int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	StorePositions();
	BestSoldGames();
	return 0;
}

void StorePositions()
{
	struct Point2f
	{
		float x;
		float y;
	};

	Point2f position{ (rand() % 91) + 10, (rand() % 180) + 20 };
	std::cout << " The initial position (x,y) is: " << position.x << ",  " << position.y << "\n";
	std::cout << "-> What movement do you want in the x direction? ";
	
	float addedXValue{};
	std::cin >> addedXValue;
	position.x += addedXValue;

	std::cout << "-> What movement do you want in the y direction? ";

	float addedYValue{};
	std::cin >> addedYValue;
	position.y += addedYValue;

	std::cout << " The position after movement (x,y) is: " << position.x << ",  " << position.y << "\n\n\n";
}

void BestSoldGames()
{
	struct GameSales
	{
		const std::string title;
		int sales;
		const std::string series;
	};

	GameSales bestSelling{"Minecraft", 238000000, "Minecraft"};
	GameSales secondBest{"Grand Theft Auto V", 185000000, "Grand Theft Auto"};
	GameSales thirdBest{"Tetris(EA)", 100000000, "Tetris"};

	std::cout << "#1 best selling game: " << bestSelling.title << " " << bestSelling.series << " with " << bestSelling.sales << " sales.\n";
	std::cout << "#2 best selling game: " << secondBest.title << " " << secondBest.series << " with " << secondBest.sales << " sales.\n";
	std::cout << "#3 best selling game: " << thirdBest.title << " " << thirdBest.series << " with " << thirdBest.sales << " sales.\n";

}
