#pragma once
#include "FAriasSimpleGraphics.h"

//Espacio de nombres por defecto
using namespace FASG;

//Variables del jugador
struct Player {

	Sprite sprite[6] = { Sprite("PlayerIdle.txt"), Sprite("PlayerIdle2.txt"), Sprite("sombrero.txt") };
	float speed;
	float speedY = 0.f;
	int lifes = 5;
};

//Estados del jugador
enum EPlayer
{
	IDLE, IZQ, DER, ABAJO, ARRIBA, SALTO
};

//Aceleración de la gravedad
const float ACCEL_JUMP = 80.f;

const float JUMP_Y_IMPULSE = -30.f;

const float ALTURA_MAX = 15.f;

void InputPlayer(bool& gameOver);
void DrawPlayer();
