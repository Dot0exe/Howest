#include <iostream> // enables the usage of std::cout and std::cin
#include <string>

void AsciiConverter();
void EmailGenerator();
void RyhmeGenerator();
void CombiningIntNString();

int main()
{
	//AsciiConverter();
	//EmailGenerator();
	//RyhmeGenerator();
	CombiningIntNString();

	return 0;
}

void AsciiConverter()
{
	std::cout << "Enter an ASCII value: ";
	int inputAsciiValue{};
	std::cin >> inputAsciiValue;
	char convertedAsciiValue(inputAsciiValue);
	std::cout << convertedAsciiValue << "\n";
}

void EmailGenerator()
{
	std::cout << "Enter your first name: ";
	std::string firstName{};
	std::cin >> firstName;

	std::cout << "Enter your last name: ";
	std::string lastName{};
	std::cin >> lastName;

	std::cout << "Your email:		" << firstName << "." << lastName << "@student.howest.be";
}

void RyhmeGenerator()
{
	std::cout << ">> First give us a noun (plural): ";
	std::string ryhmeNoun{};
	std::cin >> ryhmeNoun;

	std::cout << ">> Great! Now pick an adjective: ";
	std::string ryhmeAdjective{};
	std::cin >> ryhmeAdjective;

	std::cout << ">> Almost there! Enter a number > 2: 10  ";
	int ryhmeNum{};
	std::cin >> ryhmeNum;

	std::string ryhme{ 
		"\"" + std::to_string(ryhmeNum) + " " + ryhmeAdjective + " " + ryhmeNoun + ", lined up in a row.\n "
		"One got very tired, so it had to go.\n "
		"Now there's only "
	};
	ryhme += std::to_string(--ryhmeNum) + " putting on a show.\"";

	std::cout << ryhme;

}

void CombiningIntNString()
{
	std::cout << "Enter an integer: ";
	std::string num1Input{};
	std::cin >> num1Input;

	std::cout << "Enter an floating point value: ";
	std::string num2Input{};
	std::cin >> num2Input;

	std::string numStringTotal{ "\"" + num1Input + "\" + \"" + num2Input + "\" = " + num1Input + num2Input};
	std::cout << numStringTotal;

	float numSum{ std::stoi(num1Input) + num2Input};
	
	


}
