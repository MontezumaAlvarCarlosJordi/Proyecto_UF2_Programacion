#include "start.h"



void InitRoom1() {

	InitEnemy1();

	InitAssetsMapa1();

	FirstRoom();

	//Queremos colisi�n, as� que indicamos al sistema que funci�n nuestra tendr� que llamar cada vez que detecte una
	//colisi�n entre sprites:
	//En este caso, he creado una funci�n a la que he llamado "miColision" (m�s abajo), que tiene que recibir por
	//par�metro dos strings y no devolver nada.
	Sprite::SetCollisionCallback(miColision);
}

void InitRoom3() {

	InitEnemy2();

	InitAssetsMapa3();

	ThirdRoom();
	Sprite::SetCollisionCallback(miColision);
}
