// Sayit, Ali - DAE13

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
	ClearBackground(0.05f,0.05f,0.12f); // Clear the background with a default color
	DrawLogo();
	
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

void DrawLogo()
{
	float centerX{ g_WindowWidth / 2 };
	float centerY{ g_WindowHeight / 2 };

	float topY{ 50.f };
	float bottomY{ centerY * 1.5f };
	float leftX{ centerX * 0.5f };
	float rightX{ centerX * 1.5f };
	float wingY{ centerY / 2 };
	float notchY{ centerY / 2.2f };

	int circleRadius{ 50 };
	float circleCenterY{ centerY / 1.75f };

	float lineThickness{ 10.f };
	float lineEndOffset{ 10.f };
	float highlightOffset{ 5.f };

	SetColor(0.f, 0.f, 0.f);
	FillTriangle(centerX, topY, centerX, bottomY, rightX, wingY);

	SetColor(1.f, 0.f, 0.f);
	FillEllipse(centerX, circleCenterY, circleRadius, circleRadius);

	SetColor(0.f, 0.f, 0.f);
	FillTriangle(centerX, topY, centerX, bottomY, leftX, wingY);
	DrawLine(rightX - lineEndOffset, wingY, centerX, notchY, lineThickness);

	SetColor(1.f, 1.f, 1.f);
	FillTriangle(centerX, topY + highlightOffset, centerX, notchY, rightX - highlightOffset, wingY);
}

#pragma endregion