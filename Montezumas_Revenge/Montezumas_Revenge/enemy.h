#pragma once
#include "FAriasSimpleGraphics.h"

//Espacio de nombres por defecto
using namespace FASG;
const int MAX_DISTANCE = 80;
const float INITIAL_POS_ENEMY = 55.f;

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