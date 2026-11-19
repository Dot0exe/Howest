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
	ClearBackground(0.f,0.f,0.29f); // Clear the background with a default color
	PolygonDraw();
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

void PolygonDraw()
{
	const int sides{ 20 };
	float posX1{};
	float posY1{};
	float posX2{};
	float posY2{};
	const float steps{ 2 * g_Pi / sides };
	float angle{};
	const float radius{ 200 };
	const float centerX{ g_WindowWidth / 2 };
	const float centerY{ g_WindowHeight / 2 };

	SetColor(1.f, 0.f, 0.f, 1.f);

	for (int i{1};i <= sides; i++)
	{

		posX1 = centerX + radius * cosf(angle);
		posY1 = centerY + radius * sinf(angle);
		
		angle += steps;

		posX2 = centerX + radius * cosf(angle);
		posY2 = centerY + radius * sinf(angle);

		DrawLine(posX1, posY1, posX2, posY2);

	}

}

#pragma endregion