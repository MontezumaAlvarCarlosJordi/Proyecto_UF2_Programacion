#include "start.h"
#include "HUD.h"

void InitWorld() {

	InitPlayer();

	InitEnemy();

	InitMap();

	InitAssets();

	//Queremos colisi�n, as� que indicamos al sistema que funci�n nuestra tendr� que llamar cada vez que detecte una
	//colisi�n entre sprites:
	//En este caso, he creado una funci�n a la que he llamado "miColision" (m�s abajo), que tiene que recibir por
	//par�metro dos strings y no devolver nada.
	Sprite::SetCollisionCallback(miColision);
}

