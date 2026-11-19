//Sayit, Ali - DAE13E

#include <iostream> // enables the usage of std::cout and std::cin

enum class CatFace { normal, sleepy, curious, dead };

void DrawCat(int space, char eyes);
void DrawCat(int space, CatFace catFace);
void DrawCatNormal();
void DrawCatSleepy();
void DrawCatCurious();



int main()
{
	DrawCat(20, '.');
	DrawCat(5, '.');
	DrawCat(16, 'o');
	DrawCat(40, CatFace::normal);
	return 0;
}

void DrawCatNormal()
{
	std::cout << "=^..^=";
}
void DrawCatSleepy()
{
	std::cout << "=^__^=";
}
void DrawCatCurious()
{ 
	std::cout << "=^oo^=";
}

void DrawCat(int space, char eyes)
{
	for (int i{};i < space; i++)
	{
		std::cout << " ";
	}
	std::cout << "=^" << eyes << eyes << "^=\n";
}
void DrawCat(int space, CatFace catFace )
{
	char eyes{};
	switch (catFace)
	{
		case CatFace::normal:
		{
			eyes = '.';
			break;
		}
		case CatFace::curious:
		{
			eyes = 'o';
			break;
		}
		case CatFace::sleepy:
		{
			eyes = '_';
			break;
		}
		case CatFace::dead:
		{
			eyes = 'x';
			break;
		}
	}

	DrawCat(space, eyes);
}
