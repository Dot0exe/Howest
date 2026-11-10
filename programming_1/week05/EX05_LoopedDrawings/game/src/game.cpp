// Sayit, Ali - DAE13E

#include "game.h"

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	g_Steps = 5;
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(0,0,0); // Clear the background with a default color
	StairsDraw();
	MultipleRects();
	RotatingRects();


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
	const float centerX{ (g_WindowWidth - g_Padding)  / 2 };
	const float centerY{ (g_WindowHeight - g_Padding) / 2 };

	const float xLength{ (centerX - (g_Padding / 2)) / g_Steps };
	const float yLength{ (centerY - (g_Padding / 2)) / g_Steps };

	float posX1{ g_Padding / 2 };
	float posY1{ centerY };

	float posX2{ };
	float posY2{ };

	bool isBlue{ true };


	for (int i{}; i < g_Steps; i++)
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

void MultipleRects()
{
	SetColor(lightGreen);

	const float centerX{ g_WindowWidth / 4 };
	const float centerY{ (g_WindowHeight * 3.f) / 4.f };


	const float length{ ((g_WindowWidth / 2) - g_Padding) / g_Steps };

	float rectSize{ length };
	float rectPosX{ centerX - rectSize / 2 };
	float rectPosY{ centerY - rectSize / 2 };

	for (int i{}; i < g_Steps; i++)
	{
		DrawRect(rectPosX, rectPosY,rectSize,rectSize);

		rectSize += length;
		rectPosX -= length / 2;
		rectPosY -= length / 2;
	}
}
#pragma endregion