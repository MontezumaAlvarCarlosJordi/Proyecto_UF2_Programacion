#include "map.h"

char map[W][H];


void FirstRoom(){ 

	for (int i = 0; i < W; i++) 
		for (int j = 0; j < H; j++) 
			map[i][j] = ' ';
		
	

	for (int i = 0; i < 200; i++)
	{
		map[i][7] = 'X';
	}

	for (int i = 0; i < 200; i++)
	{
		map[i][49] = 'X';
	}

	for (int i = 0; i < 68; i++)
	{
		map[i][21] = 'X';
	}

	for (int i = 83; i < 83 + 35; i++)
	{
		map[i][21] = 'X';
	}

	for (int i = 132; i < 132 + 68; i++)
	{
		map[i][21] = 'X';
	}

	for (int i = 16; i < 26 + 16; i++)
	{
		map[i][35] = 'X';
	}

	for (int i = 200 - 42; i < 200 - 15; i++)
	{
		map[i][35] = 'X';
	}


	for (int i = 22; i < (5 + 22); i++)
	{
		for (int j = 8; j < (13 + 8); j++)
		{
			map[i][j] = 'R';
		}
	}

	for (int i = W - 23; i > (W - 28); i--)
	{
		for (int j = 8; j < (13 + 8); j++)
		{
			map[i][j] = 'P';
		}
	}

	for (int i = 0; i < (16); i++)
	{
		for (int j = 22; j < (27 + 22); j++)
		{
			map[i][j] = 'X';
		}
	}

	for (int i = W; i > (W - 16); i--)
	{
		for (int j = 22; j < (27 + 22); j++)
		{
			map[i][j] = 'X';
		}
	}



	for (int i = 0; i < 7; i++) {
		map[76 + i][21] = 'B';
		map[125 + i][21] = 'B';
		map[88 + i][35] = 'B';
		map[151 + i][35] = 'B';
	}

	for (int i = 0; i < 21; i++) {
		map[91 + i][21] = 'S';
		map[16 + i][35] = 'S';
		map[164 + i][35] = 'S';
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 13; j++) {
			map[158 + i][36 + j] = 'A';
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 13; j++) {
			map[158 + i][22 + j] = 'X';
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 13; j++) {
			map[39 + i][22 + j] = 'X';
		}
	}
}

void SecondRoom()
{
	for (int i = 0; i < W; i++)
		for (int j = 0; j < H; j++)
			map[i][j] = ' ';



	for (int i = 0; i < 200; i++)
	{
		map[i][7] = 'X';
	}
}

void ThirdRoom()
{
	for (int i = 0; i < W; i++)
		for (int j = 0; j < H; j++)
			map[i][j] = ' ';

	for (int i = 0; i < 200; i++)
		map[i][7] = 'X';

	for (int i = 0; i < 130; i++)
			map[i][21] = 'X';

	for (int i = 70; i < 200; i++)
			map[i][35] = 'X';

	for (int i = 0; i < 200; i++)
			map[i][49] = 'X';
	
	for (int i = 0; i < 30; i++)
		for (int j = 21; j < 49; j++)
			map[i][j] = 'X';

	for (int i = 170; i < W; i++)
		for (int j = 7; j < 35; j++)
			map[i][j] = 'X';
}



void DrawMap() { //y una funcion para pintar el mapa de color
	
	for (int i = 0; i < W; i++)
	{
		for (int j = 0; j < H; j++)
		{
			if (map[i][j] == 'X')
				FASG::WritePixelBuffer(i, j, FASG::EBackColor::LightGreen);
			else if (map[i][j] == 'S')
				FASG::WritePixelBuffer(i, j, FASG::EBackColor::LightGreen);
			else
				map[i][j] = ' ';
		}
	}
}