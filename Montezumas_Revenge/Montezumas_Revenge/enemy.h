#pragma once
#include "FAriasSimpleGraphics.h"

//Espacio de nombres por defecto
using namespace FASG;
const int MAX_DISTANCE = 30;

//Variables del enemigo
struct Enemy {

	Sprite sprite;
	float speed;

};

//Estados del enemigo
enum EEnemy
{
	MOVING_RIGHT, MOVING_LEFT
};

void MoveEnemy();
void DrawEnemy();