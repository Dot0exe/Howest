//Sayit, Ali - DAE13E

#include <iostream> // enables the usage of std::cout and std::cin

void ClampIOValue(int rangeMin,int rangeMax, int value);
void ClampIOValue(float fRangeMin, float fRangeMax, float fValue);
int RandomValueGenerator(int min, int max);


int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	std::cout << RandomValueGenerator(0, 1);
	return 0;
}

void ClampIOValue(int rangeMin, int rangeMax, int value)
{
	std::cout << "Please input Minimum Range: ";
	std::cin >> rangeMin;
	std::cout << "Please input Maximum Range: ";
	std::cin >> rangeMax;
	std::cout << "Please input a value: ";
	std::cin >> value;

	if (value > rangeMax)
	{
		value = rangeMax;
	}
	else if (value < rangeMin)
	{
		value = rangeMin;
	}

}

void ClampIOValue(float fRangeMin, float fRangeMax, float fValue)
{
	int normaliser{ 100 };
	fRangeMin *= normaliser;
	fRangeMax *= normaliser;
	fValue *= normaliser;
	ClampIOValue(static_cast<int>(fRangeMin), static_cast<int>(fRangeMax), static_cast<int>(fValue));

	fRangeMin /= normaliser;
	fRangeMax /= normaliser;
	fValue /= normaliser;

}

int RandomValueGenerator(int min, int max)
{
	return ((rand() % (max+1)) + min);
}
