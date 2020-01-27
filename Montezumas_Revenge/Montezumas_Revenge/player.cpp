#include "player.h"
#include "map.h"
#include "start.h"

//variables del jugador y sus estados
extern char map1[200][51];

Player player1;

EPlayer statusPlayer1;

bool onAir = false;

bool upDown = false;

extern bool puertaAbierta[3];

void InitPlayer() { //se inician los parametros del jugador
	
	//velocidad del jugador
	player1.speed = 50.f;

	//se asocia que Sprite va a ser el jugador
	player1.sprite[0].LoadSprite("PlayerIdle.txt");

	//posicion inicial al empezar el juego
	player1.sprite[0].Location.x = W * 0.5f;
	player1.sprite[0].Location.y = H * 0.5f - 10;

	// y añadimos el sprite al sistema de colisiones
	Sprite::AddToCollisionSystem(player1.sprite[0], "Player");
}

void InputPlayer(bool &gameOver) { //todo a lo que se refiere los Inputs del jugador
	
	float initialJumpPosition = 0.f; //salir del juego
	if (FASG::IsKeyDown('X')) {
		
		gameOver = true;

	}
	
	if(upDown == true){ //subir y bajar escaleras
		player1.speedY = 0;
		
		if (FASG::IsKeyPressed('W'))
		{
			player1.sprite[0].Location.y -= player1.speed * FASG::GetDeltaTime();
		}
		if (FASG::IsKeyPressed('S'))
		{
			if (map1[(int)player1.sprite[0].Location.x][(int)player1.sprite[0].Location.y + 6] == 'X')
				player1.sprite[0].Location.y += 0;

			else
				player1.sprite[0].Location.y += player1.speed * FASG::GetDeltaTime();
		}
	}
	if (FASG::IsKeyPressed('A')) //movimientos de izquierda y derecha
	{
		statusPlayer1 = EPlayer::IZQ;
		if (map1[(int)player1.sprite[0].Location.x - 1][(int)player1.sprite[0].Location.y] == 'X' || (map1[(int)player1.sprite[0].Location.x][(int)player1.sprite[0].Location.y] == 'R' && puertaAbierta[2] == false))
			player1.sprite[0].Location.x -= 0;

		else
			player1.sprite[0].Location.x -= player1.speed * FASG::GetDeltaTime();
	}
	if (FASG::IsKeyPressed('D'))
	{
		statusPlayer1 = EPlayer::DER;
		if (map1[(int)player1.sprite[0].Location.x + 7][(int)player1.sprite[0].Location.y] == 'X' || (map1[(int)player1.sprite[0].Location.x + 7][(int)player1.sprite[0].Location.y] == 'P' && puertaAbierta[0] == false) || (map1[(int)player1.sprite[0].Location.x + 7][(int)player1.sprite[0].Location.y] == 'A' && puertaAbierta[1] == false))
			player1.sprite[0].Location.x += 0;

		else
			player1.sprite[0].Location.x += player1.speed * FASG::GetDeltaTime();
	}

	if (FASG::IsKeyDown(' ') && onAir == false) //salto
	{
		player1.sprite[0].Location.y--;
		player1.speedY = JUMP_Y_IMPULSE;
		onAir = true;
	}

	

}

void DrawPlayer() { //dibujar al player en el mapa

	//condiciones para cuando esta en el aire o no
	if (map1[(int)player1.sprite[0].Location.x][(int)player1.sprite[0].Location.y + 6] == 'X' || map1[(int)player1.sprite[0].Location.x][(int)player1.sprite[0].Location.y + 6] == 'B' || map1[(int)player1.sprite[0].Location.x][(int)player1.sprite[0].Location.y + 6] == 'S')
	{
		player1.speedY = 0;
		onAir = false;
	}

	else 
	{
		player1.speedY += ACCEL_JUMP * FASG::GetDeltaTime(); 
		player1.sprite[0].Location.y += player1.speedY * FASG::GetDeltaTime();
		onAir = true;
		upDown = false;
	}
	switch (statusPlayer1) {
	case ARRIBA:
		FASG::WriteSpriteBuffer(player1.sprite[0].Location.x, player1.sprite[0].Location.y, player1.sprite[0]);
		break;

	case ABAJO:
		FASG::WriteSpriteBuffer(player1.sprite[0].Location.x, player1.sprite[0].Location.y, player1.sprite[0]);
		break;

	case DER:
		FASG::WriteSpriteBuffer(player1.sprite[0].Location.x, player1.sprite[0].Location.y, player1.sprite[0]);
		break;

	case IZQ:
		FASG::WriteSpriteBuffer(player1.sprite[0].Location.x, player1.sprite[0].Location.y, player1.sprite[1]);
		break;

	case IDLE:
		FASG::WriteSpriteBuffer(player1.sprite[0].Location.x, player1.sprite[0].Location.y, player1.sprite[0]);
		break;

	case SALTO:
		FASG::WriteSpriteBuffer(player1.sprite[0].Location.x, player1.sprite[0].Location.y, player1.sprite[0]);
		break;
	}

	for (int i = 0; i < player1.lifes; i++) // imprimir las vidas
	{
		FASG::WriteSpriteBuffer((82 + (i * 23)), 1, player1.sprite[2]);
	}

}