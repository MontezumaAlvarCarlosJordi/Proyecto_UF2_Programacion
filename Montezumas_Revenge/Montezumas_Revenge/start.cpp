#include "start.h"



void InitRoom1() {

	InitEnemy1();

	InitAssetsMapa1();

	FirstRoom();

	//Queremos colisión, así que indicamos al sistema que función nuestra tendrá que llamar cada vez que detecte una
	//colisión entre sprites:
	//En este caso, he creado una función a la que he llamado "miColision" (más abajo), que tiene que recibir por
	//parámetro dos strings y no devolver nada.
	Sprite::SetCollisionCallback(miColision);
}

void InitRoom2() {

	InitEnemy2();

	InitAssetsMapa2();

	SecondRoom();
	Sprite::SetCollisionCallback(miColision);
}

void InitRoom3() {

	InitEnemy3();

	InitAssetsMapa3();

	ThirdRoom();
	Sprite::SetCollisionCallback(miColision);
}
