// Sayit, Ali - DAE13

#include "game.h"

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	SizeRandomRect();
	BouncyLineStart();
	g_randomRect.speed = 300.f;
	
	g_firstPos.speedX = 120.f;
	g_firstPos.speedY = 120.f;
	g_secondPos.speedX = 120.f;
	g_secondPos.speedY = 120.f;
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(0.f,0.f,0.3f); // Clear the background with a default color
	DrawRandomRect();
	DrawBouncyLine();
}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
	MoveRect(elapsedSec);

	BouncyLineMove(elapsedSec);
	BouncyLineBouncing();
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
	if (key == SDLK_r)
	{
		g_isMoving = !g_isMoving;
	}
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
	if (e.button == SDL_BUTTON_LEFT)
	{
		const float right{ g_randomRect.rect.left + g_randomRect.rect.width };

		const bool isInsideX{ e.x > g_randomRect.rect.left && e.x < g_randomRect.rect.left + g_randomRect.rect.width };
		const bool isInsideY{ e.y > g_randomRect.rect.top && e.y < g_randomRect.rect.top + g_randomRect.rect.height };
		const bool isInsideCopyX{ e.x + g_WindowWidth > g_randomRect.rect.left && e.x + g_WindowWidth < right };


		if ((isInsideX && isInsideY) ||(isInsideCopyX && isInsideY))
		{
			if (g_isClicked)
			{
				SizeRandomRect();
			}
			g_isClicked = !g_isClicked;
		}
	}
}

// Called once when a mouse button is released.
void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{
	
}

#pragma endregion inputHandling

#pragma region myFunctionDefinitions

void SizeRandomRect()
{
	float edgeDistance{ 50.f };
	float availableWidth{ g_WindowWidth - (edgeDistance * 2) };
	float availableHeight{ g_WindowHeight - (edgeDistance * 2) };

	float minRectSizeX{ 60.f };
	float minRectSizeY{ 40.f };
	int widthChoices{ static_cast<int>(availableWidth - minRectSizeX) };
	int heightChoices{ static_cast<int>(availableHeight - minRectSizeY) };
	g_randomRect.rect.width = minRectSizeX + rand() % widthChoices;
	g_randomRect.rect.height = minRectSizeY + rand() % heightChoices;

	int leftChoices{ static_cast<int>(availableWidth - g_randomRect.rect.width) };
	int topChoices{ static_cast<int>(availableHeight - g_randomRect.rect.height) };
	g_randomRect.rect.left = edgeDistance + rand() % leftChoices;
	g_randomRect.rect.top = edgeDistance + rand() % topChoices;
}

void DrawRandomRect()
{
	Color4f gray{ 0.3f,0.3f,0.3f,1.f};
	Color4f green{ 0.f,1.f,0.f,1.f };

	if (g_isClicked)
	{
		SetColor(green);
	}
	else
	{
		SetColor(gray);
	}

	FillRect(g_randomRect.rect);

	if (g_randomRect.rect.left + g_randomRect.rect.width > g_WindowWidth)
	{
		Rectf copyRect{ g_randomRect.rect };
		copyRect.left -= g_WindowWidth;
		FillRect(copyRect);
	}
}

void MoveRect(float elapsedSec)
{
	if (g_isMoving)
	{
		g_randomRect.rect.left += g_randomRect.speed * elapsedSec;

		if (g_randomRect.rect.left >= g_WindowWidth)
		{
			g_randomRect.rect.left -= g_WindowWidth;
		}
	}
}

void DrawBouncyLine()
{
	SetColor(1.f, 1.f, 1.f, 1.f);
	DrawLine(g_firstPos.pos.x, g_firstPos.pos.y, g_secondPos.pos.x, g_secondPos.pos.y);
}

void BouncyLineStart()
{
	g_firstPos.pos.x = rand() % static_cast<int>(g_WindowWidth);
	g_firstPos.pos.y = rand() % static_cast<int>(g_WindowHeight);
	g_secondPos.pos.x = rand() % static_cast<int>(g_WindowWidth);
	g_secondPos.pos.y = rand() % static_cast<int>(g_WindowHeight);
}

void BouncyLineBouncing()
{
	if (g_firstPos.pos.x < 0.f || g_firstPos.pos.x > g_WindowWidth)
	{
		g_firstPos.speedX *= -1.f;
	}
	if (g_firstPos.pos.y < 0.f || g_firstPos.pos.y > g_WindowHeight)
	{
		g_firstPos.speedY *= -1.f;
	}
	if (g_secondPos.pos.x < 0.f || g_secondPos.pos.x > g_WindowWidth)
	{
		g_secondPos.speedX *= -1.f;
	}
	if (g_secondPos.pos.y < 0.f || g_secondPos.pos.y > g_WindowHeight)
	{
		g_secondPos.speedY *= -1.f;
	}
}

void BouncyLineMove(float elapsedSec)
{
	g_firstPos.pos.x += g_firstPos.speedX * elapsedSec;
	g_firstPos.pos.y += g_firstPos.speedY * elapsedSec;
	g_secondPos.pos.x += g_secondPos.speedX * elapsedSec;
	g_secondPos.pos.y += g_secondPos.speedY * elapsedSec;
}

#pragma endregion