#pragma once
#include "FAriasSimpleGraphics.h"

using namespace FASG;

struct Assets {

	Sprite sprite[6] = { Sprite("key.txt"), Sprite("blueKey.txt") , Sprite("redKey.txt") };
	char inventory[5];

};

void DrawAssets();