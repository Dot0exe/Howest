//Sayit, Ali - DAE13E

#include <iostream> // enables the usage of std::cout and std::cin
#include "structs.h"
#include <cmath>

int Clamp(int rangeMin,int rangeMax, int value);
float Clamp(float rangeMin, float rangeMax, float value = 2);
int RndValueGen(int min, int max);
float Lerp(float start, float end, float t);
Color4f RndColorGen();
Color4f RndGrayColorGen();
float GetRandomColorComponent();
Color4f ConvertToEngineColor(float r, float g, float b, float a);
float GetDistance(float x1, float y1, float x2, float y2);
Point2f GetRndPos2f(float x, float y, float width, float height);


int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));
	Color4f color{RndColorGen()};
	std::cout << color.a << "\n";
	std::cout << color.r << "\n";
	std::cout << color.g << "\n";
	std::cout << color.b << "\n";

	return 0;
}

int Clamp(int rangeMin, int rangeMax, int value)
{
	if (value > rangeMax)
	{
		return rangeMax;
	}
	else if (value < rangeMin)
	{
		return rangeMin;
	}
	return value;
}

float Clamp(float rangeMin, float rangeMax, float value)
{
	if (value > rangeMax)
	{
		return rangeMax;
	}
	else if (value < rangeMin)
	{
		return rangeMin;
	}
	return value;
}

int RndValueGen(int min, int max)
{
	return ((rand() % (max - min + 1)) + min);
}

float RndValueGen(float min, float max, int precision)
{
	int scale{ 1 };
	for (int i = 0; i < precision; ++i)
	{
		scale *= 10;
	}

	int iMin = static_cast<int>(min * scale);
	int iMax = static_cast<int>(max * scale);

	return static_cast<float>(RndValueGen(iMin, iMax)) / scale;
}

float Lerp(float start, float end, float t)
{
	float maxT{1.f};
	float minT{0.f};
	t = Clamp(minT, maxT, t);
	return start + ((end - start) * t);
}

Color4f RndColorGen()
{
	Color4f color4f{};
	color4f.a = 1.f;
	color4f.r = GetRandomColorComponent();
	color4f.g = GetRandomColorComponent();
	color4f.b = GetRandomColorComponent();

	return color4f;
}

Color4f RndGrayColorGen()
{
	Color4f color4f{};
	color4f.a = 1.f;
	color4f.r = GetRandomColorComponent();
	color4f.g = color4f.r;
	color4f.b = color4f.r;

	return color4f;
}

float GetRandomColorComponent()
{
	int maxRGB{ 256 };
	float normaliser{ 255 };
	float number{ (rand() % maxRGB) / normaliser };
	return number;
}

Color4f ConvertToEngineColor(float r, float g, float b, float a)
{
	Color4f color{};
	float normaliser{ 255 };
	color.r = r / normaliser;
	color.g = g / normaliser;
	color.b = b / normaliser;
	color.a = a / normaliser;
	return color;
}

float GetDistance(float x1,float y1,float x2,float y2)
{
	float distance{ ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)) };
	return std::sqrt(distance);
}

Point2f GetRndPos2f(float x,float y, float width, float height)
{
	Point2f pos{};
	pos.x = RndValueGen(x, x + width, 2);
	pos.y = RndValueGen(y, y + height, 2);
	return pos;
}