#pragma once
#include "FAriasSimpleGraphics.h"

//Espacio de nombres por defecto
using namespace FASG;

//Variables del jugador
struct Player {

	Sprite sprite[6] = { Sprite("PlayerIdle.txt") };
	float speed;
	float speedY = 0.f;

};

//Estados del jugador
enum EPlayer
{
	IDLE, IZQ, DER, ABAJO, ARRIBA, SALTO
};

//Aceleración de la gravedad
const float ACCEL_JUMP = 70.f;

const float JUMP_Y_IMPULSE = -20.f;

const float ALTURA_MAX = 15.f;

void InputPlayer(bool& gameOver);
void DrawPlayer();
