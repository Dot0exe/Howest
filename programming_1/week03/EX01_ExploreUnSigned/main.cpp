// Sayit, Ali - DAE13

#include <iostream> // enables the usage of std::cout and std::cin
#include <string>

void NumberThingy();
void MinMaxThingy();


int main()
{
	NumberThingy();
	MinMaxThingy();

	return 0;
}

void NumberThingy()
{
	const int normalOne{12};
	const int binaryOne{0b1100};
	const int hexaOne{0xc};


	std::cout << normalOne<< "\n";
	std::cout << binaryOne << "\n";
	std::cout << hexaOne << "\n";
}

void MinMaxThingy()
{
	char minSignedChar{-128};
	unsigned char minUnsignedChar{0};
	int minSignedInt{INT32_MIN};
	unsigned int minUnsignedInt{0};

	char maxSignedChar{127};
	unsigned char maxUnsginedChar{255};
	int maxSignedInt{INT32_MAX};
	unsigned int maxUnsignedInt{UINT32_MAX};

	std::cout << "Min signed char : " << minSignedChar << "\n";
	std::cout << "Min unsigned char : " << minUnsignedChar << "\n";
	std::cout << "Min signed int : " << minSignedInt << "\n";
	std::cout << "Min unsigned int : " << minUnsignedInt << "\n\n";

	std::cout << "Max signed char : " << maxSignedChar << "\n";
	std::cout << "Max unsigned char : " << maxUnsginedChar << "\n";
	std::cout << "Max signed int : " << maxSignedInt << "\n";
	std::cout << "Max unsigned int : " << maxUnsignedInt << "\n";

	std::cout << "================> Trying to exceed the ranges\n";

	std::cout << "Min signed char : " << --minSignedChar << "\n";
	std::cout << "Min unsigned char : " << --minUnsignedChar  << "\n";
	std::cout << "Min signed int : " << --minSignedInt << "\n";
	std::cout << "Min unsigned int : " << --minUnsignedInt << "\n\n";

	std::cout << "Max signed char : " << ++maxSignedChar << "\n";
	std::cout << "Max unsigned char : " << ++maxUnsginedChar << "\n";
	std::cout << "Max signed int : " << ++maxSignedInt << "\n";
	std::cout << "Max unsigned int : " << ++maxUnsignedInt << "\n";
}