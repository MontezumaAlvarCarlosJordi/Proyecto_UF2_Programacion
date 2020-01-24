#pragma once
#include "FAriasSimpleGraphics.h"

//Espacio de nombres por defecto
using namespace FASG;

//Variables del jugador
struct Assets {

	Sprite sprite[6] = { Sprite("key.txt") };

};

void DrawAssets();