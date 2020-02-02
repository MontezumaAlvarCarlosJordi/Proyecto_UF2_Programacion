#include "map.h"

char map[W][H];

extern bool puertaAbierta[3];

void FirstRoom(){ //funcion para crear la estructura de la primera habitacion

	for (int i = 0; i < W; i++) //primero vaciamos la matriz
		for (int j = 0; j < H; j++) 
			map[i][j] = ' ';
		
	
	// y luego la rellenamos de diferentes formas
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
			if (puertaAbierta[2] == false) //Rojo
				map[i][j] = 'X';

			else
				map[i][j] = ' ';
		}
	}

	for (int i = W - 23; i > (W - 28); i--)
	{
		for (int j = 8; j < (13 + 8); j++)
		{
			if (puertaAbierta[0] == false) //Amarillo
				map[i][j] = 'X';

			else
				map[i][j] = ' ';
		}
	}

	for (int i = 158; i < 158 + 5; i++) {
		for (int j = 36; j < 36 + 13; j++) {
			if (puertaAbierta[1] == false) //Azul
				map[i][j] = 'X';

			else
				map[i][j] = ' ';
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

	for (int i = 0; i < 14; i++) {
		map[94 + i][21] = 'S';
		map[19 + i][35] = 'S';
		map[167 + i][35] = 'S';
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

void SecondRoom()//funcion para crear la estructura de la segunda habitacion
{
	for (int i = 0; i < W; i++) //primero vaciamos la matriz
		for (int j = 0; j < H; j++)
			map[i][j] = ' ';


	// y luego la rellenamos de diferentes formas
	for (int i = 0; i < 200; i++)
		map[i][7] = 'X';

	for (int i = 180; i < 200; i++)
		map[i][21] = 'X';

	for (int i = 140; i < 160; i++)
		map[i][26] = 'X';

	for (int i = 101; i < 121; i++)
		map[i][32] = 'X';

	for (int i = 82; i < 98; i++)
		map[i][26] = 'X';

	for (int i = 68; i < 82; i++)
		map[i][26] = 'S';

	for (int i = 50; i < 82; i++)
		map[i][40] = 'X';

	for (int i = 0; i < 30; i++)
		for (int j = 37; j < H; j++)
			map[i][j] = 'X';

	for (int i = 0; i < 30; i++)
		for (int j = 7; j < 24; j++)
			map[i][j] = 'X';


}

void ThirdRoom() //funcion para crear la estructura de la tercera habitacion
{
	for (int i = 0; i < W; i++) //primero vaciamos la matriz
		for (int j = 0; j < H; j++)
			map[i][j] = ' ';


	// y luego la rellenamos de diferentes formas
	for (int i = 0; i < 200; i++)
		map[i][7] = 'X';

	for (int i = 0; i < 130; i++)
			map[i][21] = 'X';

	for (int i = 70; i < 200; i++)
			map[i][35] = 'X';

	for (int i = 0; i < 200; i++)
			map[i][49] = 'X';

	for (int i = 110; i < 110+14; i++)
		map[i][21] = 'S';

	for (int i = 75; i < 75+14; i++)
		map[i][35] = 'S';
	
	for (int i = 0; i < 30; i++)
		for (int j = 21; j < 49; j++)
			map[i][j] = 'X';

	for (int i = 170; i < W; i++)
		for (int j = 7; j < 49; j++)
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