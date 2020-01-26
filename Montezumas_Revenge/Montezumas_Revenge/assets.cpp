#include "assets.h"
#include "start.h"
#include "map.h"

Assets assets;
Sprite escaleras[3] = { Sprite("escaleras.txt"), Sprite("escaleras.txt"), Sprite("escalera2.txt") };
Sprite puertas[4] = { Sprite("puerta.txt"),  Sprite("portal.txt"), Sprite("puertaAzul.txt"), Sprite("puertaRoja.txt") };

void InitAssets() {

	for (int i = 0; i < 5; i++) {
		assets.inventory[i] = 'V';
	}

	assets.sprite[0].LoadSprite("key.txt");
	assets.sprite[1].LoadSprite("blueKey.txt");
	assets.sprite[2].LoadSprite("redKey.txt");
	
	for (int i = 0; i < 2; i++) {
		escaleras[i].LoadSprite("escaleras.txt");
	}

	escaleras[2].LoadSprite("escalera2.txt");
	
	puertas[0].LoadSprite("puerta.txt");
	puertas[1].LoadSprite("portal.txt");
	puertas[2].LoadSprite("puertaAzul.txt");
	puertas[3].LoadSprite("puertaRoja.txt");

	//Posicion inicial al empezar el juego
	assets.sprite[0].Location.x = 25.f;
	assets.sprite[0].Location.y = 25.f;
	assets.sprite[1].Location.x = 185.f;
	assets.sprite[1].Location.y = 11.f;
	assets.sprite[2].Location.x = 170.f;
	assets.sprite[2].Location.y = 25.f;
	
	escaleras[0].Location.x = 16.f;
	escaleras[0].Location.y = 35.f;
	escaleras[1].Location.x = 164.f;
	escaleras[1].Location.y = 35.f;
	escaleras[2].Location.x = 91.f;
	escaleras[2].Location.y = 21.f;

	puertas[0].Location.x = 173.f;
	puertas[0].Location.y = 8.f;

	puertas[1].Location.x = 2.f;
	puertas[1].Location.y = 12.f;

	puertas[2].Location.x = 158.f;
	puertas[2].Location.y = 36.f;

	puertas[3].Location.x = 22.f;
	puertas[3].Location.y = 8.f;

	Sprite::AddToCollisionSystem(assets.sprite[0], "key");
	Sprite::AddToCollisionSystem(assets.sprite[1], "blueKey");
	Sprite::AddToCollisionSystem(assets.sprite[2], "redKey");
	Sprite::AddToCollisionSystem(escaleras[0], "escalera");
	Sprite::AddToCollisionSystem(escaleras[1], "escalera2");
	Sprite::AddToCollisionSystem(escaleras[2], "escalera3");
	Sprite::AddToCollisionSystem(puertas[0], "puerta");
	Sprite::AddToCollisionSystem(puertas[1], "portal");
	Sprite::AddToCollisionSystem(puertas[2], "puertaAzul");
	Sprite::AddToCollisionSystem(puertas[3], "puertaRoja");

}

void DrawAssets() {
	
	for (int i = 0; i < 3; i++) {
		FASG::WriteSpriteBuffer(assets.sprite[i].Location.x, assets.sprite[i].Location.y, assets.sprite[i]);
	}
	
	for (int i = 0; i < 3; i++) {
		FASG::WriteSpriteBuffer(escaleras[i].Location.x, escaleras[i].Location.y, escaleras[i]);
	}

	for (int i = 0; i < 4; i++) { 
		FASG::WriteSpriteBuffer(puertas[i].Location.x, puertas[i].Location.y, puertas[i]); 
	}
	
}