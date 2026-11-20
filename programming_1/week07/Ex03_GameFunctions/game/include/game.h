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
Rectf g_rect{ 0,0,100,100 };
Circlef g_cirle{ 200,200,100 };
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

#pragma endregion
