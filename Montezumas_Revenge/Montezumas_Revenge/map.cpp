#include "map.h"

char map1[200][51];

void DrawMap() {
	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j < H; j++)
		{
			if (map1[i][j] == 'X')
				FASG::WritePixelBuffer(i, j, FASG::EBackColor::LightGreen);
			else if (map1[i][j] == 'P')
				FASG::WritePixelBuffer(i, j, FASG::EBackColor::LightYellow);
			else if (map1[i][j] == 'E')
				FASG::WritePixelBuffer(i, j, FASG::EBackColor::LightBlue);
			else
				map1[i][j] == ' ';
		}
	}
	

}

void InitMap()
{
	for (int i = 0; i < 200; i++)
	{
		map1[i][7] = 'X';
	}

	for (int i = 0; i < 200; i++)
	{
		map1[i][49] = 'X';
	}

	for (int i = 0; i < 68; i++)
	{
		map1[i][21] = 'X';
	}

	for (int i = 83; i < 83+35; i++)
	{
		map1[i][21] = 'X';
	}

	for (int i = 132; i < 132+68; i++)
	{
		map1[i][21] = 'X';
	}

	for (int i = 16; i < 26+16; i++)
	{
		map1[i][35] = 'X';
	}

	for (int i = 200-42; i < 200-15; i++)
	{
		map1[i][35] = 'X';
	}


	for (int i = 22; i < (5+22); i++)
	{
		for (int j = 8; j < (13+8); j++)
		{
			map1[i][j] = 'P';
		}
	}

	for (int i = 200 - 23; i > (200 - 28); i--)
	{
		for (int j = 8; j < (13 + 8); j++)
		{
			map1[i][j] = 'P';
		}
	}

	for (int i = 0; i < (16); i++)
	{
		for (int j = 22; j < (27 + 22); j++)
		{
			map1[i][j] = 'X';
		}
	}

	for (int i = 200; i > (200-16); i--)
	{
		for (int j = 22; j < (27 + 22); j++)
		{
			map1[i][j] = 'X';
		}
	}

	for (int i = 95; i < 13+95; i++)
	{
			map1[i][35] = 'X';
	}
	
	Escalera(91, 22);

	Escalera(16, 36);

	Escalera(164, 36);

}

void Escalera(int x, int y)
{
	for (int i = x; i < (4+x); i++)
	{
		for (int j = y; j < (y+13); j++)
		{
			map1[i][j] = 'E';
		}
	}

	for (int i = x+17; i < (4 + x + 17); i++)
	{
		for (int j = y; j < (y + 13); j++)
		{
			map1[i][j] = 'E';
		}
	}

	for (int i = x; i < x+17; i++)
		map1[i][y + 1] = 'E';

	for (int i = x; i < x + 17; i++)
		map1[i][y + 4] = 'E';

	for (int i = x; i < x + 17; i++)
		map1[i][y + 7] = 'E';

	for (int i = x; i < x + 17; i++)
		map1[i][y + 10] = 'E';

}