#pragma once

#include "engine/pch.h"

#pragma region gameInformation

std::string g_WindowTitle{ "DAE13E Sayit Ali - Project name" };
float g_WindowWidth{ 800.f };
float g_WindowHeight{ 800.f };

#pragma endregion gameInformation

#pragma region myStructs

#pragma endregion

#pragma region myVariables

int g_Steps{};
const float g_Padding{ 50 };
const Color4f skyBlue{ 0.70f, 0.80f, 1.00f, 1.f };
const Color4f salmon{ 1.00f, 0.65f, 0.65f, 1.f };
const Color4f lightGreen{ 0.70f, 0.92f, 0.65f, 1.f };
const Color4f peach{ 1.00f, 0.80f, 0.65f, 1.f };

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

void StairsDraw();
void MultipleRects();
void RotatingRects();

#pragma endregion
