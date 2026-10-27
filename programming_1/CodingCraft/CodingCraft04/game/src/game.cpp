// Sayit, Ali - DAE13E

#include "game.h"

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	GetColorCircle();

	float ballRadius{ 100.f};
	g_balls.ball.radiusX = ballRadius;
	g_balls.ball.radiusY = ballRadius;

	g_balls.ball.center.x = g_WindowWidth / 2;
	g_balls.ball.center.y = g_WindowHeight / 2;
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(); // Clear the background with a default color
	DrawCircle();
}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
	const Uint8* pStates{ SDL_GetKeyboardState(nullptr) };

	if (pStates[SDL_SCANCODE_UP] && g_balls.ball.radiusY > 1)
	{
		g_balls.ball.radiusY--;
	}
	if (pStates[SDL_SCANCODE_DOWN] && g_balls.ball.radiusY < g_WindowHeight / 2)
	{
		g_balls.ball.radiusY++;
	}
	if (pStates[SDL_SCANCODE_LEFT] && g_balls.ball.radiusX > 1)
	{
		g_balls.ball.radiusX--;
	}
	if (pStates[SDL_SCANCODE_RIGHT] && g_balls.ball.radiusX < g_WindowWidth / 2)
	{
		g_balls.ball.radiusX++;
	}

	/*
	
	 idk why this is crasing when while y value is at minimum if x value becomes lower than 0
	if (pStates[SDL_SCANCODE_UP] && g_balls.ball.radiusY > -g_WindowHeight / 2)
	{
		g_balls.ball.radiusY--;
	}
	if (pStates[SDL_SCANCODE_DOWN] && g_balls.ball.radiusY < g_WindowHeight / 2)
	{
		g_balls.ball.radiusY++;
	}
	if (pStates[SDL_SCANCODE_LEFT] && g_balls.ball.radiusX > -g_WindowWidth / 2)
	{
		g_balls.ball.radiusX--;
	}
	if (pStates[SDL_SCANCODE_RIGHT] && g_balls.ball.radiusX < g_WindowWidth / 2)
	{
		g_balls.ball.radiusX++;
	}*/
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
	GetColorCircle();
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

void DrawCircle()
{
	
	SetColor(g_balls.color);
	FillEllipse(g_balls.ball);
}

void GetColorCircle()
{
	float colorMax{ 255.f };
	int colorSteps{ 256 };

	g_balls.color.r = (rand() % colorSteps) / colorMax;
	g_balls.color.g = (rand() % colorSteps) / colorMax;
	g_balls.color.b = (rand() % colorSteps) / colorMax;
}

#pragma endregion