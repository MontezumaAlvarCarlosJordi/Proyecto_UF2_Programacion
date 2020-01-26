#include "map.h"

char map1[200][51];

void DrawMap() {
	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j < H; j++)
		{
			if (map1[i][j] == 'X')
				FASG::WritePixelBuffer(i, j, FASG::EBackColor::LightGreen);
			else if (map1[i][j] == 'S')
				FASG::WritePixelBuffer(i, j, FASG::EBackColor::LightGreen);
			else if (map1[i][j] == 'E')
				FASG::WritePixelBuffer(i, j, FASG::EBackColor::LightBlue);
			else
				map1[i][j] == ' ';
		}
	}
	

}

void InitMap()
{
	FirstRoom();

}

void FirstRoom(){

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

	for (int i = 83; i < 83 + 35; i++)
	{
		map1[i][21] = 'X';
	}

	for (int i = 132; i < 132 + 68; i++)
	{
		map1[i][21] = 'X';
	}

	for (int i = 16; i < 26 + 16; i++)
	{
		map1[i][35] = 'X';
	}

	for (int i = 200 - 42; i < 200 - 15; i++)
	{
		map1[i][35] = 'X';
	}


	for (int i = 22; i < (5 + 22); i++)
	{
		for (int j = 8; j < (13 + 8); j++)
		{
			map1[i][j] = 'R';
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

	for (int i = 200; i > (200 - 16); i--)
	{
		for (int j = 22; j < (27 + 22); j++)
		{
			map1[i][j] = 'X';
		}
	}



	for (int i = 0; i < 7; i++) {
		map1[76 + i][21] = 'B';
		map1[125 + i][21] = 'B';
		map1[88 + i][35] = 'B';
		map1[151 + i][35] = 'B';
	}

	for (int i = 0; i < 21; i++) {
		map1[91 + i][21] = 'S';
		map1[16 + i][35] = 'S';
		map1[164 + i][35] = 'S';
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 13; j++) {
			map1[158 + i][36 + j] = 'A';
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 13; j++) {
			map1[197 + i][8 + j] = 'X';
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 13; j++) {
			map1[158 + i][22 + j] = 'X';
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 13; j++) {
			map1[39 + i][22 + j] = 'X';
		}
	}

	Escalera(91, 22);

	Escalera(16, 36);

	Escalera(164, 36);


}

void SecondRoom() {

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

	for (int i = 83; i < 83 + 35; i++)
	{
		map1[i][21] = 'X';
	}

	for (int i = 132; i < 132 + 68; i++)
	{
		map1[i][21] = 'X';
	}

	for (int i = 16; i < 26 + 16; i++)
	{
		map1[i][35] = 'X';
	}

	for (int i = 200 - 42; i < 200 - 15; i++)
	{
		map1[i][35] = 'X';
	}


	for (int i = 22; i < (5 + 22); i++)
	{
		for (int j = 8; j < (13 + 8); j++)
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

	for (int i = 200; i > (200 - 16); i--)
	{
		for (int j = 22; j < (27 + 22); j++)
		{
			map1[i][j] = 'X';
		}
	}



	for (int i = 0; i < 7; i++) {
		map1[76 + i][21] = 'B';
		map1[125 + i][21] = 'B';
		map1[88 + i][35] = 'B';
		map1[151 + i][35] = 'B';
	}

	for (int i = 0; i < 21; i++) {
		map1[91 + i][21] = 'S';
		map1[16 + i][35] = 'S';
		map1[164 + i][35] = 'S';
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