// WEEK 02
// Find the errors / bad practices. Not everything here is a compiler error -
// some lines compile fine but are still WRONG or risky. Find them all.
// Find category labels in CATEGORIES.md

#include <iostream>
#include <string>
#include <ctime>

void generateLoot();
void CalculateRewards();
void PlayerStatistics();
void MissingFeature();

int main()
{
    //////////// Example ////////////
    // 
    // 🔵 Bad Style / Maintainability:
    //int my_example;  ES.20 (always initialize), NL.8 (naming convention lowerCamelCase) 
    int myExample{};  // corrected
    // 
    /////////////////////////////////

    std::srand(static_cast<int>(std::time(nullptr)));

    std::cout << "=== Loot Box Simulator ===\n\n";
    std::cout << "Welcome to this loot box simulator."
              << "What is your name ? \n";
    std::string name{};
    std::cin >> name;
    std::cout << "Welcome, " << name << "! Simulation starts." << std::endl << std::endl;

    generateLoot();
    CalculateRewards();
    PlayerStatistics();
    MissingFeature();

    return 0;
}

void generateLoot()
{
    // Generate random rarity; min 5%, max 75%
    int rarity = std::rand() % 75 + 5;

    std::cout << "Loot rarity: " << rarity << " %\n";
}

void CalculateRewards()
{
    int TotalCoins{ 100 };
    int Wins{ 3 };

    // Add coins earned from wins
    TotalCoins = TotalCoins + Wins * 25;

    float averageCoins{ TotalCoins / Wins };

    std::cout << "\nCoins: " << TotalCoins << '\n';
    std::cout << "Average coins per win: "
        << averageCoins
        << '\n';
}

void PlayerStatistics()
{
    int level{ 1 };
    int XP{ 50 };
    int health{ 30 };

    int healthPercentage{ health / 100 };

    level++;
    --XP;

    std::cout << "\nLevel: " << level << '\n';
    // This line prints the XP that we determined in one of the lines above:
    std::cout << XP << '\n';
    std::cout << "Health: " << healthPercentage << " %\n";

    int bonus{ (int) (level * 12.5f) };

    std::cout << "Bonus: " << bonus << '\n';

    // Print current level
    std::cout << "Current level is " << level << '\n';

}