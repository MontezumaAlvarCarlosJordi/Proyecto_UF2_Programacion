#include <iostream>
#include "player.h"
#include "enemy.h"
#include "map.h"
#include "assets.h"
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
		DrawAssets();
		MoveEnemy();
		DrawPlayer();
		DrawEnemy();

		FASG::RenderFrame();
	}

	//Elimina las entradas del player en el buffer del teclado
	//(todos los 'A' y 'D' del movimiento...
	while (_kbhit())
		_getch();

	//Espera cualquier tecla
	while (!_kbhit());

	FASG::DestroyConsole();
}