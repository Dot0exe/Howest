// Sayit, Ali - DAE13 

#include "game.h"
#include <math.h>

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(0.15f, 0.f, 0.15f); // Clear the background with a default color
	DrawHouse();
	DrawFlag();
	DrawCheckerPattern();
	DrawColorBand();
	DrawPentegram();
	DrawColumnChart(60,80,80,20);

}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
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
}

// Called once when a mouse button is released.
void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{
}

#pragma endregion inputHandling

#pragma region myFunctionDefinitions

void DrawHouse()
{
	// draw rects
	float leftPadding{ 20.f };
	float topPadding{ 70.f };
	float rectWidth{ 270.f };
	float rectHight{ 50.f };

	SetColor(1.f, 0.f, 0.f);

	FillRect(leftPadding, topPadding, rectWidth, rectHight);
	SetColor(1.f, 1.f, 1.f);
	DrawRect(leftPadding, topPadding, rectWidth, rectHight, 1.f);

	// draw triangle

	float rightCornerX{ leftPadding + rectWidth };
	float topCornerX{ rightCornerX / 2 };
	float topCornerY{ topPadding / 2 };
	
	SetColor(1.f, 0.f, 0.f);
	FillTriangle(leftPadding,topPadding,rightCornerX,topPadding,topCornerX,topCornerY);
	SetColor(1.f, 1.f, 1.f);
	DrawTriangle(leftPadding, topPadding, rightCornerX, topPadding, topCornerX, topCornerY);
}

void DrawFlag()
{
	float leftPadding{ 20.f };
	float topPadding{ 200.f };
	float flagWidth{ 90.f };
	float flagHeight{ 150.f };

	SetColor(0.f, 0.f, 0.f);
	FillRect(leftPadding, topPadding, flagWidth, flagHeight);
	SetColor(1.f, 1.f, 0.f);
	FillRect(leftPadding + flagWidth, topPadding, flagWidth, flagHeight);
	SetColor(1.f, 0.f, 0.f);
	FillRect(leftPadding + (flagWidth * 2), topPadding, flagWidth, flagHeight);
	SetColor(1.f, 1.f, 1.f);
	DrawRect(leftPadding, topPadding, flagWidth * 3, flagHeight);

}

void DrawCheckerPattern()
{
	float leftPadding{ 20.f };
	float topPadding{ 420.f };
	float checkerSize{ 40.f };
	
	// draw rect black
	SetColor(0.f, 0.f, 0.f);
	FillRect(leftPadding, topPadding, checkerSize, checkerSize);
	FillRect(leftPadding + (checkerSize * 2), topPadding, checkerSize, checkerSize);
	FillRect(leftPadding + checkerSize, topPadding + checkerSize, checkerSize, checkerSize);
	FillRect(leftPadding, topPadding + (checkerSize * 2), checkerSize, checkerSize);
	FillRect(leftPadding + (checkerSize * 2), topPadding + (checkerSize * 2), checkerSize, checkerSize);

	// draw rect white
	SetColor(1.f, 1.f, 1.f);
	FillRect(leftPadding + checkerSize, topPadding, checkerSize, checkerSize);
	FillRect(leftPadding, topPadding + checkerSize, checkerSize, checkerSize);
	FillRect(leftPadding + (checkerSize * 2), topPadding + checkerSize, checkerSize, checkerSize);
	FillRect(leftPadding + checkerSize, topPadding + (checkerSize * 2), checkerSize, checkerSize);
	DrawRect(leftPadding, topPadding, checkerSize * 3, checkerSize * 3);
}

