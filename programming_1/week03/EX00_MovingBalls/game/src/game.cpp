// Sayit, Ali - DAE13

#include "game.h"

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	g_ball2.position = Point2f{ 100.f,400.f };
	g_ball2.size = 10.f;
	g_ball2.fillColor = Color4f{ 1.f,0.f,1.f,1.f };
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(); // Clear the background with a default color
	DrawBalls();
}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
	g_ball2.position.x += 500.f * elapsedSec;
	int mappedXPosition{ static_cast<int>(g_ball2.position.x) % static_cast<int>(g_WindowWidth) };
	g_ball2.position.x = mappedXPosition;
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
void DrawBalls()
{
	Ball ball1{};
	ball1.position = Point2f{ 100.f, 100.f };
	ball1.size = 25.f;
	ball1.fillColor = Color4f{0.f,1.f,0.f,1.f};

//	const Ball ball2{ Point2f{100.f,100.f},40.f,Color4f{1.f,0.f,0.f,1.f} };

	SetColor(ball1.fillColor);
	FillEllipse(ball1.position, ball1.size, ball1.size);

	SetColor(g_ball2.fillColor);
	FillEllipse(g_ball2.position, g_ball2.size, g_ball2.size);

}

#pragma endregion