#include "enemy.h"

extern char map[200][51];

Enemy enemy1; //con el struct de Enemy creamos una valiable para acceder a las diferentes variables del enemigo
Enemy enemy2;

EEnemy statusEnemy1;


extern ERooms room;

void InitEnemy1()
{
		//velocidad del jugador
		enemy1.speed = 45.f;

		//se asocia que sprite va a ser el enemigo
		enemy1.sprite.LoadSprite("Enemy.txt");

		//posicion inicial al empezar el juego
		enemy1.sprite.Location.x = INITIAL_POS_ENEMY;
		enemy1.sprite.Location.y = 45.f;

		// y añadimos el sprite al sistema de colisiones
		Sprite::AddToCollisionSystem(enemy1.sprite, "Enemy1");
}

void InitEnemy2()
{
	//se asocia que sprite va a ser el enemigo
	enemy2.sprite.LoadSprite("snake.txt");

	//posicion inicial al empezar el juego
	enemy2.sprite.Location.x = 34.f;
	enemy2.sprite.Location.y = 100.f;

	// y añadimos el sprite al sistema de colisiones
	Sprite::AddToCollisionSystem(enemy2.sprite, "Enemy2");
}

void CleanEnemies()
{
	enemy1.sprite.Location.x = 300.f;
	enemy1.sprite.Location.y = 300.f;

	enemy2.sprite.Location.x = 300.f;
	enemy2.sprite.Location.y = 300.f;
}


void MoveEnemy() { //creamos la funcion para crear el movimiento del enemigo
	
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

void DrawEnemy() { //y la funcion para dibujarlo

	FASG::WriteSpriteBuffer(enemy1.sprite.Location.x, enemy1.sprite.Location.y, enemy1.sprite);
	FASG::WriteSpriteBuffer(enemy2.sprite.Location.x, enemy2.sprite.Location.y, enemy2.sprite);
}