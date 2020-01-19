#pragma once
#include "FAriasSimpleGraphics.h"

//Espacio de nombres por defecto
using namespace FASG;

//Variables del jugador
struct Player {

	Sprite sprite[6] = { Sprite("PlayerIdle.txt") };
	float speed;

};

//Estados del jugador
enum EPlayer
{
	IDLE, IZQ, DER, ABAJO, ARRIBA, SALTO
};

void InputPlayer(bool &gameOver);
void DrawPlayer();