void DrawColorBand()
{
	float leftPadding{ 400.f };
	float topPadding{ 20.f };
	float rectWidth{ 40.f };
	float rectHeight{ 100.f };

	// gray
	SetColor(0.2f, 0.2f, 0.2f);
	FillRect(leftPadding, topPadding, rectWidth, rectHeight);

	// red
	SetColor(1.0f, 0.0f, 0.0f);
	FillRect(leftPadding + rectWidth, topPadding, rectWidth, rectHeight);

	// green
	SetColor(0.0f, 1.0f, 0.0f);
	FillRect(leftPadding + (rectWidth * 2), topPadding, rectWidth, rectHeight);

	// blue
	SetColor(0.0f, 0.0f, 1.0f);
	FillRect(leftPadding + (rectWidth * 3), topPadding, rectWidth, rectHeight);

	// pink
	SetColor(1.0f, 0.0f, 1.0f);
	FillRect(leftPadding + (rectWidth * 4), topPadding, rectWidth, rectHeight);

	// yellow
	SetColor(1.0f, 1.0f, 0.0f);
	FillRect(leftPadding + (rectWidth * 5), topPadding, rectWidth, rectHeight);

	// green
	SetColor(0.0f, 1.0f, 0.0f);
	FillRect(leftPadding + (rectWidth * 6), topPadding, rectWidth, rectHeight);

	// cyan
	SetColor(0.0f, 1.0f, 1.0f);
	FillRect(leftPadding + (rectWidth * 7), topPadding, rectWidth, rectHeight);

	// white
	SetColor(1.0f, 1.0f, 1.0f);
	FillRect(leftPadding + (rectWidth * 8), topPadding, rectWidth, rectHeight);

	// horizontal rect
	SetColor(0.f, 0.f, 0.f, 0.5f);
	FillRect(leftPadding, topPadding + (rectHeight / 2), rectWidth * 9, rectHeight / 2);

	SetColor(1.f, 1.f, 0.f);
	DrawRect(leftPadding, topPadding, rectWidth * 9,rectHeight,2.f);
}

void DrawPentegram()
{
	float centerX{ 600.f };
	float centerY{ 300.f };
	float radius{ 100.f };
	float angle{ 0.f };
	float pi{ 3.14159f };

	float x1{ static_cast<float>(cos(angle)) * radius + centerX };
	float y1{ static_cast<float>(sin(angle)) * radius + centerY };

	float angleIncrease{ (2 * pi) / 2.5f };
	angle += angleIncrease;

	float x2{ static_cast<float>(cos(angle)) * radius + centerX };
	float y2{ static_cast<float>(sin(angle)) * radius + centerY };

	angle += angleIncrease;

	float x3{ static_cast<float>(cos(angle)) * radius + centerX };
	float y3{ static_cast<float>(sin(angle)) * radius + centerY };

	angle += angleIncrease;

	float x4{ static_cast<float>(cos(angle)) * radius + centerX };
	float y4{ static_cast<float>(sin(angle)) * radius + centerY };

	angle += angleIncrease;

	float x5{ static_cast<float>(cos(angle)) * radius + centerX };
	float y5{ static_cast<float>(sin(angle)) * radius + centerY };

	
	SetColor(1.0f, 0.0f, 1.0f);
	DrawLine(x1, y1, x2, y2);
	DrawLine(x2, y2, x3, y3);
	DrawLine(x3, y3, x4, y4);
	DrawLine(x4, y4, x5, y5);
	DrawLine(x5, y5, x1, y1);
}

void DrawColumnChart(float percentageAge0To20, float percentageAge20To40, float percentageAge40To60, float percentageAgeOver60 )
{
	float leftPadding{ 400.f };
	float chartBottom{ 550.f };
	float maxColumnHeight{ 100.f };
	float columnWidth{ 50.f };

	float percentage{ percentageAge0To20};
	float percentageNormalizer{ 100.f };
	float normalizedPercentage{ percentage / percentageNormalizer };
	float columnHeight{ maxColumnHeight * normalizedPercentage };

	SetColor(0.f, 0.55f, 0.55f);
	FillRect(leftPadding, chartBottom - columnHeight, columnWidth, columnHeight);

	SetColor(0.0f, 0.60f, 0.80f);
	percentage = percentageAge20To40;
	normalizedPercentage = percentage / percentageNormalizer;
	columnHeight =  maxColumnHeight * normalizedPercentage;
	leftPadding += columnWidth;
	FillRect(leftPadding, chartBottom - columnHeight, columnWidth, columnHeight);

	SetColor(0.0f, 0.75f, 1.f);
	percentage = percentageAge40To60;
	normalizedPercentage = percentage / percentageNormalizer;
	columnHeight = maxColumnHeight * normalizedPercentage;
	leftPadding += columnWidth;
	FillRect(leftPadding, chartBottom - columnHeight, columnWidth, columnHeight);

	SetColor(0.0f, 0.55f, 0.80f);
	percentage = percentageAgeOver60;
	normalizedPercentage = percentage / percentageNormalizer;
	columnHeight = maxColumnHeight * normalizedPercentage;
	leftPadding += columnWidth;
	FillRect(leftPadding, chartBottom - columnHeight, columnWidth, columnHeight);
}

#pragma endregion