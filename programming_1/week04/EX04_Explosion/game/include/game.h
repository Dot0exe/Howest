#pragma once

#include "engine/pch.h"

#pragma region gameInformation

std::string g_WindowTitle{ "DAE13 Sayit Ali - Explosion" };
float g_WindowWidth{ 600.f };
float g_WindowHeight{ 600.f };

#pragma endregion gameInformation

#pragma region myStructs

struct Bomb
{
	bool isBombActive;
	Rectf bombRect;
	Point2f explosionDistance;
	Color4f bombColor;
	Color4f explosionColor;
	Rectf explosionRect;
	float explosionSpeed;

};

#pragma endregion

#pragma region myVariables

Bomb g_bomb;

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

void ResetBomb();
void StartExplosion();
void ExplosionLocation(float elapsedSec);
void DrawBomb();

#pragma endregion
