// Sayit, Ali - DAE13

#include "game.h"
#include <iostream>

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	g_MainCharacter.color = Color4f{ 0.f,0.f,1.f,1.f };
	g_MainCharacter.position = Point2f{ g_WindowWidth / 2, g_WindowHeight / 2 };
	g_MainCharacter.speed = 100.f;
	g_MainCharacter.radius = 50.f;
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(); // Clear the background with a default color

	SetColor(g_MainCharacter.color);
	FillEllipse(g_MainCharacter.position, g_MainCharacter.radius,g_MainCharacter.radius);
}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
	const Uint8* pState{ SDL_GetKeyboardState(nullptr)};

	float rightBorderLimit{ g_WindowWidth - g_MainCharacter.position.x };

	if (pState[SDL_SCANCODE_RIGHT] && g_MainCharacter.position.x < rightBorderLimit)
	{
		g_MainCharacter.position.x += g_MainCharacter.speed * elapsedSec;
	}
	if (pState[SDL_SCANCODE_LEFT])
	{
		g_MainCharacter.position.x -= g_MainCharacter.speed * elapsedSec;
	}
	if (pState[SDL_SCANCODE_UP])
	{
		g_MainCharacter.position.y -= g_MainCharacter.speed * elapsedSec;
	}
	if (pState[SDL_SCANCODE_DOWN])
	{
		g_MainCharacter.position.y += g_MainCharacter.speed * elapsedSec;
	}
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
	if (key == SDLK_SPACE)
	{
		std::cout << "Jump pressed" << "\n";
	}
}

// Called once when a key is released.
void OnKeyUpEvent(SDL_Keycode key)
{
	if (key == SDLK_SPACE)
	{
		std::cout << "Jump released" << "\n";
	}
}

// Called whenever the mouse moves.
void OnMouseMotionEvent(const SDL_MouseMotionEvent& e)
{
	std::cout << "X:" << e.x << "\n";
	std::cout << "Y:" << e.y << "\n";
	std::cout << "x rel" << e.xrel << "\n";
	std::cout << "y rel" << e.yrel << "\n\n";
}

// Called once when a mouse button is pressed.
void OnMouseDownEvent(const SDL_MouseButtonEvent& e)
{
	if (e.button == SDL_BUTTON_LEFT)
	{
		g_MainCharacter.color = Color4f{ 1.0f,0.f,0.f,1.f };
	}
}

// Called once when a mouse button is released.
void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{
}

#pragma endregion inputHandling

#pragma region myFunctionDefinitions

#pragma endregion