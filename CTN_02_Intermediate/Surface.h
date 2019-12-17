#pragma once

#include "Colors.h"
#include <string>
#include <memory>
#include "Rect.h"

class Surface
{
public:
	Surface(const std::string& filename);
	Surface(int width, int height);
	Surface(const Surface&);
	Surface(Surface&&) = default;
	Surface() = default;
	Surface& operator=(const Surface&);
	Surface& operator=(Surface&&) = default;
	void PutPixel(int x, int y, Color c);
	Color GetPixel(int x, int y) const;
	int GetWidth() const;
	int GetHeight() const;
	RectI GetRect() const;
private:
	std::unique_ptr<Color[]> pPixels;
	int width = 0;
	int height = 0;
};
