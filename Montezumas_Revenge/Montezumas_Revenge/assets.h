#pragma once
#include "FAriasSimpleGraphics.h"

using namespace FASG;

struct Assets {

	Sprite sprite[6] = { Sprite("key.txt") };
	char inventory[5];

};

void DrawAssets();