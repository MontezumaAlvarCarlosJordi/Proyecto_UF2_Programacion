#include "enemy.h"
#include "map.h"
#include "start.h"


extern char map1[200][51];

Enemy enemy1;

EEnemy statusEnemy1;

bool goRight = true;



void InitEnemy()
{
	//Velocidad del jugador
	enemy1.speed = 45.f;

	//Se asocia que Sprite va a ser el jugador
	enemy1.sprite.LoadSprite("Enemy.txt");

	//Posicion inicial al empezar el juego
	enemy1.sprite.Location.x = INITIAL_POS_ENEMY;
	enemy1.sprite.Location.y = 45.f;

	//Le indico al sistema que el sprite del player entra dentro del sistema de detecci�n de colisiones, y
	//que lo identifique con el tag "Player" (como si le digo "Maria").
	Sprite::AddToCollisionSystem(enemy1.sprite, "Enemy");

}



void MoveEnemy() {
	
	if(enemy1.sprite.Location.x <= INITIAL_POS_ENEMY){
		
		statusEnemy1 = EEnemy::MOVING_RIGHT;
	
	}
	
	if (enemy1.sprite.Location.x >= INITIAL_POS_ENEMY + MAX_DISTANCE)
	{
		statusEnemy1 = EEnemy::MOVING_LEFT;
	}
	
	switch (statusEnemy1) {
	case MOVING_LEFT:
		enemy1.sprite.Location.x -= enemy1.speed * FASG::GetDeltaTime();
		break;

	case MOVING_RIGHT:
		enemy1.sprite.Location.x += enemy1.speed * FASG::GetDeltaTime();
		break;
	}
	

}

void DrawEnemy() {

	FASG::WriteSpriteBuffer(enemy1.sprite.Location.x, enemy1.sprite.Location.y, enemy1.sprite);

}