#pragma once

#include "engine/pch.h"

#pragma region gameInformation

std::string g_WindowTitle{ "DAE13 Sayit Ali - CLICK RECTANGLE" };
float g_WindowWidth{ 800.f };
float g_WindowHeight{ 600.f };

#pragma endregion gameInformation

#pragma region myStructs

struct RandomRect
{
	Rectf rect;
	float speed;
};

struct BouncyLine
{
	Point2f pos;
	float speedX;
	float speedY;
};

#pragma endregion

#pragma region myVariables

RandomRect g_randomRect;
bool g_isMoving;
bool g_isClicked;

BouncyLine g_firstPos;
BouncyLine g_secondPos;

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

//Movable Random Rect
void DrawRandomRect();
void ChooseRandomColor();
void SizeRandomRect();
void MoveRect(float elapsedSec);
// Bouncy Line
void DrawBouncyLine();
void BouncyLineBouncing();
void BouncyLineMove(float elapsedSec);
void BouncyLineStart();


#pragma endregion
