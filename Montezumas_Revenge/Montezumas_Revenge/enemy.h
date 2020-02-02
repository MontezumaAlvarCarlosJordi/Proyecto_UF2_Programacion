#pragma once
#include "FAriasSimpleGraphics.h"
#include "map.h"

using namespace FASG;
const int MAX_DISTANCE = 80;
const float INITIAL_POS_ENEMY = 55.f;


struct Enemy { //variables del enemigo

	Sprite sprite;
	float speed;

};


enum EEnemy //estados del enemigo
{
	MOVING_RIGHT, MOVING_LEFT
};

//funciones del enemigo
void MoveEnemy();
void DrawEnemy();
void CleanEnemies();
void InitEnemy1();
void InitEnemy2();