// Sayit, Ali - 1DAE13

#include "game.h"

using namespace utils;

#pragma region gameFunctions
void DrawLogo();
void DrawLogoCircle();
void DrawLogoEyes();
void DrawLogoMouth();
void DrawLogoText();

// Load textures and initialize other resources here.
void Start()
{
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(0,0,0); // clear background and change color to black
	
	DrawLogo();
	DrawLogoText();

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

void DrawLogo()
{
	DrawLogoCircle();
	DrawLogoEyes();
	DrawLogoMouth();
}
void DrawLogoCircle()
{	//set color to white
	SetColor(255, 255, 255);

	int circleDiameter{ 200 };
	int circlePaddingY{ 80 };
	float centerX{ g_WindowWidth / 2 };
	float centerY{ g_WindowHeight / 2 };
	//big circle
	FillEllipse(centerX, centerY + circlePaddingY, circleDiameter, circleDiameter);
}
void DrawLogoMouth()
{
	float mouthThickness{ 25 };
	// mouth upper
	SetColor(0, 0, 0);
	float centerX{ g_WindowWidth / 2 };
	float centerY{ g_WindowHeight / 2 };

	float upperY{ centerY + 100 };
	float
		upperBottomY{ centerY + 150 };

	float lowerY{ centerY + 120 };
	float lowerBottomY{ centerY + 170 };

	// mouth upper
	DrawLine(centerX - 200, upperY, centerX - 170, upperBottomY, mouthThickness);
	DrawLine(centerX - 150, upperY, centerX - 170, upperBottomY, mouthThickness);
	DrawLine(centerX - 150, upperY, centerX - 120, upperBottomY, mouthThickness);
	DrawLine(centerX - 100, upperY, centerX - 120, upperBottomY, mouthThickness);

	DrawLine(centerX - 100, upperY, centerX - 70, upperBottomY, mouthThickness);
	DrawLine(centerX - 50, upperY, centerX - 70, upperBottomY, mouthThickness);
	DrawLine(centerX - 50, upperY, centerX - 20, upperBottomY, mouthThickness);
	DrawLine(centerX, upperY, centerX - 20, upperBottomY, mouthThickness);

	DrawLine(centerX, upperY, centerX + 30, upperBottomY, mouthThickness);
	DrawLine(centerX + 50, upperY, centerX + 30, upperBottomY, mouthThickness);
	DrawLine(centerX + 50, upperY, centerX + 80, upperBottomY, mouthThickness);
	DrawLine(centerX + 100, upperY, centerX + 80, upperBottomY, mouthThickness);

	DrawLine(centerX + 100, upperY, centerX + 130, upperBottomY, mouthThickness);
	DrawLine(centerX + 150, upperY, centerX + 130, upperBottomY, mouthThickness);
	DrawLine(centerX + 150, upperY, centerX + 180, upperBottomY, mouthThickness);
	DrawLine(centerX + 200, upperY, centerX + 180, upperBottomY, mouthThickness);

	// mouth lower
	DrawLine(centerX - 200, lowerY, centerX - 170, lowerBottomY, mouthThickness);
	DrawLine(centerX - 150, lowerY, centerX - 170, lowerBottomY, mouthThickness);
	DrawLine(centerX - 150, lowerY, centerX - 120, lowerBottomY, mouthThickness);
	DrawLine(centerX - 100, lowerY, centerX - 120, lowerBottomY, mouthThickness);

	DrawLine(centerX - 100, lowerY, centerX - 70, lowerBottomY, mouthThickness);
	DrawLine(centerX - 50, lowerY, centerX - 70, lowerBottomY, mouthThickness);
	DrawLine(centerX - 50, lowerY, centerX - 20, lowerBottomY, mouthThickness);
	DrawLine(centerX, lowerY, centerX - 20, lowerBottomY, mouthThickness);

	DrawLine(centerX, lowerY, centerX + 30, lowerBottomY, mouthThickness);
	DrawLine(centerX + 50, lowerY, centerX + 30, lowerBottomY, mouthThickness);
	DrawLine(centerX + 50, lowerY, centerX + 80, lowerBottomY, mouthThickness);
	DrawLine(centerX + 100, lowerY, centerX + 80, lowerBottomY, mouthThickness);

	DrawLine(centerX + 100, lowerY, centerX + 130, lowerBottomY, mouthThickness);
	DrawLine(centerX + 150, lowerY, centerX + 130, lowerBottomY, mouthThickness);
	DrawLine(centerX + 150, lowerY, centerX + 180, lowerBottomY, mouthThickness);
	DrawLine(centerX + 200, lowerY, centerX + 180, lowerBottomY, mouthThickness);
}
void DrawLogoEyes()
{
	float centerX{ g_WindowWidth / 2 };
	float centerY{ g_WindowHeight / 2 };
	//set color to black
	SetColor(0, 0, 0);
	// left eye
	FillEllipse(centerX - 70, centerY, 30, 30);
	FillEllipse(centerX - 100, centerY - 20, 20, 30);
	FillEllipse(centerX - 90, centerY - 10, 20, 30);
	// right eye
	FillEllipse(centerX + 70, centerY, 30, 30);
	FillEllipse(centerX + 100, centerY - 20, 20, 30);
	FillEllipse(centerX + 90, centerY - 10, 20, 30);
}
void DrawLogoText()
{
	float centerX{ g_WindowWidth / 2 };
	float centerY{ g_WindowHeight / 2 };
	float lineThickness{ 10 };

	SetColor(255, 255, 255);
	// D
	DrawLine(centerX - 300, centerY - 250, centerX - 300, centerY-150,lineThickness);
	DrawLine(centerX - 295, centerY - 250, centerX - 250, centerY - 200, lineThickness);
	DrawLine(centerX - 295, centerY - 150, centerX - 250, centerY - 200, lineThickness);
	// O
	DrawEllipse(centerX-180, centerY-200, 45, 45, lineThickness);
	// T
	DrawLine(centerX - 60, centerY - 250, centerX - 60, centerY - 150, lineThickness);
	DrawLine(centerX - 100, centerY - 245, centerX - 20, centerY - 245, lineThickness);
	// .
	DrawEllipse(centerX, centerY - 160, 5, 5, 5);
	// E
	DrawLine(centerX +40 , centerY - 250, centerX +40 , centerY - 150, lineThickness);
	DrawLine(centerX +40, centerY - 245, centerX +100, centerY - 245, lineThickness);
	DrawLine(centerX + 40, centerY - 200, centerX + 100, centerY - 200, lineThickness);
	DrawLine(centerX + 40, centerY - 155, centerX + 100, centerY - 155, lineThickness);
	// X
	DrawLine(centerX + 150, centerY - 155, centerX + 200, centerY - 250, lineThickness);
	DrawLine(centerX + 200, centerY - 155, centerX + 150, centerY -250, lineThickness);
	// E
	DrawLine(centerX + 250, centerY - 250, centerX + 250, centerY - 150, lineThickness);
	DrawLine(centerX + 310, centerY - 245, centerX + 250, centerY - 245, lineThickness);
	DrawLine(centerX + 310, centerY - 200, centerX + 250, centerY - 200, lineThickness);
	DrawLine(centerX + 310, centerY - 155, centerX + 250, centerY - 155, lineThickness);
}

#pragma endregion