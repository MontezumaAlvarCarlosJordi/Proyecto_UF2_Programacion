#pragma once
#include "FAriasSimpleGraphics.h"
#include "start.h"
#include "map.h"

using namespace FASG;

struct Assets { // creamos un struct para el inventario y los sprites de los objetos del juego (en este caso solo son llaves)

	Sprite llaves[6] = { Sprite("key.txt"), Sprite("blueKey.txt") , Sprite("redKey.txt") };
	

};

void DrawAssets();
void CleanAssets();
void InitAssetsMapa1();
void InitAssetsMapa3();