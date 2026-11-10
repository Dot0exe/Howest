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
	ClearBackground(0.f, 0.f, 0.f);

	DrawInvader();

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


void DrawInvader()
{
	// heads-up: you will finally create a function to deal with this conversion during lab exercises:
	const int maxColorRange{ 255 };
	const Color4f green{ 70.f / maxColorRange, 212.f / maxColorRange, 82.f / maxColorRange, 1.f };
	const Color4f black{ 0.f, 0.f, 0.f, 1.f };
	
	const float left{ 20.f };
	const float top{ g_WindowHeight / 2 };
	const float pixelSize{ 6.f };

	SetColor(green);
	// body
	FillRect(left + 2 * pixelSize, top + 2 * pixelSize, 7 * pixelSize, 5 * pixelSize);
	// antenna ears
	FillRect(left + 3 * pixelSize, top + 7 * pixelSize, pixelSize, pixelSize);
	FillRect(left + 2 * pixelSize, top + 8 * pixelSize, pixelSize, pixelSize);
	FillRect(left + 7 * pixelSize, top + 7 * pixelSize, pixelSize, pixelSize);
	FillRect(left + 8 * pixelSize, top + 8 * pixelSize, pixelSize, pixelSize);
	// shoulders
	FillRect(left + 1 * pixelSize, top + 4 * pixelSize, pixelSize, 2 * pixelSize);
	FillRect(left + 9 * pixelSize, top + 4 * pixelSize, pixelSize, 2 * pixelSize);
	// arms
	FillRect(left + 0 * pixelSize, top + 4 * pixelSize, pixelSize, 4 * pixelSize);
	FillRect(left + 10 * pixelSize, top + 4 * pixelSize, pixelSize, 4 * pixelSize);

	SetColor(black);
	// notch in the top of the body
	FillRect(left + 3 * pixelSize, top + 2 * pixelSize, 5 * pixelSize, pixelSize);
	// eyes
	FillRect(left + 3 * pixelSize, top + 5 * pixelSize, pixelSize, pixelSize);
	FillRect(left + 7 * pixelSize, top + 5 * pixelSize, pixelSize, pixelSize);
}

#pragma endregion