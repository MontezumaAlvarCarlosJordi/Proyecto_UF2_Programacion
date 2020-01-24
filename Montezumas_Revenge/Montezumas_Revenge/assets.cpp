#include "assets.h"
#include "start.h"
#include "map.h"

Assets assets;

void InitAssets() {

	assets.sprite[0].LoadSprite("key.txt");

	//Posicion inicial al empezar el juego
	assets.sprite[0].Location.x = 60.f;
	assets.sprite[0].Location.y = 45.f;

	Sprite::AddToCollisionSystem(assets.sprite[0], "key");

}

void DrawAssets() {

	FASG::WriteSpriteBuffer(assets.sprite[0].Location.x, assets.sprite[0].Location.y, assets.sprite[0]);


}