// Sayit, Ali - 1DAE13

#include <iostream> // enables the usage of std::cout and std::cin

int main()
{
	int playerLevel{1};
	
	std::cout << "Hey, adventurer, what is your level? \n";
	
	// (c)onsole(in)put
	std::cin >> playerLevel;
	
	/*
	Multi line comment here
	*/

	// std (standart) :: (c)onsole(out)put
	std::cout << "Player Level: " << playerLevel << "\n";

	float playerXp{ 100.f };
	std::cout << "Player XP: " << playerXp << "\n";

	char firstCharacterOfPlayersName{'D'};
	std::cout << firstCharacterOfPlayersName << "\n";

	double playerMoney{10.0};
	std::cout << "Player has : " << playerMoney << " amount of coins\n";
	
	// playerMoney = playerMoney + 10.0;
	playerMoney += 10;
	std::cout << "Player has : " << playerMoney << " amount of coins\n";

	bool canPlayerLevelup{};
	std::cout << std::boolalpha << canPlayerLevelup << "\n";



	return 0;
}