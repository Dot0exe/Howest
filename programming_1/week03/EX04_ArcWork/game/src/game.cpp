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
	const Color4f backgroundColor{ 0.98f, 0.87f, 0.79f, 1.f };

	ClearBackground(backgroundColor); // Clear the background with a default color
	CircleThingyDrawer();
	
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

void CircleThingyDrawer()
{
	const Color4f powderBlue{ 0.68f, 0.77f, 0.92f, 1.f };
	const Color4f delftBlue{ 0.23f, 0.25f, 0.35f, 1.f };

	Point2f startingPoint{ g_WindowWidth / 6, g_WindowHeight / 2 };
	
	float circleRadius{ 80 };

	SetColor(powderBlue);
	Ellipsef firstCircle{startingPoint,circleRadius,circleRadius};
	FillEllipse(firstCircle);

	Ellipsef secondCircle{firstCircle.center.x + g_WindowWidth / 3, firstCircle.center.y,
		firstCircle.radiusX,firstCircle.radiusY};
	FillEllipse(secondCircle);

	Ellipsef thirdCircle{ secondCircle.center.x + g_WindowWidth / 3, secondCircle.center.y,
		secondCircle.radiusX,secondCircle.radiusY };
	FillEllipse(thirdCircle);

	SetColor(delftBlue);
	float pi{ 3.1415f };
	float startAngle{ -pi/2 };
	float endAngle{ 0 };

	FillArc(firstCircle.center, circleRadius, circleRadius, startAngle, endAngle);
	endAngle += pi / 2;
	FillArc(secondCircle.center, circleRadius, circleRadius, startAngle, endAngle);
	endAngle += pi / 2;
	FillArc(thirdCircle.center, circleRadius, circleRadius, startAngle, endAngle);

}

#pragma endregion