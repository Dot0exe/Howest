// Sayit, Ali - 1DAE13

#include <iostream> // enables the usage of std::cout and std::cin

int main()
{

	std::cout << "The person to my left, What is you name? ";	
	std::string thePersonToMyLeftName;
	std::cin >> thePersonToMyLeftName;

	std::cout << thePersonToMyLeftName << ", Where are you from? ";
	std::string thePersonToMyLeftCountry;
	std::cin >> thePersonToMyLeftCountry;

	std::cout << thePersonToMyLeftName <<", How old are you? ";
	float thePersonToMyLeftAge;
	std::cin >> thePersonToMyLeftAge;


	
	std::cout << "The person to my right, What is you name? ";
	std::string thePersonToMyRightName;
	std::cin >> thePersonToMyRightName;

	std::cout << thePersonToMyRightName << ", Where are you from? ";
	std::string thePersonToMyRightCountry;
	std::cin >> thePersonToMyRightCountry;

	std::cout << thePersonToMyRightName << ", How old are you? ";
	float thePersonToMyRightAge;
	std::cin >> thePersonToMyRightAge;

	std::cout << thePersonToMyRightName << " what is your favorite color? ";
	std::string thePersonToMyRightFavColor;
	std::cin >> thePersonToMyRightFavColor;

	std::cout << thePersonToMyLeftName << " what is the rgb value of the " << thePersonToMyRightFavColor << "?";
	float rgbValue1{};
	float rgbValue2{};
	float rgbValue3{};
	std::cin >> rgbValue1 >> rgbValue2 >> rgbValue3;

	std::cout << "\nThe person sitting on my left is called " << thePersonToMyLeftName << "\n";
	std::cout << thePersonToMyLeftName << " is  from " << thePersonToMyLeftCountry << "\n";
	std::cout << "The age of the " << thePersonToMyLeftName << " from " << thePersonToMyLeftCountry << " is " << thePersonToMyLeftAge << "\n\n";


	std::cout << "The person sitting on my right is called " << thePersonToMyRightName << "\n";
	std::cout << thePersonToMyRightName << " is  from " << thePersonToMyRightCountry << "\n";
	std::cout << "The age of the " << thePersonToMyRightName << " from " << thePersonToMyRightCountry << " is " << thePersonToMyRightAge << "\n";

	float averageAge { (thePersonToMyLeftAge + thePersonToMyRightAge) / 2};

	std::cout << "The average age of " << thePersonToMyLeftName << " and " << thePersonToMyRightName << " is " << averageAge << "\n\n";
	
	std::cout << thePersonToMyRightName << " loves the color " << thePersonToMyRightFavColor << "\n";

	int maxRgbValue{ 255 };

	float normalizedRgbValue1{ rgbValue1 / maxRgbValue };
	float normalizedRgbValue2{ rgbValue2 / maxRgbValue };
	float normalizedRgbValue3{ rgbValue3 / maxRgbValue };

	std::cout << "The normalized RGB value of the " << thePersonToMyRightFavColor << " is ("
		<< normalizedRgbValue1 << ", " << normalizedRgbValue2 << ", " << normalizedRgbValue3 << ")";
	return 0;
}

