#include "assets.h"
#include "start.h"
#include "map.h"

Assets assets;
Sprite escaleras[3] = { Sprite("escaleras.txt"), Sprite("escaleras.txt"), Sprite("escaleras.txt") };

void InitAssets() {

	assets.sprite[0].LoadSprite("key.txt");
	
	for (int i = 0; i < 3; i++) {
		escaleras[i].LoadSprite("escaleras.txt");
	}
	


	//Posicion inicial al empezar el juego
	assets.sprite[0].Location.x = 25.f;
	assets.sprite[0].Location.y = 25.f;

	escaleras[0].Location.x = 16.f;
	escaleras[0].Location.y = 35.f;

	Sprite::AddToCollisionSystem(assets.sprite[0], "key");
	for (int i = 0; i < 3; i++) {
		Sprite::AddToCollisionSystem(escaleras[i], "escalera");
	}
}

void DrawAssets() {

	FASG::WriteSpriteBuffer(assets.sprite[0].Location.x, assets.sprite[0].Location.y, assets.sprite[0]);
	FASG::WriteSpriteBuffer(escaleras[0].Location.x, escaleras[0].Location.y, escaleras[0]);

}