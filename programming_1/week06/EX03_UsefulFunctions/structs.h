#pragma once
#include <string>

struct Window
{
	std::string title;
	float width;
	float height;
	bool isVSyncOn;
};

struct Point2f
{
	float x;
	float y;
};



struct Rectf
{
	float left;
	float top;
	float width;
	float height;

};


struct Color4f
{ 
	float r;
	float g;
	float b;
	float a;
};

struct Circlef
{
	Point2f center;
	float radius;
};


struct Ellipsef
{
	Point2f center;
	float radiusX;
	float radiusY;
};



