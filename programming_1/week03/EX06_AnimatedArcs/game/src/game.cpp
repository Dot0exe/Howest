// Sayit, Ali - DAE13

#include "game.h"
#include <iostream>

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	g_timerAnimation.currentAngle = -g_Pi / 2;
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(); // Clear the background with a default color
	DrawTimerAnimation();
	DrawRotatingCandy();
}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
	g_timerAnimation.currentAngle += 0.01f * elapsedSec;
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

void DrawTimerAnimation()
{
	SetColor(g_timerAnimation.clockColor);
	FillEllipse(g_timerAnimation.startingPoint, g_timerAnimation.clockRadius, g_timerAnimation.clockRadius);
	SetColor(g_timerAnimation.timerColor);
	g_timerAnimation.startingAngle= -g_Pi/2;
	FillArc(g_timerAnimation.startingPoint, g_timerAnimation.timerRadius,g_timerAnimation.timerRadius,g_timerAnimation.startingAngle,g_timerAnimation.currentAngle);
}

void DrawRotatingCandy()
{
	SetColor(g_rotatingCandy.candyBaseColor);
	FillEllipse(g_rotatingCandy.startingPoint, g_rotatingCandy.candyRadius, g_rotatingCandy.candyRadius);
	SetColor(g_rotatingCandy.candyColor);
	FillArc(g_rotatingCandy.startingPoint, g_rotatingCandy.candyRadius, g_rotatingCandy.candyRadius, g_rotatingCandy.candyBar1.x, g_rotatingCandy.candyBar1.y);
	FillArc(g_rotatingCandy.startingPoint, g_rotatingCandy.candyRadius, g_rotatingCandy.candyRadius, g_rotatingCandy.candyBar2.x, g_rotatingCandy.candyBar2.y);
	FillArc(g_rotatingCandy.startingPoint, g_rotatingCandy.candyRadius, g_rotatingCandy.candyRadius, g_rotatingCandy.candyBar3.x, g_rotatingCandy.candyBar3.y);
	FillArc(g_rotatingCandy.startingPoint, g_rotatingCandy.candyRadius, g_rotatingCandy.candyRadius, g_rotatingCandy.candyBar4.x, g_rotatingCandy.candyBar4.y);
}

#pragma endregion