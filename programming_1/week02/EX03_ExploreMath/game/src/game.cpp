// Sayit, Ali DAE13

#include "game.h"
#include "math.h"
#include <iostream>

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	PrintTableOfAngle();
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(0.f, 0.f, 0.f); // Clear the background with a default color
	
	DrawPlayButton();
}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
}

// Delete textures and free other resources here.
void End()
{
}

#pragma endregion gameFunctions

#pragma region inputHandling

// Called once when a key is pressed.
void OnKeyDownEvent(SDL_Keycode key)
{
}

// Called once when a key is released.
void OnKeyUpEvent(SDL_Keycode key)
{
}

// Called whenever the mouse moves.
void OnMouseMotionEvent(const SDL_MouseMotionEvent& e)
{
}

// Called once when a mouse button is pressed.
void OnMouseDownEvent(const SDL_MouseButtonEvent& e)
{
}

// Called once when a mouse button is released.
void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{
}

#pragma endregion inputHandling

#pragma region myFunctionDefinitions

void PrintTableOfAngle()
{
	float pi{ 3.14159f };
	float angle{ 0.f };
	
	int sinValue = rint(sin(angle));
	int cosValue = rint(cos(angle));

	std::cout << "radians: " << angle << "\n";
	std::cout << "	sin: " << sinValue << "\n";
	std::cout << "	cos: " << cosValue << "\n";

	angle = pi;
	sinValue = rint(sin(angle));
	cosValue = rint(cos(angle));

	std::cout << "radians: " << angle << "\n";
	std::cout << "	sin: " << sinValue << "\n";
	std::cout << "	cos: " << cosValue << "\n";
	
	angle = pi * 2;
	sinValue = rint(sin(angle));
	cosValue = rint(cos(angle));

	std::cout << "radians: " << angle << "\n";
	std::cout << "	sin: " << sinValue << "\n";
	std::cout << "	cos: " << cosValue << "\n";
}

void DrawPlayButton()
{
	float middleOfScreenX{ g_WindowWidth / 2 };
	float middleOfScreenY{ g_WindowHeight / 2 };
	float circleRadius{ 200.f };
	float lineWidth{ 5.f };

	SetColor(1.f, 1.f, 1.f);

	DrawEllipse(middleOfScreenX, middleOfScreenY , circleRadius, circleRadius, lineWidth);

	float angle{ 0.f };
	float triangleRadius{ 150.f };

	float x1{static_cast<float>(cos(angle)) * triangleRadius + middleOfScreenX};
	float y1{static_cast<float>(sin(angle)) * triangleRadius + middleOfScreenY};

	float angleIncrease{ (2 * g_Pi) / 3.f };
	
	angle += angleIncrease;

	float x2{ static_cast<float>(cos(angle)) * triangleRadius + middleOfScreenX };
	float y2{ static_cast<float>(sin(angle)) * triangleRadius + middleOfScreenY };

	angle += angleIncrease;

	float x3{ static_cast<float>(cos(angle)) * triangleRadius + middleOfScreenX };
	float y3{ static_cast<float>(sin(angle)) * triangleRadius + middleOfScreenY };

	float buttonWidth{ 5.f };
	DrawLine(x1,y1, x2,y2, buttonWidth);
	DrawLine(x2, y2, x3, y3, buttonWidth);
	DrawLine(x3, y3, x1, y1, buttonWidth);
}

#pragma endregion