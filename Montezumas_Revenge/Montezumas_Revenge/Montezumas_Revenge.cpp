#include <iostream>
#include "player.h"
#include "enemy.h"
#include "map.h"
#include "start.h"
#include "FAriasSimpleGraphics.h"
#include <conio.h>


HANDLE hndl;



int main()
{
	bool gameOver = false;
	FASG::InitConsole(W, H);
	FASG::ShowConsoleCursor(false);

	InitWorld();

	
	while (!gameOver)
	{
		InputPlayer(gameOver);
		DrawMap();
		DrawPlayer();
		MoveEnemy();
		DrawEnemy();

		FASG::RenderFrame();
	}
	while (_kbhit>0)
		_getch();

	FASG::DestroyConsole();
}