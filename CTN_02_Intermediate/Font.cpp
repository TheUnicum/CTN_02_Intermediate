#include "Font.h"
#include <cassert>

Font::Font(const std::string& filename, Color chroma)
	:
	surface(filename),
	// calculate gliph dimension form bitmap dimension
	glyphWidth(surface.GetWidth() / nColumns),
	glyphHeight(surface.GetHeight() / nRows),
	chroma(chroma)
{
	// verify that bitmap had valid dimensions
	assert(glyphWidth * nColumns == surface.GetWidth());
	assert(glyphHeight * nRows == surface.GetHeight());
}

void Font::DrawText(const std::string& text, const Vei2& pos, Color color, Graphics& gfx) const
{
	// curPos is the pos that we are drawing to on the screen
	auto curPos = pos;
	for (auto c : text)
	{
		// on a newline character, reset x position and move down by 1 glyph height
		if (c == '\n')
		{
			// carriage return
			curPos.x = pos.x;
			// line feed
			curPos.y += glyphHeight;
			// we don't want to advance the character position right for a new line
			continue;
		}
		// only draw characters that are on the font sheet
		// firstChar + 1 bacause might as well skip ' ' as well
		if (c >= firstChar + 1 && c <= lastChar)
		{
			// use DrawSpriteSubstitute so that we can choose the color ot the font rendered
			gfx.DrawSpriteSubstitute(curPos.x, curPos.y, color, MapGlyphRect(c), surface, chroma);
		}
		// advance screen pos for next character
		curPos.x += glyphWidth;
	}
}

RectI Font::MapGlyphRect(char c) const
{
	assert(c >= firstChar && c <= lastChar);
	// font sheet glyphs start at ' ', calculate index sheet
	const int glyphIndex = c - ' ';
	// map 1d glyphIndex to 2D coordinates
	const int yGlyph = glyphIndex / nColumns;
	const int xGlyph = glyphIndex % nColumns;
	// convert the sheet grid coords to pixel coords in sheet
	return RectI(
		{xGlyph * glyphWidth, yGlyph * glyphHeight},
		glyphWidth, glyphHeight
	);
}
