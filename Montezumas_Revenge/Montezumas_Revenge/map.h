#pragma once
#include "FAriasSimpleGraphics.h"

using namespace FASG;


const int W = 200, H = 51; //Tamaño de la ventana de consola (le hemos puesto 51, aunque sean 50, para que aparezca correctamente la terminal


//funciones del mapa
void DrawMap();


void FirstRoom();

void SecondRoom();

enum ERooms {
	ROOM1, ROOM2, ROOM3, ROOM4, ROOM5
};

