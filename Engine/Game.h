/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "SpriteCodex.h"
#include "Board.h"
#include "Block.h"
#include "FrameTimer.h"
#include <random>
#include "Sound.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	Board brd;
	Block blck;
	FrameTimer ft;
	std::random_device rd;
	std::mt19937 rng;
	std::uniform_int_distribution<int>blocksel;
	int gamestate = 0;
	int tens = 0;
	Sound gameoversound;
	Sound linecomplete;
	Sound blocksound;
	enum GameState {
		splashscreen,
		playing,
		gameover
	};
	void DrawSingles(int x, int y, Graphics& gfx);
	void DrawTens(int x, int y, Graphics& gfx)const;
	void DrawHunds(int x, int y, Graphics& gfx)const;
	void DrawScore(Graphics& gfx);
	/********************************/
	/*  User Variables              */
	/********************************/
};