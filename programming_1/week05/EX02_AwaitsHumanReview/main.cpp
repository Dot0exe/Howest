#include <iostream>

// Used later when tallying damage.
int g_TotalDamage{};

int main()
{
	std::cout << "=== Dungeon Run - Console Log ===\n\n";

	// --- Wave of enemies spawns ---
	int numEnemies{ 5 };
	int enemyIndex{ 0 };
	while (enemyIndex < numEnemies)
	{
		std::cout << "Enemy " << enemyIndex + 1 << " has spawned.\n";
		++enemyIndex;
	}
	std::cout << "\n";

	// --- Player takes damage each round until defeated ---
	int playerHealth{ 100 };
	int damagePerHit{ 15 };
	//for (; playerHealth > 0; ) 🔵 Bad Style / Maintainability
	while(playerHealth > 0)
	{
		playerHealth -= damagePerHit;
		std::cout << "Player takes " << damagePerHit << " damage. Health left: " << playerHealth << "\n";
	}
	std::cout << "\n";

	// --- Drinking potions ---
	int numPotions{ 3 };
	//int i; 🔵 Bad Style / Maintainability
	int i{};
	//for (i = 0; i < numPotions; i++) 🔵 Bad Style / Maintainability
	for (i; i < numPotions; i++)
	{
		std::cout << "Drinking potion " << i + 1 << "\n";
	}
	std::cout << "Potions left in bag after loop: " << (numPotions - i) << "\n\n";

	// --- Town menu ---
	int menuChoice{};
	do
	{
		std::cout << "Town menu:\n";
		std::cout << "1. Rest\n2. Shop\n3. Leave town\n";
		menuChoice = 3; // simulated player choice
		std::cout << "You chose option " << menuChoice << ".\n";
	} while (menuChoice != 3);
	std::cout << "\n";

	// --- Checking if the run is over ---
	bool isGameOver{ false };
	while (isGameOver == false)
	{
		std::cout << "Wrapping up the run...\n";
		isGameOver = true;
	}
	std::cout << "\n";

	// --- Deciding whether to keep exploring ---
	bool isExploring{ true };
	//while (isExploring = false) 🟡 Logic Error
	while (isExploring == false)
	{
		std::cout << "Still exploring the dungeon...\n";
	}
	std::cout << "Exploration phase complete.\n\n";

	// --- Opening chests, skipping trapped ones ---
	int numChests{ 6 };
	for (int chestIndex{ 0 }; chestIndex < numChests; ++chestIndex)
	{
		std::cout << "Opening chest " << chestIndex << "\n";
		if (chestIndex == 2)
		{
			std::cout << "Chest " << chestIndex << " was trapped! Skipping ahead.\n";
			//chestIndex += 2; 🟡 Logic Error
			chestIndex + 1;
		}
	}
	std::cout << "\n";

	// --- Handing out loot to the party ---
	int partySize{ 4 };
	int totalGoldGiven{};
	for (int member{ 0 }; member <= partySize; ++member)
	{
		//totalGoldGiven = 10; 🟡 Logic Error
		totalGoldGiven += 10; 
		std::cout << "Party member " << member << " receives 10 gold.\n";
	}
	std::cout << "Total gold given out: " << totalGoldGiven << "\n\n";

	// --- Tally total damage dealt across a few hits ---
	int numHits{ 4 };
	for (int hit{ 0 }; hit < numHits; ++hit)
	{
		g_TotalDamage += 10;
	}
	std::cout << "Total damage dealt this run: " << g_TotalDamage << "\n\n";

	// --- Bonus XP, only granted if the player survived ---
	bool isAlive{ playerHealth > 0 };
	//int bonusXP;🔵 Bad Style / Maintainability
	int bonusXP{};
	if (isAlive)
	{
		bonusXP = 50;
	}
	std::cout << "Bonus XP earned: " << bonusXP << "\n";

	return 0;
}