// Sayit, Ali - DAE13E

#include "game.h"

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	SetColor(0, 0, 0);
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(); // Clear the background with a default color
	FillRect(g_rect);
	FillEllipse(g_cirle.center.x, g_cirle.center.y, g_cirle.radius, g_cirle.radius);
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

	if ((IsPointInCircle(e.x, e.y, g_cirle)) || (IsPointInRect(e.x, e.y, g_rect)))
	{
		SetColor(1, 0, 0);
	}	
	else
	{
		SetColor(0, 0, 0);
	}
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

#pragma endregion