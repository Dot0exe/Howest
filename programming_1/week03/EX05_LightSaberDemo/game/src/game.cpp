// Sayit, Ali - DAE13

#include "game.h"

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	const Color4f handleColor{ 0.8f, 0.8f, 0.8f, 1.f };
	const Color4f handleOutlineColor{ 0.f,0.f,0.f,1.f };
	g_DarthVaderLightSaber.color = Color4f{ 1.f, 0.f, 0.f, 1.f };
	g_DarthVaderLightSaber.handleColor = handleColor;
	g_DarthVaderLightSaber.handleOutlineColor = handleOutlineColor;
	g_DarthVaderLightSaber.handleWidth = 20.f;
	g_DarthVaderLightSaber.handleHeight = 40.f;
	g_DarthVaderLightSaber.animationSpeed = 2.f;
	g_DarthVaderLightSaber.maxSize = 150.f;
	g_DarthVaderLightSaber.startingPosition = Point2f{
		g_WindowWidth / 3.f,
		g_WindowHeight / 2.f
	};

	g_AnakinLightSaber.color = Color4f{ 0.f, 0.f, 1.f, 1.f };
	g_AnakinLightSaber.handleColor = handleColor;
	g_AnakinLightSaber.handleOutlineColor = handleOutlineColor;
	g_AnakinLightSaber.handleWidth = g_DarthVaderLightSaber.handleWidth;
	g_AnakinLightSaber.handleHeight = g_DarthVaderLightSaber.handleHeight;
	g_AnakinLightSaber.animationSpeed = 100.f;
	g_AnakinLightSaber.maxSize = 200.f;
	g_AnakinLightSaber.startingPosition = Point2f{
		g_WindowWidth / 2.f,
		g_WindowHeight / 2.f
	};

	
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(); // Clear the background with a default color
	//darth vader saber drawing
	SetColor(g_DarthVaderLightSaber.handleColor);

	//darth vader
	FillRect(g_DarthVaderLightSaber.startingPosition,
		g_DarthVaderLightSaber.handleWidth,
		g_DarthVaderLightSaber.handleHeight);

	//anakin
	FillRect(g_AnakinLightSaber.startingPosition,
		g_AnakinLightSaber.handleWidth, 
		g_AnakinLightSaber.handleHeight);

	//start drawing handle outline
	SetColor(g_DarthVaderLightSaber.handleOutlineColor);
	DrawRect(g_DarthVaderLightSaber.startingPosition,
		g_DarthVaderLightSaber.handleWidth,
		g_DarthVaderLightSaber.handleHeight, 5.f);

	DrawRect(g_AnakinLightSaber.startingPosition,
		g_AnakinLightSaber.handleWidth,
		g_AnakinLightSaber.handleHeight, 5.f);
	
	SetColor(g_DarthVaderLightSaber.color);

	FillRect(g_DarthVaderLightSaber.startingPosition,
		g_DarthVaderLightSaber.handleWidth,
		-g_DarthVaderLightSaber.currentSize);

	SetColor(g_AnakinLightSaber.color);
	FillRect(g_AnakinLightSaber.startingPosition,
		g_AnakinLightSaber.handleWidth,
		-g_AnakinLightSaber.currentSize);


	//anakin saber drawing




}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
	g_DarthVaderLightSaber.currentSize += g_DarthVaderLightSaber.animationSpeed;
	g_DarthVaderLightSaber.currentSize = 
		static_cast<int>(g_DarthVaderLightSaber.currentSize) % 
		static_cast<int>(g_DarthVaderLightSaber.maxSize);

	g_AnakinLightSaber.currentSize += g_AnakinLightSaber.animationSpeed * elapsedSec;
	
	if (g_AnakinLightSaber.currentSize > g_AnakinLightSaber.maxSize) {
		g_AnakinLightSaber.currentSize = 0.f;

	}
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

#pragma endregion