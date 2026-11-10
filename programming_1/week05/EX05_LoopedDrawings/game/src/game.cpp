// Sayit, Ali - DAE13E

#include "game.h"

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(0,0,0); // Clear the background with a default color
	//StairsDraw();
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

void StairsDraw()
{
	const float padding{ 50.f };
	const float centerX{ (g_WindowWidth - padding)  / 2 };
	const float centerY{ (g_WindowHeight - padding) / 2 };

	const int steps{ 5 };
	const float xLength{ (centerX - (padding / 2)) / steps };
	const float yLength{ (centerY - (padding / 2)) / steps };

	float posX1{ padding / 2 };
	float posY1{ centerY };

	float posX2{ };
	float posY2{ };

	bool isBlue{ true };


	for (int i{}; i < steps; i++)
	{
		if (isBlue)
		{
			SetColor(salmon);
		}
		else
		{
			SetColor(skyBlue);
		}

		posX2 = posX1 + xLength;
		DrawLine(posX1, posY1, posX2, posY1);
		posX1 = posX2;

		posY2 = posY1 - yLength;
		DrawLine(posX1, posY1, posX1, posY2);
		posY1 = posY2;

		isBlue = !isBlue;
	}

}
#pragma endregion