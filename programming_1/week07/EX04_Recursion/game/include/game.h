#pragma once

#include "engine/pch.h"

#pragma region gameInformation

std::string g_WindowTitle{ "DAE13E Sayit Ali - Project name" };
float g_WindowWidth{ 800.f };
float g_WindowHeight{ 600.f };

#pragma endregion gameInformation

#pragma region myStructs

#pragma endregion

#pragma region myVariables

Point2f left;
Point2f top;
Point2f right;

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
void ExploreMine(int level = 0);
void DrawSierpinskiTriangle(const Point2f& left,const Point2f& top, const Point2f& right, const Color4f& color = Color4f{ 1.f, 1.f, 1.f, 1.f });
#pragma endregion
