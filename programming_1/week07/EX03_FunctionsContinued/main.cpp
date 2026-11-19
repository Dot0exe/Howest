//Sayit, Ali - DAE13E

#include <iostream>
#include <string> // enables the usage of std::cout and std::cin
#include "structs.h"
#include <cmath>
#include <algorithm>

enum class DesaturationMode { Lightness, Luminosity, Average };

int Clamp(int rangeMin, int rangeMax, int value);
float Clamp(float rangeMin, float rangeMax, float value = 2);
int RndValueGen(int min, int max);
float RndValueGen(float min, float max, int precision);
float Lerp(float start, float end, float t);
Color4f RndColorGen();
Color4f RndGrayColorGen();
float GetRandomColorComponent();
Color4f ConvertToEngineColor(float r, float g, float b, float a);
float GetDistance(float x1, float y1, float x2, float y2);
float GetDistance(const Point2f& posFirst, const Point2f& posSecond);
Point2f GetRndPos2f(float x, float y, float width, float height);
Point2f GetRndPos2f(float width, float height);
Point2f GetRndPos2f(const Rectf& rectf);
Color4f ColorToGray(const Color4f& color, DesaturationMode desaturationMode = DesaturationMode::Luminosity);
void AskQuestion(const std::string& question, const std::string& option1, const std::string& option2);
bool CheckAnswer(const std::string& answer, const std::string& option1, const std::string& option2);
bool GetAnswer(const std::string& question, const std::string& option1 = "yes", const std::string& option2 = "no");

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	if (GetAnswer("Quit the game?"))
	{
		return 0;
	}

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
	float maxT{ 1.f };
	float minT{ 0.f };
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

float GetDistance(float x1, float y1, float x2, float y2)
{
	float distance{ ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)) };
	return std::sqrt(distance);
}

float GetDistance(const Point2f& posFirst, const Point2f& posSecond)
{
	return GetDistance(posFirst.x, posFirst.y, posSecond.x, posSecond.y);
}

Point2f GetRndPos2f(float x, float y, float width, float height)
{
	Point2f pos{};
	pos.x = RndValueGen(x, x + width, 2);
	pos.y = RndValueGen(y, y + height, 2);
	return pos;
}

Point2f GetRndPos2f(float width, float height)
{
	float posX{ 0 };
	float posY{ 0 };
	return GetRndPos2f(posX, posY, width, height);
}

Point2f GetRndPos2f(const Rectf& rectf)
{
	return GetRndPos2f(rectf.left, rectf.top, rectf.width, rectf.height);
}

Color4f ColorToGray(const Color4f& color, DesaturationMode desaturationMode)
{
	Color4f grayColor{ color };
	float grayValue{};

	switch (desaturationMode)
	{
	case DesaturationMode::Lightness:
	{
		grayValue = (std::max({ color.r, color.g, color.b }) +
			std::min({ color.r, color.g, color.b })) / 2.0f;
		break;
	}
	case DesaturationMode::Luminosity:
	{
		grayValue = 0.21f * color.r + 0.72f * color.g + 0.07f * color.b;
		break;
	}
	case DesaturationMode::Average:
	{
		grayValue = (color.r + color.g + color.b) / 3.0f;
		break;
	}
	}

	grayColor.r = grayValue;
	grayColor.g = grayValue;
	grayColor.b = grayValue;
	return grayColor;
}

void AskQuestion(const std::string& question, const std::string& option1, const std::string& option2)
{
	std::cout << question << " (" << option1 << " / " << option2 << ")\n";
}

bool CheckAnswer(const std::string& answer, const std::string& option1, const std::string& option2)
{
	return answer == option1 || answer == option2;
}

bool GetAnswer(const std::string& question, const std::string& option1, const std::string& option2)
{
	AskQuestion(question, option1, option2);

	std::string answer{};

	std::getline(std::cin, answer);

	while (!CheckAnswer(answer, option1, option2))
	{
		std::cout << "Please answer with " << option1 << " or " << option2 << '\n';
		std::getline(std::cin, answer);
	}

	return answer == option1;
}