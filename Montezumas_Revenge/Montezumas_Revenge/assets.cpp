#include "assets.h"


//con el struct de Assets creamos una valiable para acceder al struct
Assets assetsmapa1;
Assets assetsmapa3;
extern char inventory[5];
//declaramos los sprites que el jugador no almacena en su inventario
Sprite escalerasMapa[3] = { Sprite("escaleras.txt"), Sprite("escaleras.txt"), Sprite("escalera2.txt") };
Sprite puertas[5] = { Sprite("puerta.txt"),  Sprite("portal.txt"), Sprite("puertaAzul.txt"), Sprite("puertaRoja.txt"), Sprite("portal.txt")};
extern bool puertaAbierta[3];
extern bool llaveConseguida[3];

void InitAssetsMapa1() { //inicializamos los assets
	
	//cargamos todos los sprites para las interacciones con el jugador
	if(llaveConseguida[0] == false){
		assetsmapa1.llaves[0].LoadSprite("key.txt");
	}
	
	if (llaveConseguida[1] == false) {
		assetsmapa1.llaves[1].LoadSprite("blueKey.txt");
	}

	
	escalerasMapa[0].LoadSprite("escaleras.txt");
	escalerasMapa[1].LoadSprite("escaleras.txt");
	escalerasMapa[2].LoadSprite("escalera2.txt");
	
	
	puertas[1].LoadSprite("portal.txt");
	puertas[2].LoadSprite("puertaAzul.txt");
	puertas[3].LoadSprite("puertaRoja.txt");
	puertas[4].LoadSprite("portal.txt");

	//posicion inicial de cada sprite al empezar el juego 
	if (llaveConseguida[0] == false) {
		assetsmapa1.llaves[0].Location.x = 25.f;
		assetsmapa1.llaves[0].Location.y = 25.f;
	}

	if (llaveConseguida[1] == false) {
		assetsmapa1.llaves[1].Location.x = 185.f;
		assetsmapa1.llaves[1].Location.y = 11.f;
	}

	escalerasMapa[0].Location.x = 19.f;
	escalerasMapa[0].Location.y = 35.f;
	escalerasMapa[1].Location.x = 167.f;
	escalerasMapa[1].Location.y = 35.f;
	escalerasMapa[2].Location.x = 93.f;
	escalerasMapa[2].Location.y = 21.f;

	puertas[0].Location.x = 173.f;
	puertas[0].Location.y = 8.f;

	puertas[2].Location.x = 158.f;
	puertas[2].Location.y = 36.f;

	puertas[3].Location.x = 22.f;
	puertas[3].Location.y = 8.f;

	puertas[4].Location.x = 200.f;
	puertas[4].Location.y = 12.f;

	// y añadimos todos los sprites al sistema de colisiones
	Sprite::AddToCollisionSystem(assetsmapa1.llaves[0], "key");
	Sprite::AddToCollisionSystem(assetsmapa1.llaves[1], "blueKey");
	
	Sprite::AddToCollisionSystem(escalerasMapa[0], "escalera");
	Sprite::AddToCollisionSystem(escalerasMapa[1], "escalera2");
	Sprite::AddToCollisionSystem(escalerasMapa[2], "escalera3");
	Sprite::AddToCollisionSystem(puertas[0], "puerta");
	Sprite::AddToCollisionSystem(puertas[2], "puertaAzul");
	Sprite::AddToCollisionSystem(puertas[3], "puertaRoja");
	Sprite::AddToCollisionSystem(puertas[4], "portalDe1a3");
}
void InitAssetsMapa3() { //inicializamos los assets

	//cargamos todos los sprites para las interacciones con el jugador
	if (llaveConseguida[2] == false) {
		assetsmapa3.llaves[2].LoadSprite("redKey.txt");
	}

	escalerasMapa[0].LoadSprite("escaleras.txt");
	escalerasMapa[1].LoadSprite("escaleras.txt");
	puertas[0].LoadSprite("puerta.txt");

	//posicion inicial de cada sprite al empezar el juego 
	if (llaveConseguida[2] == false) {
		assetsmapa3.llaves[2].Location.x = 125.f;
		assetsmapa3.llaves[2].Location.y = 40.f;
	}

	escalerasMapa[0].Location.x = 110.f;
	escalerasMapa[0].Location.y = 21.f;
	escalerasMapa[1].Location.x = 75;
	escalerasMapa[1].Location.y = 35.f;

	puertas[1].Location.x = 2.f;
	puertas[1].Location.y = 12.f;

	// y añadimos todos los sprites al sistema de colisiones
	Sprite::AddToCollisionSystem(assetsmapa3.llaves[2], "redKey");

	Sprite::AddToCollisionSystem(puertas[1], "portalDe3a1");

	Sprite::AddToCollisionSystem(escalerasMapa[0], "escalera");
	Sprite::AddToCollisionSystem(escalerasMapa[1], "escalera2");
}

void CleanAssets()
{
	if (llaveConseguida[0] == false) {
		assetsmapa1.llaves[0].Location.x = 300.f;
		assetsmapa1.llaves[0].Location.y = 300.f;
	}
	if (llaveConseguida[1] == false) {
		assetsmapa1.llaves[1].Location.x = 300.f;
		assetsmapa1.llaves[1].Location.y = 300.f;
	}
	if (llaveConseguida[2] == false) {
		assetsmapa1.llaves[2].Location.x = 300.f;
		assetsmapa1.llaves[2].Location.y = 300.f;
	}

	escalerasMapa[0].Location.x = 300.f;
	escalerasMapa[0].Location.y = 300.f;
	escalerasMapa[1].Location.x = 300.f;
	escalerasMapa[1].Location.y = 300.f;
	escalerasMapa[2].Location.x = 300.f;
	escalerasMapa[2].Location.y = 300.f;

	puertas[0].Location.x = 300.f;
	puertas[0].Location.y = 300.f;

	puertas[1].Location.x = 300.f;
	puertas[1].Location.y = 300.f;

	puertas[2].Location.x = 300.f;
	puertas[2].Location.y = 300.f;

	puertas[3].Location.x = 300.f;
	puertas[3].Location.y = 300.f;

	puertas[4].Location.x = 300.f;
	puertas[4].Location.y = 300.f;

	if (llaveConseguida[2] == false) {
		assetsmapa3.llaves[2].Location.x = 300.f;
		assetsmapa3.llaves[2].Location.y = 300.f;
	}
}

void DrawAssets() { //dibuja todos los sprites

	for (int i = 0; i < 3; i++) {
		FASG::WriteSpriteBuffer(assetsmapa1.llaves[i].Location.x, assetsmapa1.llaves[i].Location.y, assetsmapa1.llaves[i]);
	}
	
	for (int i = 0; i < 3; i++) {
		FASG::WriteSpriteBuffer(escalerasMapa[i].Location.x, escalerasMapa[i].Location.y, escalerasMapa[i]);
	}

	for (int i = 0; i < 4; i++) { 
		if (puertaAbierta[0] == false)
			FASG::WriteSpriteBuffer(puertas[0].Location.x, puertas[0].Location.y, puertas[0]);

		if (puertaAbierta[1] == false)
			FASG::WriteSpriteBuffer(puertas[2].Location.x, puertas[2].Location.y, puertas[2]);

		if (puertaAbierta[2] == false)
			FASG::WriteSpriteBuffer(puertas[3].Location.x, puertas[3].Location.y, puertas[3]);
	}

	FASG::WriteSpriteBuffer(assetsmapa3.llaves[2].Location.x, assetsmapa3.llaves[2].Location.y, assetsmapa3.llaves[2]);
}