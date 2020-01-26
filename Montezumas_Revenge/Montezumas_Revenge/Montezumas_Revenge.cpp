#include <iostream>
#include "player.h"
#include "enemy.h"
#include "map.h"
#include "assets.h"
#include "HUD.h"
#include "start.h"
#include "FAriasSimpleGraphics.h"
#include <conio.h>
#include "menu.h"


HANDLE hndl;
bool gameOver = false;
bool gameStart = false;
extern std::string HUDMessage;

int main()
{

	FASG::InitConsole(W, H);
	FASG::ShowConsoleCursor(false);

	while (!gameStart)
	{
		DrawTitulo();
		Start();
		FASG::RenderFrame();
	}

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