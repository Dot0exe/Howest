// Sayit, Ali - DAE13E

#include "game.h"
#include <iostream>

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
	std::string crewMateTexturePath{ "./crewmate.png" };

	bool hasLoadedResource{ false };
	hasLoadedResource = TextureFromFile(crewMateTexturePath, g_CrewTexture);
	if (!hasLoadedResource)
	{
		std::cout << "Failed to load " << crewMateTexturePath<<"\n";
	}

	std::string crewMateImposterTexturePath{ "./sus.png" };
	hasLoadedResource = TextureFromFile(crewMateImposterTexturePath, g_CrewImposterTexture);
	if (!hasLoadedResource)
	{
		std::cout << "Failed to load " << crewMateImposterTexturePath<<"\n";
	}
	std::string fonFilePath{ "./Impostograph-Regular.ttf" };
	hasLoadedResource = TextureFromString(
		"thats pretty sus",
		fonFilePath,
		72,
		Color4f{1.f,0.f,0.f,1.f},
		g_TitleScreenTextTexture
	);
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(); // Clear the background with a default color
	DrawCrewMate(g_CrewTexture, Point2f{ g_WindowWidth / 2,g_WindowHeight / 2 });
	const float cutOff{ 60.f };
	DrawCrewMate(g_CrewImposterTexture, Point2f{ g_WindowWidth / 4,g_WindowHeight / 2 }, Rectf{ 0, 0, g_CrewImposterTexture.width - cutOff, g_CrewImposterTexture.height });
	const float scale{ 0.5f };
	DrawCrewMate(g_CrewTexture, 
		Rectf
		{ 
			g_WindowWidth - g_WindowWidth / 5,
			g_WindowHeight / 2, g_CrewTexture.width * scale, g_CrewTexture.height * scale},
		Rectf{0,0,g_CrewTexture.width, g_CrewTexture.height});

	const float offset{ 100.f };
	DrawTextCentered(g_TitleScreenTextTexture, Point2f{g_WindowWidth / 2,offset });
}

// Handle gameplay, movement and collisions here.
void Update(float elapsedSec)
{
}

// Delete textures and free other resources here.
void End()
{
	DeleteTexture(g_TitleScreenTextTexture);
	DeleteTexture(g_CrewImposterTexture);
	DeleteTexture(g_CrewTexture);
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

void DrawCrewMate(const utils::Texture& texture, const Point2f& position)
{
	const Point2f centerOfSet{ texture.width / 2, texture.height / 2 };
	const Point2f finalPosition{ position.x - centerOfSet.x, position.y - centerOfSet.y };

	DrawTexture(texture, finalPosition);
}

void DrawCrewMate(const utils::Texture& texture, const Point2f& position, const Rectf& sourceRect)
{
	const Point2f centerOfSet{ texture.width / 2, texture.height / 2 };
	const Point2f finalPosition{ position.x - centerOfSet.x, position.y - centerOfSet.y };

	DrawTexture(texture,finalPosition, sourceRect);
}

void DrawCrewMate(const utils::Texture& texture, const Rectf& destRect, const Rectf& sourceRect)
{
	// offset sclaed destination back to original point
	const Rectf targetDestRect{
		destRect.left - destRect.width / 2,
		destRect.top - destRect.height / 2,
		destRect.width,
		destRect.height
	};

	DrawTexture(texture, targetDestRect, sourceRect);
}

void DrawTextCentered(const utils::Texture& texture, const Point2f& position)
{
	const Point2f offsetCenter{
		texture.width / 2,
		texture.height / 2
	};
	const Point2f finalPosition{
		position.x - offsetCenter.x,
		position.y - offsetCenter.y
	};
	DrawTexture(texture,position);
}

#pragma endregion