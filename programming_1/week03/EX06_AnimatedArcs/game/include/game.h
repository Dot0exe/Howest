#pragma once

#include "engine/pch.h"

#pragma region gameInformation

std::string g_WindowTitle{ "DAE13 Sayit Ali - ANIMATED ARCS" };
float g_WindowWidth{ 800.f };
float g_WindowHeight{ 600.f };

#pragma endregion gameInformation

#pragma region myStructs

struct TimerAnimation
{
	float startingAngle{};
	float currentAngle{};
	Point2f startingPoint{ 200.f,200.f };
	const float clockRadius{140.f};
	const float timerRadius{120.f};
	const Color4f clockColor{0.502f, 0.502f, 0.502f,1.f};
	const Color4f timerColor{1.f,0.f,0.f,0.5f};
};

struct RotatingCandy
{
	Point2f startingPoint{ 600.f,200.f };
	float candyRadius{140.f};
	Color4f candyBaseColor{ 0.9294f, 0.8902f, 0.8157f, 1.f };
	Color4f candyColor{ 0.7020, 0.2275, 0.1804 , 1.f };
	float currentAngle{};
	Point2f candyBar1{ -g_Pi / 2, -g_Pi / 4 };
	Point2f candyBar2{ 0, g_Pi / 4 };
	Point2f candyBar3{ g_Pi / 2, 3 * g_Pi / 4 };
	Point2f candyBar4{ -g_Pi / 2, -g_Pi / 4 };
};

#pragma endregion

#pragma region myVariables

TimerAnimation g_timerAnimation{};
RotatingCandy g_rotatingCandy{};

#pragma endregion

#pragma region gameFunctions
void Start();
void Draw();
void Update(float elapsedSec);
void End();
#pragma endregion gameFunctions

#pragma region inputHandling
void OnKeyDownEvent(SDL_Keycode key);
void OnKeyUpEvent(SDL_Keycode key);
void OnMouseMotionEvent(const SDL_MouseMotionEvent& e);
void OnMouseDownEvent(const SDL_MouseButtonEvent& e);
void OnMouseUpEvent(const SDL_MouseButtonEvent& e);
#pragma endregion inputHandling

#pragma region myFunctionDeclarations

void DrawTimerAnimation();
void DrawRotatingCandy();

#pragma endregion
