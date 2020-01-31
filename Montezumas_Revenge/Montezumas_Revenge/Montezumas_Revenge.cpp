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
ERooms room = ROOM1;

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
		switch (room)
		{
		case ROOM1:
			FirstRoom();
			break;

		case ROOM2:
			SecondRoom();
			break;

		case ROOM3:
			//ThirdRoom();
			break;

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