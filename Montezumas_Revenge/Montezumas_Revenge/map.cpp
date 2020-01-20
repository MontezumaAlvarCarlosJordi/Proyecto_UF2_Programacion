#include "map.h"

char map1[200][50];

void DrawMap() {
	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j < H; j++)
			if (map1[i][j] == 'X')
				FASG::WritePixelBuffer(i, j, FASG::EBackColor::LightGreen);
	}
	

}

void InitMap()
{
	

	for (int i = 0; i < 200; i++)
	{
		map1[i][30] = 'X';
	}
}