#include <iostream>

//void AFunction();

enum class DrinkStage {
	Milk,
	BeerAndWine,
	Liquor
};

struct User {
	std::string name;
	int age;
	DrinkStage drinkStage;
};

int main()
{
	//AFunction();

	std::string userName{};
	std::cout << "\nEnter name for user: ";
	std::cin >> userName;

	int age{};
	std::cout << "\nEnter age for user: ";
	std::cin >> age;

	User user{
		userName,
		age
	};

	if (user.age < 16)
	{
		user.drinkStage = DrinkStage::Milk;
	}
	else if (user.age >= 16 && user.age <= 18)
	{
		user.drinkStage = DrinkStage::BeerAndWine;
	}
	else
	{
		user.drinkStage = DrinkStage::Liquor;
	}

	switch (user.drinkStage) {
	case DrinkStage::Milk:
		std::cout << "User: " << user.name << " can drink milk and juice\n";
		break;
	case DrinkStage::BeerAndWine:
		std::cout << "User: " << user.name << " can drink beer and wine\n";
		break;
	case DrinkStage::Liquor:
		std::cout << "User: " << user.name << " can drink alcohol above 14.9% alcohol\n";
		break;
	};

	return 0;
}
