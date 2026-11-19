#include <iostream>

enum CharacterClass
{
    Warrior = 1,
    Mage = 2,
    Archer = 3
};

int main()
{
    std::cout << "=== Character Creator ===\n\n";

    int selectedClass{};
    std::cout << "Choose a class (1 = Warrior, 2 = Mage, 3 = Archer): ";
    std::cin >> selectedClass;
    CharacterClass playerClass{ static_cast<CharacterClass>(selectedClass) };

    int level{};
    std::cout << "Level: ";
    std::cin >> level;

    bool hasPremium{};
    std::cout << "Premium account (0/1): ";
    std::cin >> hasPremium;

    /////////////// RULE #1: RUN THIS CODE AND CHECK IF OUTPUT IS CORRECT! //////////////
    std::cout << "\n--- RULE 1: bonus loot ---\n";
    std::cout << "Design rule: bonus loot ONLY for levels 11 -> 19 AND only with premium.\n";
    std::cout << "INPUT level = " << level
              << "\nINPUT premium = " << hasPremium;
    std::cout << "OUTPUT: ";
    //if (level > 10 && level < 20 || hasPremium)🟡
    if (level > 10 && level < 20 && hasPremium)
    {
        std::cout << "Bonus loot unlocked\n";
    } 
    else {
        std::cout << "No bonus loot\n";
    }

    /////////////// RULE #2: RUN THIS CODE AND CHECK IF OUTPUT IS CORRECT! //////////////
    std::cout << "\n--- RULE 2: reward multiplier ---\n";
    std::cout << "Design rule: level 1-4 = x1, level 5-9 = x2, level 10 or higher = x3. Never x0.\n";
    std::cout << "INPUT level = " << level << std::endl;
    int rewardMultiplier{};
    //if (level >= 1) 🟡
    if (level <= 4)
    {
        rewardMultiplier = 1;
    }
    // else if (level >= 5)
    else if (level <= 9)
    {
        rewardMultiplier = 2;
    }
    // else if (level >= 10)
    else if (level >= 10)
    {
        rewardMultiplier = 3;
    }


    std::cout << "OUTPUT: reward multiplier = x" << rewardMultiplier << '\n';

    /////////////// RULE #3: RUN THIS CODE AND CHECK IF OUTPUT IS CORRECT! //////////////
    std::cout << "\n--- RULE 3: character class name ---\n";
    std::cout << "Design rule: the selected number should output the mathing character class name (1=Warrior,..).\n"
              << "INPUT class number = " << selectedClass << "\nOUTPUT:\n";
    if (playerClass == Warrior)
    {
        std::cout << "User selected Warrior\n";
    }
    if (playerClass == Mage)
    {
        std::cout << "User selected Mage\n";
    }
    if (playerClass == Archer)
    {
        std::cout << "User selected Archer\n";
    }
    else
    {
        std::cout << "User selected Unknown class\n";
    }

    std::cout << "Class number with cast   : " << static_cast<int>(playerClass) << '\n';
    std::cout << "Class number without cast: " << playerClass << '\n';
    std::cout << "(Both lines compile. Should they? Explain.)\n";

    /////////////// RULE #4: READ THIS CODE AND GUESS THE OUTPUT, THEN RUN THIS CODE AND CHECK IF OUTPUT IS CORRECT! //////////////
    std::cout << "\n--- RULE 4: class bonus ---\n";
    std::cout << "Design rule: Warrior = High strength, Mage = High intelligence, Archer = High agility, others = Character loaded.\n";
    std::cout << "INPUT class number = " << selectedClass << "\nOUTPUT:\n";
    std::cout << "[switch output START]\n";
    switch (playerClass)
    {
    default:
        std::cout << "Character loaded\n";
        break;
    case Warrior:
        std::cout << "High strength\n";
    case Mage:
        std::cout << "High intelligence\n";
        break;
    case Archer:
        std::cout << "High agility\n";
        break;
    }
    std::cout << "[switch output END]\n";
    std::cout << "(Check the code for this part. Is this the output you expect after reading it?)\n";

    /////////////// RULE #5: RUN THIS CODE AND CHECK IF OUTPUT IS CORRECT! //////////////
    std::cout << "\n--- RULE 5: ranked matches ---\n";
    std::cout << "Design rule: allowed to join the ranked from level 5 and up.\n";
    std::cout << "INPUT level = " << level << "\nOUTPUT: ";
    bool isEligible{};
    if (level >= 5)
    {
        isEligible = true;
    }
    else
    {
        isEligible = false;
    }
    if (isEligible == true)
    {
        std::cout << "Can join ranked matches\n";
    }
    else
    {
        std::cout << "Cannot join ranked matches\n";
    }

    return 0;
}