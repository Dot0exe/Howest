#include <iostream> // enables the usage of std::cout and std::cin
#include <algorithm>
#include <time.h>
#include "fish.h"

void PrintFishSize();

bool TryHeal(int& health, int maxHealth);

void HealOnce();
void HealLoop();

void GoDeeper(Fish fish, int depth = 0);

int g_Depth{};

int main()
{
	std::srand(static_cast<unsigned int>(time(nullptr)));

	// TODO STEP 0: How big is the fish?
	//PrintFishSize();

	// TODO STEP 1: How deep can you go?
	//std::cout << "\nHow deep can you go? Press ENTER to start!" ;
	//std::cin.get();

	//Fish fish{};
	//GoDeeper(fish);

	// TODO STEP 2: Try heal 
	HealOnce();
	HealLoop();
}

void PrintFishSize()
{
	// Prints size on stack for parameter by value (Fish fish)
	std::cout << "Size of the Fish \t: " << sizeof(Fish) << " bytes.\n";

	// Prints size on stack for parameter by value (BighFish fish)
	std::cout << "Size of the BigFish \t: " << sizeof(BigFish) << " bytes.\n";

	// Prints size on stack for parameter by reference (Fish& fish)
	Fish fish{ };
	std::cout << "Size of a Fish & \t: " << sizeof(&fish) << " bytes.\n";

	// Prints size on stack for parameter by reference (BighFish& fish)
	BigFish bigFish{ };
	std::cout << "Size of a BigFish & \t: " << sizeof(&bigFish) << " bytes.\n";
}

void GoDeeper(Fish fish, int depth)       
{
	--depth;
	std::cout << depth << " m" << std::endl;  // endl on purpose: flushes before the crash
	GoDeeper(fish, depth);	// recursion
}

bool TryHeal(int& health, int maxHealth)
{
	if (maxHealth <= 0)
	{
		return false;
	}

	int healedAmount{ rand() % (maxHealth / 2 + 1) };

	if (!healedAmount)          // 0 heal amount
	{
		return false;
	}
	if (health <= 0)            // dead players can't be healed
	{
		return false;
	}
	if (health >= maxHealth)    // already full
	{
		return false;
	}

	health = std::min(health + healedAmount, maxHealth);  // students may use condition instead

	return true;
}


void HealOnce()
{
	std::cout << "=== Single heal ===\n";
	int health{ 80 };
	const int maxHealth{ 100 };
	std::cout << "Health: " << health << '/' << maxHealth << '\n';

	const int before{ health };

	if (TryHeal(health, maxHealth))
	{
		std::cout << "Heal attempt: success\n";
		std::cout << "Health: " << health << '/' << maxHealth
			<< " (+" << health - before << ")\n";
	}
	else
	{
		std::cout << "Heal attempt: failed\n";
	}
}

void HealLoop()
{
	std::cout << "\n=== Heal loop ===\n";
	int health{ 1 };
	const int loopMax{ 10 };
	std::cout << "Health: " << health << '/' << loopMax << '\n';

	int attempts{};
	bool healed{ true };
	while (healed)
	{
		++attempts;
		const int old{ health };
		healed = TryHeal(health, loopMax);

		if (healed)
		{
			std::cout << "Heal " << attempts << ": " << old << " -> " << health
				<< " (+" << health - old << ")\n";
		}
		else
		{
			std::cout << "Heal " << attempts << ": failed\n";
		}
	}
	std::cout << "Stopped after " << attempts << " attempts. Final health: "
		<< health << '/' << loopMax << '\n';
}

