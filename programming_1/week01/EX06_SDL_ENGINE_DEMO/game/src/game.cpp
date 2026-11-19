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
	ClearBackground(); // Clear the background with a default 

	// green rect
	SetColor(0.f,1.f,0.f);
	DrawRect(0.f, 0.f, g_WindowWidth, g_WindowHeight);
	
	// red lines
	SetColor(1.f, 0.f, 0.f);
	DrawLine(0.f, 0.f , g_WindowWidth, g_WindowHeight );
	DrawLine(0.f, g_WindowHeight, g_WindowWidth, 0.f);

	// blue rect
	SetColor(0.f, 0.f, 1.f);
	DrawRect(g_WindowWidth / 2 -1, g_WindowHeight / 2 -1, 2.f, 2.f, 2.f);


	float firstLine{ 3.f };
	float secondLine{ 1.5f };

	// white lines vertical
	SetColor(1.f, 1.f, 1.f);
	DrawLine(g_WindowWidth / secondLine, 0.f, g_WindowWidth / secondLine, g_WindowHeight);
	DrawLine(g_WindowWidth / firstLine, 0.f, g_WindowWidth / firstLine, g_WindowHeight);

	// white lines vertical
	DrawLine(0.f, g_WindowHeight / firstLine, g_WindowWidth, g_WindowHeight / firstLine );
	DrawLine(0.f, g_WindowHeight / secondLine, g_WindowWidth, g_WindowHeight / secondLine);

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

#pragma endregion