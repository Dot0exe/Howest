// Sayit, Ali - DAE13

#include "game.h"

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{

	g_bomb.bombColor = Color4f{ 0.f,0.f,0.f,1.f };
	g_bomb.explosionColor = Color4f{ 1.f,0.f,0.f,1.f };

	g_bomb.explosionSpeed = 800.f;

	g_bomb.isBombActive = false;

	g_bomb.bombRect.height = 100.f;
	g_bomb.bombRect.width = 100.f;
	g_bomb.bombRect.left = (g_WindowWidth / 2) - (g_bomb.bombRect.width / 2);
	g_bomb.bombRect.top = (g_WindowHeight / 2) - (g_bomb.bombRect.height / 2);

	g_bomb.explosionDistance.x = 0.f;
	g_bomb.explosionDistance.y = 0.f;

	g_bomb.explosionRect.height = g_bomb.bombRect.height;
	g_bomb.explosionRect.width = g_bomb.bombRect.width;
	g_bomb.explosionRect.left = (g_WindowWidth / 2) - (g_bomb.bombRect.width / 2);
	g_bomb.explosionRect.top = (g_WindowHeight / 2) - (g_bomb.bombRect.height / 2);

}

// Draw your game objects here.
void Draw()
{
	ClearBackground(0.62f,0.62f,0.62f); // Clear the background with a default color
	
	DrawBomb();

}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
	if (g_bomb.isBombActive)
	{
		ExplosionLocation(elapsedSec);
	}
	if (g_bomb.explosionDistance.x > g_WindowWidth)
	{
		ResetBomb();
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
	if (e.button == SDL_BUTTON_LEFT)
	{
		const bool isInsideX{ e.x > g_bomb.bombRect.left && e.x < g_bomb.bombRect.left + g_bomb.bombRect.width };
		const bool isInsideY{ e.y > g_bomb.bombRect.top && e.y < g_bomb.bombRect.top + g_bomb.bombRect.height };

		if (isInsideX && isInsideY)
		{
			StartExplosion();
		}
	}
}

// Called once when a mouse button is released.
void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{
}

#pragma endregion inputHandling

#pragma region myFunctionDefinitions


void ExplosionLocation(float elapsedSec)
{
	g_bomb.explosionDistance.x += g_bomb.explosionSpeed * elapsedSec;
	g_bomb.explosionDistance.y += g_bomb.explosionSpeed * elapsedSec;

}

void StartExplosion()
{
	g_bomb.bombColor.a = 0.5f;
	g_bomb.isBombActive = true;
}

void DrawBomb()
{

	float bombPosX{ (g_WindowWidth / 2) - (g_bomb.bombRect.width / 2) };
	float bombPosY{ (g_WindowHeight / 2) - (g_bomb.bombRect.height / 2) };

	SetColor(g_bomb.bombColor);
	FillRect(g_bomb.bombRect);

	if (g_bomb.isBombActive)
	{
		SetColor(g_bomb.explosionColor);
		FillRect(g_bomb.explosionRect.left - g_bomb.explosionDistance.x, g_bomb.explosionRect.top - g_bomb.explosionDistance.y, g_bomb.explosionRect.width, g_bomb.explosionRect.height);
		FillRect(g_bomb.explosionRect.left + g_bomb.explosionDistance.x, g_bomb.explosionRect.top - g_bomb.explosionDistance.y, g_bomb.explosionRect.width, g_bomb.explosionRect.height);
		FillRect(g_bomb.explosionRect.left - g_bomb.explosionDistance.x, g_bomb.explosionRect.top + g_bomb.explosionDistance.y, g_bomb.explosionRect.width, g_bomb.explosionRect.height);
		FillRect(g_bomb.explosionRect.left + g_bomb.explosionDistance.x, g_bomb.explosionRect.top + g_bomb.explosionDistance.y,g_bomb.explosionRect.width,g_bomb.explosionRect.height);
	}

}

void ResetBomb()
{
	g_bomb.isBombActive = false;
	g_bomb.bombColor.a = 1.f;
	g_bomb.explosionDistance.x = 0.f;
	g_bomb.explosionDistance.y = 0.f;
}
#pragma endregion