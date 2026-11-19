// Sayit, Ali - DAE13

#include "game.h"

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	FirstBarStart();
	SecondBarStart();
	ThirdBarStart();
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(0.f,0.f,0.f); // Clear the background with a default color

	FirstBarDraw();
	SecondBarDraw();
	ThirdBarDraw();

}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
	FirstBarUpdate();
	SecondBarUpdate();
	FrameCounter();
	ThirdBarUpdate();

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
		g_FirstBar.rect.width = 0.f;
		g_SecondBar.rect.width = 0.f;
		g_ThirdBar.rect.width = 0.f;
		g_FrameCounter = 0;
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
	FirstBarColorControl(e.x, e.y);
	SecondBarColorControl(e.x, e.y);
	ThirdBarColorControl(e.x, e.y);
}

// Called once when a mouse button is released.
void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{
}

#pragma endregion inputHandling

#pragma region myFunctionDefinitions

// first bar

void FirstBarStart()
{
	g_FirstBar.barColor = Color4f{ 1.f,1.f,0.f,1.f };
	g_FirstBar.outerLineColor = Color4f{ 1.f, 1.f, 1.f ,1.f };
	g_FirstBar.outerLineWidth = 4.f;
	g_FirstBar.maxSize = g_WindowWidth - (g_BarPadding * 2);
	g_FirstBar.speed = 1.f;
	g_FirstBar.top = g_BarPadding;
	g_FirstBar.left = g_BarPadding;
	g_FirstBar.rect = Rectf{g_FirstBar.left,g_FirstBar.top,0.f,100.f};
	g_FirstBar.outerLine = Rectf{ g_FirstBar.left,g_FirstBar.top,g_FirstBar.maxSize,g_FirstBar.rect.height };

}

void FirstBarDraw()
{

	SetColor(g_FirstBar.barColor);
	FillRect(g_FirstBar.rect);

	SetColor(g_FirstBar.outerLineColor);
	DrawRect(g_FirstBar.outerLine, g_FirstBar.outerLineWidth);
}

void FirstBarUpdate()
{
	g_FirstBar.rect.width += g_FirstBar.speed;
	if (g_FirstBar.rect.width >= g_FirstBar.maxSize)
	{
		g_FirstBar.rect.width = 0.f;
	}
}

void FirstBarColorControl(float x, float y)
{
	const bool isInsideX{ x > g_FirstBar.rect.left && x < g_FirstBar.rect.left + g_FirstBar.maxSize };
	const bool isInsideY{ y > g_FirstBar.rect.top && y < g_FirstBar.rect.top + g_FirstBar.rect.height };

	float colorMax{ 100.f };
	int colorSteps{ 101 };

	if (isInsideX && isInsideY)
	{
		g_FirstBar.barColor.g = ((rand() % colorSteps) / colorMax);
		g_FirstBar.barColor.b = ((rand() % colorSteps) / colorMax);
		g_FirstBar.barColor.r = ((rand() % colorSteps) / colorMax);
	}
}

// second bar

void SecondBarStart()
{
	g_SecondBar.barColor = Color4f{ 1.f, 0.f, 0.f, 1.f };
	g_SecondBar.outerLineColor = Color4f{ 1.f, 1.f, 1.f ,1.f };
	g_SecondBar.outerLineWidth = 4.f;
	g_SecondBar.maxSize = g_WindowWidth - (g_BarPadding * 2);
	g_SecondBar.speed = 5.f;
	g_SecondBar.left = g_FirstBar.left;
	g_SecondBar.top = g_BarPadding + g_FirstBar.rect.height + g_FirstBar.top;
	g_SecondBar.rect = Rectf{ g_SecondBar.left,g_SecondBar.top,0.f,150.f };
	g_SecondBar.outerLine = Rectf{ g_SecondBar.left,g_SecondBar.top,g_SecondBar.maxSize, g_SecondBar.rect.height };
}

void SecondBarDraw()
{
	SetColor(g_SecondBar.barColor);
	FillRect(g_SecondBar.rect);
	
	SetColor(g_SecondBar.outerLineColor);
	DrawRect(g_SecondBar.outerLine, g_SecondBar.outerLineWidth);

}
void SecondBarUpdate()
{
	g_SecondBar.rect.width += g_SecondBar.speed;
	if (g_SecondBar.rect.width >= g_SecondBar.maxSize)
	{
		g_SecondBar.rect.width = 0.f;
	}
}

void SecondBarColorControl(float x, float y)
{
	const bool isInsideX{ x > g_SecondBar.rect.left && x < g_SecondBar.rect.left + g_SecondBar.maxSize };
	const bool isInsideY{ y > g_SecondBar.rect.top && y < g_SecondBar.rect.top + g_SecondBar.rect.height };


	float colorMax{ 100.f };
	int colorSteps{ 101 };

	if (isInsideX && isInsideY)
	{
		g_SecondBar.barColor.g = ((rand() % colorSteps) / colorMax);
		g_SecondBar.barColor.b = ((rand() % colorSteps) / colorMax);
		g_SecondBar.barColor.r = ((rand() % colorSteps) / colorMax);
	}
}

// third bar

void ThirdBarStart()
{
	g_ThirdBar.barColor = Color4f{ 0.f, 1.f, 0.f, 1.f };
	g_ThirdBar.outerLineColor = Color4f{ 1.f, 1.f, 1.f ,1.f };
	g_ThirdBar.outerLineWidth = 4.f;
	g_ThirdBar.maxSize = 600.f;
	g_ThirdBar.speed = g_ThirdBar.maxSize / 8;
	g_ThirdBar.left = g_FirstBar.left;
	g_ThirdBar.top = g_BarPadding + g_SecondBar.rect.height + g_SecondBar.top;
	g_ThirdBar.rect = Rectf{ g_ThirdBar.left,g_ThirdBar.top,0.f,100.f };
	g_ThirdBar.outerLine = Rectf{ g_ThirdBar.left,g_ThirdBar.top,g_ThirdBar.maxSize, g_ThirdBar.rect.height };

}
void ThirdBarDraw()
{
	SetColor(g_ThirdBar.barColor);
	FillRect(g_ThirdBar.rect);

	SetColor(g_ThirdBar.outerLineColor);
	DrawRect(g_ThirdBar.outerLine, g_ThirdBar.outerLineWidth);
}
void ThirdBarUpdate()
{
	if (g_FrameCounter >= g_MaxFrame)
	{
		g_FrameCounter = 0;

		if (g_ThirdBar.rect.width >= g_ThirdBar.maxSize)
		{
			g_ThirdBar.rect.width = 0.f;
		}
		else
		{
			g_ThirdBar.rect.width += g_ThirdBar.speed;
		}
	}
}

void ThirdBarColorControl(float x, float y)
{
	const bool isInsideX{ x > g_ThirdBar.rect.left && x < g_ThirdBar.rect.left + g_ThirdBar.maxSize };
	const bool isInsideY{ y > g_ThirdBar.rect.top && y < g_ThirdBar.rect.top + g_ThirdBar.rect.height };


	float colorMax{ 100.f };
	int colorSteps{ 101 };
	
	if (isInsideX && isInsideY)
	{
		g_ThirdBar.barColor.g = ((rand() % colorSteps) / colorMax);
		g_ThirdBar.barColor.b = ((rand() % colorSteps) / colorMax);
		g_ThirdBar.barColor.r = ((rand() % colorSteps) / colorMax);
	}
}

void FrameCounter()
{
	++g_FrameCounter;
}

#pragma endregion