#pragma once
#include "FAriasSimpleGraphics.h"

using namespace FASG;


struct Player { //variables del jugador con un struct

	Sprite sprite[6] = { Sprite("PlayerIdle.txt"), Sprite("PlayerIdle2.txt"), Sprite("sombrero.txt") };
	float speed;
	float speedY = 0.f;
	int lifes = 5;

};

//estados del jugador
enum EPlayer
{
	IDLE, IZQ, DER, ABAJO, ARRIBA, SALTO
};

//aceleración de la gravedad
const float ACCEL_JUMP = 80.f;

const float JUMP_Y_IMPULSE = -30.f;

const float ALTURA_MAX = 15.f;

//funciones del player
void InputPlayer(bool& gameOver);
void DrawPlayer();
