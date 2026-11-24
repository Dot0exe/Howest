//Sayit, Ali - DAE13E

#include <iostream> // enables the usage of std::cout and std::cin

void SizeOfArrays();
void ElementsInMemory();
void PrintElements(int arrNumbers[], int size);
void PrintElements(int arrNumbers[], int startIdx, int endIdx);

const int arraySize{ 5 };
int firstArray[arraySize]{};
int secondArray[]{ 1,2,3,4,5 };
int thirdArray[arraySize]{ 1,2,3,4,5 };
int sizeOfArray{ sizeof(secondArray) / sizeof(secondArray[0]) };

int main()
{
	std::cout << "-- Passing an array to a function, Print Elements --\n";

	std::cout << "Print all elements\n";
	PrintElements(firstArray, sizeOfArray);
	PrintElements(secondArray, sizeOfArray);
	PrintElements(thirdArray, sizeOfArray);
	std::cout << "Print a range of elements\n";
	PrintElements(secondArray, 2, 4);

	//std::cout << "-- The elements occupy consecutive memory location -- \n"
	//ElementsInMemory();
	// 
	//std::cout << "--- Accessing elements ---\n";
	//SizeOfArrays();
	return 0;
}
void SizeOfArrays()
{
	//const int arraySize{ 5 };
	//int firstArray[arraySize]{};
	//int secondArray[]{ 1,2,3,4,5 };
	//int thirdArray[arraySize]{ 1,2,3,4,5 };

	std::cout << "First element: " << firstArray[0] << "\n";
	std::cout << "Last element: " << firstArray[4] << "\n";

	//int sizeOfArray{ sizeof(firstArray) / sizeof(firstArray[0])};

	//std::cout << sizeof(firstArray)<< "\n";
	//int sizeOfArray{ sizeof(firstArray) / sizeof(int)};

	for (int i{}; i < 5; i++)
	{
		std::cout << firstArray[i] << " ";
	}

	int sizeOfArray{ sizeof(secondArray) / sizeof(secondArray[0]) };

	std::cout << "\n--- Size of arrays ---\n";
	std::cout << "2nd array\n";
	std::cout << " nr of bytes: " << sizeof(secondArray) << "\n";
	std::cout << " size of one element : " << sizeof(secondArray) / sizeOfArray << "\n";
	std::cout << " number of elements : " << sizeOfArray << "\n";


	for (int i{}; i < sizeOfArray; i++)
	{
		std::cout << secondArray[i] << " ";
	}

	
}

void ElementsInMemory()
{
	struct Point2F
	{
		float x;
		float y;
	};

	const int arraySize{ 5 };
	int firstArray[arraySize]{};
	Point2F p2FArray[arraySize]{};

	std::cout << "Array of int types\n";

	int sizeOfArray{ sizeof(firstArray) / sizeof(firstArray[0]) };


	for (int i{}; i < sizeOfArray; i++)
	{
		std::cout << "Address of element with index " << i << " is " << &firstArray[i]	 << " \n";
	}

	std::cout << "Array of Point2F types\n";
	sizeOfArray = sizeof(p2FArray) / sizeof(p2FArray[0]);

	for (int i{}; i < sizeOfArray; i++)
	{
		std::cout << "Address of element with index " << i << " is " << &p2FArray[i] << " \n";
	}
}

void PrintElements(int arrNumbers[], int size)
{
	int arrayStart{ 0 };
	PrintElements(arrNumbers, arrayStart, size);

}
void PrintElements(int arrNumbers[], int startIdx, int endIdx)
{
	for (int i { startIdx }; i < endIdx; i++)
	{
		std::cout << arrNumbers[i] << " ";
	}
	std::cout << "\n";
}
