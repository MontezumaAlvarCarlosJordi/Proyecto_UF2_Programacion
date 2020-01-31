#include <iostream>
#include "player.h"
#include "enemy.h"
#include "map.h"
#include "assets.h"
#include "menu.h"
#include "HUD_colisiones.h"
#include "start.h"
#include "FAriasSimpleGraphics.h"
#include <conio.h>


HANDLE hndl;


//todos los booleanos para los diferentes bucles
bool gameOver = false;
bool gameStart = false;
bool gameFinish = false;
bool mapa1 = true;

int main()
{
	
	FASG::InitConsole(W, H);
	FASG::ShowConsoleCursor(false);

	InitWorld();

	while (!gameStart) //entramos en el bucle de la pantalla del inicio
	{
		DrawTitulo();
		Start();
		FASG::RenderFrame();
	}

	while (!gameOver) //entramos en el bucle del juego
	{

		InputPlayer(gameOver);
		if (mapa1 == true)
		{
			FirstRoom();
		}
		else
		{
			SecondRoom();
		}
		DrawMap();
		DrawAssets();
		MoveEnemy();
		DrawPlayer();
		DrawEnemy();
		FASG::RenderFrame();
	}

	while (!gameFinish) //entramos en el bucle de la pantalla del final
	{
		DrawTitulo();
		Final();
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