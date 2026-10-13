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
	ClearBackground(0.f,0.f,0.f); // Clear the background with a default color
	DrawBeam();
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

void DrawBeam()
{
	float rectSize{ 200.f };
	float edgePadding{ 10.f };

	SetColor(0.f, edgePadding / edgePadding, 0.f);
	FillRect(g_WindowWidth - edgePadding - rectSize, 0 + edgePadding, rectSize, rectSize);
	FillRect(0 + edgePadding, g_WindowHeight - edgePadding - rectSize, rectSize, rectSize);

	SetColor(edgePadding / edgePadding, edgePadding / edgePadding, edgePadding / edgePadding);
	DrawRect(g_WindowWidth - edgePadding - rectSize, 0 + edgePadding, rectSize, rectSize);
	DrawRect(0 + edgePadding, g_WindowHeight - edgePadding - rectSize, rectSize, rectSize);

	DrawLine(g_WindowWidth - edgePadding - rectSize, 0 + edgePadding, 0 + edgePadding, g_WindowHeight - edgePadding - rectSize);
	DrawLine(g_WindowWidth - edgePadding, 0 + edgePadding, 0 + edgePadding + rectSize, g_WindowHeight - edgePadding - rectSize);
	DrawLine(g_WindowWidth - edgePadding - rectSize, 0 + edgePadding + rectSize, 0 + edgePadding, g_WindowHeight - edgePadding);
	DrawLine(g_WindowWidth - edgePadding, 0 + edgePadding + rectSize, 0 + edgePadding + rectSize, g_WindowHeight - edgePadding);
}

#pragma endregion