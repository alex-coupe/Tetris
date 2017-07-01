#pragma once
#include "Graphics.h"
#include "Location.h"
#include "SpriteCodex.h"
class Board
{
private:

	static constexpr int cellWidth = 10;
	static constexpr int cellHeight = 10;
	static constexpr int cellDimension = cellWidth+cellHeight;
	Graphics& gfx;
public:
	void DrawCell(Location& loc)const; 
	void DrawCube(Location& loc)const;
	void DrawLineH(Location& loc)const;
	void DrawLineV(Location& loc)const;
	void DrawTD(Location& loc)const;
	void DrawTL(Location& loc)const;
	void DrawTU(Location& loc)const;
	void DrawTR(Location& loc)const;
	void DrawZH(Location& loc)const;
	void DrawZV(Location& loc)const;
	void Draw2H(Location& loc)const;
	void Draw2V(Location& loc)const;
	void DrawLLL(Location& loc)const;
	void DrawLLU(Location& loc)const;
	void DrawLLD(Location& loc)const;
	void DrawLLR(Location& loc)const;
	void DrawRLR(Location& loc)const;
	void DrawRLD(Location& loc)const;
	void DrawRLL(Location& loc)const;
	void DrawRLU(Location& loc)const;
	void DrawWall();
	Board(Graphics &gfx);
};

