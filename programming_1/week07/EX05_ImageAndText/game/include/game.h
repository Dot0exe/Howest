#pragma once

#include "engine/pch.h"

#pragma region gameInformation

std::string g_WindowTitle{ "DAE13E Sayit Ali - Image and Text" };
float g_WindowWidth{ 800.f };
float g_WindowHeight{ 600.f };

#pragma endregion gameInformation

#pragma region myStructs

#pragma endregion

#pragma region myVariables
utils::Texture g_CrewTexture{};
utils::Texture g_CrewImposterTexture{};
utils::Texture g_TitleScreenTextTexture{};
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
void DrawCrewMate(const utils::Texture& texture,const Point2f& position);
void DrawCrewMate(const utils::Texture& texture, const Point2f& position,const Rectf& sourceRect);
void DrawCrewMate(const utils::Texture& texture, const Rectf& destRect, const Rectf& sourceRect);

void DrawTextCentered(const utils::Texture& texture, const Point2f& position);
#pragma endregion
