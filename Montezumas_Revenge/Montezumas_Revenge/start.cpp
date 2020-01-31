#include "start.h"
#include "HUD_colisiones.h"

void InitWorld() {

	InitPlayer();

	InitEnemy();

	InitAssetsMapa1();

	//Queremos colisión, así que indicamos al sistema que función nuestra tendrá que llamar cada vez que detecte una
	//colisión entre sprites:
	//En este caso, he creado una función a la que he llamado "miColision" (más abajo), que tiene que recibir por
	//parámetro dos strings y no devolver nada.
	Sprite::SetCollisionCallback(miColision);
}

