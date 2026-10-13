#pragma once

#include "engine/pch.h"

#pragma region gameInformation

std::string g_WindowTitle{ "DAE13 Sayit Ali - Basic Drawing" };
float g_WindowWidth{ 800.f };
float g_WindowHeight{ 600.f };

#pragma endregion gameInformation

#pragma region myStructs

#pragma endregion

#pragma region myVariables

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

void DrawHouse();
void DrawFlag();
void DrawCheckerPattern();
void DrawColorBand();
void DrawPentegram();
void DrawColumnChart(float percentage1, float percentage2, float percentage3, float percentage4);


#pragma endregion
