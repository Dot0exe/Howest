//Sayit, Ali - DAE13E

#include <iostream> // enables the usage of std::cout and std::cin

int Count(const int array[],const int num,const int arraySize);
int MinElement(const int array[], const int arraySize);
int MaxElement(const int array[], const int arraySize);
void Swap(int array[], const int arraySize, const int idx1, const int idx2);
void Shuffle(int array[], const int arraySize, const int shuffleCount);
void BubbleSort(int array[],const int arraySize);



int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	int testArray[]{ 1,2,3,4,5 };
	int testArray2[]{ 6,7,8,9,0 };
	int testArray3[]{ -10,0,8,5,2,4,-9,-3,10 };
	int size{ (sizeof(testArray) / sizeof(testArray[0])) };
	int size2{ (sizeof(testArray2) / sizeof(testArray2[0])) };
	int size3{ (sizeof(testArray3) / sizeof(testArray3[0])) };
	//Count(testArray, 3,size);
	//std::cout << MinElement(testArray2, size2);
	//std::cout << MaxElement(testArray2, size2);
	//Swap(testArray, size, 0, 1);
	//Shuffle(testArray, size, 3);
	BubbleSort(testArray3, size3);
	return 0;
}

int Count(const int array[],const int num,const int arraySize)
{
	int count{};

	for (int i{};i < arraySize; i++)
	{
		std::cout << array[i] << " ";
		if (array[i] == num)
		{
			count++;
		}
	}
	return count;
}

int MinElement(const int array[], const int arraySize)
{
	int minNum{array[0]};
	for (int i{}; i < arraySize;i++)
	{
		if (array[i] < minNum)
		{
			minNum = array[i];
		}
	}
	return minNum;
}

int MaxElement(const int array[], const int arraySize)
{
	int maxNum{ array[0] };
	for (int i{}; i < arraySize;i++)
	{
		if (array[i] > maxNum)
		{
			maxNum = array[i];
		}
	}
	return maxNum;
}

void Swap(int array[], const int arraySize, const int idx1, const int idx2)
{
	int tempNum1{ array[idx1] };
	int tempNum2{ array[idx2] };

	for (int i{}; i < arraySize;i++)
	{
		std::cout << array[i] << " ";
	}

	array[idx1] = tempNum2;
	array[idx2] = tempNum1;
	std::cout << "\n";
	for (int i{}; i < arraySize;i++)
	{
		std::cout << array[i] << " ";
	}

}

void Shuffle(int array[], const int arraySize, const int shuffleCount)
{
	for (int i{}; i < shuffleCount;i++)
	{
		int idx1{ rand() % arraySize };
		int idx2{ rand() % arraySize };
		while (idx1 == idx2)
		{
			idx2 = rand() % arraySize;
		}
		int tempNum{ array[idx2] };
		array[idx2] = array[idx1];
		array[idx1] = tempNum;

		for (int k{}; k < arraySize;k++)
		{
			std::cout << array[k] << " ";
		}
		std::cout << "\n";
	}
}

void BubbleSort(int array[], const int arraySize)
{
	bool isSwapped{true};
	while (isSwapped)
	{
		isSwapped= !isSwapped;
		for (int i{};i < arraySize-1;i++)
		{
			int k{ i+1 };
			if (array[i] > array[k])
			{
				int tempNum{ array[i] };
				array[i] = array[k];
				array[k] = tempNum;
				isSwapped = !isSwapped;
			}
		}
	}

	for (int i{}; i < arraySize;i++)
	{
		std::cout << array[i] << " ";
	}
}
