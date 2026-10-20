// Sayit, Ali - DAE13

#include <iostream> // enables the usage of std::cout and std::cin
void printTheTruthTable();
void compareTwoNumbers();
void calculatePrice();
void calculateDayNumber();
void checkForLeapYear();
void calculateSeconds();
void scopedEnumerations();
void defineAndUsePoint2f();


int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	//printTheTruthTable();
	//compareTwoNumbers();
	//calculatePrice();
	//calculateDayNumber();
	//checkForLeapYear();
	//calculateSeconds();
	//scopedEnumerations();
	defineAndUsePoint2f();

	return 0;
}

void printTheTruthTable()
{
	bool trueBool{ true };
	bool falseBool{ false };

	std::cout << "-- Print Truth Table --\n";
	std::cout << "Logical binray AND-operator (&&)\n";
	std::cout << "True && true is " << std::boolalpha << (trueBool && trueBool) << "\n";
	std::cout << "True && false is " << std::boolalpha << (trueBool && falseBool) << "\n";
	std::cout << "False && true is " << std::boolalpha << (falseBool && trueBool) << "\n";
	std::cout << "False && false is " << std::boolalpha << (falseBool && falseBool) << "\n\n";

	std::cout << "Logical binray OR-operator (||)\n";
	std::cout << "True && true is " << std::boolalpha << (trueBool || trueBool) << "\n";
	std::cout << "True && false is " << std::boolalpha << (trueBool || falseBool) << "\n";
	std::cout << "False && true is " << std::boolalpha << (falseBool || trueBool) << "\n";
	std::cout << "False && false is " << std::boolalpha << (falseBool || falseBool) << "\n\n";

	std::cout << "Logical binray Not-operator (!)\n";
	std::cout << "!True is " << std::boolalpha << (!trueBool) << "\n";
	std::cout << "!False is " << std::boolalpha << (!falseBool) << "\n";

}

void compareTwoNumbers()
{
	std::cout << "-- Compare Two Numbers --\n";
	int firstNumber{ rand() % 11 };
	int secondNumber{ rand() % 11 };

	
	std::cout << "First number is: " << firstNumber << "\n";
	std::cout << "Second number is: " << secondNumber << "\n";
	
	if (firstNumber > secondNumber)
	{
		std::cout << "First number is larger than second one";
	}
	else if (firstNumber == secondNumber)
	{
		std::cout << "First and second number is equal";
	}
	else if (firstNumber < secondNumber)
	{
		std::cout << "Second number is larger than first one";
	}
	else
	{
		std::cout << " Idk Whats Happening!!";
	}

}

void calculatePrice()
{
	std::cout << "-- Calculate Price --\n";
	std::cout << "Number of Ballpoints? ";
	int inputNumber{};
	std::cin >> inputNumber;

	float price{};

	if (inputNumber < 20)
	{
		price = 4.f;
	}
	else if (inputNumber < 50)
	{
		price = 3.5f;
	}
	else if (inputNumber < 101)
	{
		price = 3.25f;
	}
	else
	{
		price = 3.10f;
	}

	float totalPrice{};
	totalPrice = inputNumber * price;
	std::cout << "Total price is " << totalPrice << "\n";
}

void calculateDayNumber()
{
	std::cout << "-- Calculate Day Number --\n";
	std::cout << "Day Number [1, 7] ? ";
	int dayNumber{};
	std::cin >> dayNumber;
	std::string dayMessage{};

	if (dayNumber == 1)
	{
		dayMessage = "Start of the week";
	}
	else if (dayNumber > 1 && dayNumber < 5)
	{
		dayMessage = "Middle of the week	";

	}
	else if (dayNumber == 5)
	{
		dayMessage = "Nearly weekend";

	}
	else if (dayNumber > 5 && dayNumber < 8)
	{
		dayMessage = "Weekend";

	}
	else
	{
		dayMessage = "Wrong day number";

	}
	std::cout << dayMessage << "\n";

	switch (dayNumber)
	{
	case 1:
			std::cout << "Monday\n";
			break;
	case 2:
		std::cout << "Tuesday\n";
		break;
	case 3:
		std::cout << "Wednesday\n";
		break;
	case 4:
		std::cout << "Thursday\n";
		break;
	case 5:
		std::cout << "Friday\n";
		break;
	case 6:
		std::cout << "Saturday\n";
		break;
	case 7:
		std::cout << "Sunday\n";
		break;
	}
}

void checkForLeapYear()
{
	std::cout << "-- Check Leap Year --\n";
	std::cout << "Year ? ";
	int inputYear{};
	std::cin >> inputYear;
	int dayOfFeb{};

	if (inputYear % 4 == 0)
	{
		if (inputYear % 100 == 0)
		{
			if (inputYear % 400 == 0)
			{
				dayOfFeb = 29;
			}
			else
			{
				dayOfFeb = 28;
			}
		}
		else
		{
			dayOfFeb = 29;	
		}
	}
	else
	{
		dayOfFeb = 28;
	}
	
	std::cout << "In the year " << inputYear << " february has " << dayOfFeb << " days";

}

void calculateSeconds()
{ } // complete this

void scopedEnumerations()
{
	enum class ActorState
	{
		running,
		fyling,
		falling
	};

	int randNum{ rand() % 3 };

	ActorState actor1{randNum};

	switch (static_cast<int>(actor1))
	{
	case 0:
		std::cout << "running";
		break;
	case 1:
		std::cout << "fyling";
		break;
	case 2:
		std::cout << "falling";
		break;
	}
	
}

void defineAndUsePoint2f()
{
	struct Point2f
	{
		float x;
		float y;
	};

	Point2f withoutInitializaiton;
	Point2f withInitializaiton{};
	Point2f withIntInitializaiton{25,26};

	//std::cout << withoutInitializaiton.x << " " << withInitializaiton.y;
	std::cout << withInitializaiton.x << " " << withInitializaiton.y << "\n";
	std::cout << withIntInitializaiton.x << " " << withIntInitializaiton.y << "\n";

	withoutInitializaiton.x = 20;
	withoutInitializaiton.y = 3;

}