// Sayit, Ali - DAE13E

#include "game.h"
#include <iostream>

using namespace utils;

#pragma region gameFunctions

// Load textures and initialize other resources here.
void Start()
{
    SetColor(1, 1, 1);
    left.x = 0;
    left.y = g_WindowHeight;
    top.x = g_WindowWidth / 2;
    top.y = 0;
    right.x = g_WindowWidth;
    right.y = g_WindowHeight;
}

// Draw your game objects here.
void Draw()
{
	ClearBackground(); // Clear the background with a default color
    DrawSierpinskiTriangle(left,top,right);
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
void ExploreMine(int level)
{
    std::cout << "Exploring level " << level << "...." << std::endl;

    if (rand() % 10 == 0 || level >= 10)
    {
        std::cout << "TREASURE FOUND at level " << level << std::endl;
    }
    else
    {
        ExploreMine(level + 1);
    }

    std::cout << "Going back up - now at level " << level << std::endl;
}
void DrawSierpinskiTriangle(const Point2f& left, const Point2f& top, const Point2f& right, const Color4f& color)
{
    float dx{ right.x - left.x };
    float dy{ right.y - left.y };
    float distance{ std::sqrt(dx * dx + dy * dy) };

    if (distance < 20.f)
    {
        utils::SetColor(color);
        utils::DrawTriangle(left, top, right);
        return;
    }

    Point2f leftTop{ (left.x + top.x) / 2.f, (left.y + top.y) / 2.f };
    Point2f topRight{ (top.x + right.x) / 2.f, (top.y + right.y) / 2.f };
    Point2f leftRight{ (left.x + right.x) / 2.f, (left.y + right.y) / 2.f };

    const Color4f red{ 1.f, 0.f, 0.f, 1.f };
    const Color4f green{ 0.f, 1.f, 0.f, 1.f };
    const Color4f blue{ 0.f, 0.f, 1.f, 1.f };

    DrawSierpinskiTriangle(left, leftTop, leftRight, red);
    DrawSierpinskiTriangle(leftTop, top, topRight, green);
    DrawSierpinskiTriangle(leftRight, topRight, right, blue);
}

#pragma endregion