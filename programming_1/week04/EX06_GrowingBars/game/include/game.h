#pragma once

#include "engine/pch.h"

#pragma region gameInformation

std::string g_WindowTitle{ "DAE13 Sayit Ali - Project name" };
float g_WindowWidth{ 800.f };
float g_WindowHeight{ 450.f };

#pragma endregion gameInformation

#pragma region myStructs
struct LoadingBar
{
	Rectf rect;
	Rectf outerLine;
	float outerLineWidth;
	Color4f outerLineColor;
	float maxSize;
	float speed;
	Color4f barColor;
	float left;
	float top;
	bool isClicked;
};

#pragma endregion

#pragma region myVariables

LoadingBar g_FirstBar{};
LoadingBar g_SecondBar{};
LoadingBar g_ThirdBar{};
const float g_BarPadding{ 25.f };
int g_FrameCounter{};
const int g_MaxFrame{ 50 };
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

void FirstBarStart();
void FirstBarDraw();
void FirstBarUpdate();
void FirstBarColorControl(float x, float y);


void SecondBarStart();
void SecondBarDraw();
void SecondBarUpdate();
void SecondBarColorControl(float x, float y);

void ThirdBarStart();
void ThirdBarDraw();
void ThirdBarUpdate();
void ThirdBarColorControl(float x, float y);
void FrameCounter();
#pragma endregion
