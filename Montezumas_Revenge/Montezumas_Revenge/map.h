#pragma once
#include "FAriasSimpleGraphics.h"

using namespace FASG;


const int W = 200, H = 51; //Tama�o de la ventana de consola (le hemos puesto 51, aunque sean 50, para que aparezca correctamente la terminal

enum ERooms { //creamos un enum para saber en que habitacion esta
	ROOM1, ROOM2, ROOM3
};

//funciones del mapa
void DrawMap();
void FirstRoom();
void SecondRoom();
void ThirdRoom();