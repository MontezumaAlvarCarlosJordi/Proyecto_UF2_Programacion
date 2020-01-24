#include "player.h"
#include "map.h"
#include "start.h"

extern char map1[200][51];

Player player1;

EPlayer statusPlayer1;

bool onAir = false;

void InitPlayer() {
	
	//Velocidad del jugador
	player1.speed = 50.f;

	//Se asocia que Sprite va a ser el jugador
	player1.sprite[0].LoadSprite("PlayerIdle.txt");

	//Posicion inicial al empezar el juego
	player1.sprite[0].Location.x = W * 0.5f;
	player1.sprite[0].Location.y = H * 0.5f - 10;

	//Le indico al sistema que el sprite del player entra dentro del sistema de detección de colisiones, y
	//que lo identifique con el tag "Player" (como si le digo "Maria").
	Sprite::AddToCollisionSystem(player1.sprite[0], "Player");
}

void InputPlayer(bool &gameOver) {
	
	float initialJumpPosition = 0.f;
	if (FASG::IsKeyDown('X')) {
		
		gameOver = true;

	}
	
	if (FASG::IsKeyDown('W'))
	{
		
	}
	if (FASG::IsKeyPressed('S'))
	{
		
	}

	if (FASG::IsKeyPressed('A'))
	{
		if (map1[(int)player1.sprite[0].Location.x - 1][(int)player1.sprite[0].Location.y] == 'X')
			player1.sprite[0].Location.x -= 0;

		else
			player1.sprite[0].Location.x -= player1.speed * FASG::GetDeltaTime();
	}
	if (FASG::IsKeyPressed('D'))
	{
		if (map1[(int)player1.sprite[0].Location.x + 7][(int)player1.sprite[0].Location.y] == 'X')
			player1.sprite[0].Location.x += 0;

		else
			player1.sprite[0].Location.x += player1.speed * FASG::GetDeltaTime();
	}

	if (FASG::IsKeyDown(' ') && onAir == false)
	{
		player1.sprite[0].Location.y--;
		player1.speedY = JUMP_Y_IMPULSE;
		onAir = true;
	}

	

}

void DrawPlayer() {


	if (map1[(int)player1.sprite[0].Location.x][(int)player1.sprite[0].Location.y + 6] == 'X')
	{
		player1.speedY = 0;
		onAir = false;
	}

	else 
	{
		player1.speedY += ACCEL_JUMP * FASG::GetDeltaTime(); 
		player1.sprite[0].Location.y += player1.speedY * FASG::GetDeltaTime();
		onAir = true;
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
		FASG::WriteSpriteBuffer(player1.sprite[0].Location.x, player1.sprite[0].Location.y, player1.sprite[0]);
		break;

	case IDLE:
		FASG::WriteSpriteBuffer(player1.sprite[0].Location.x, player1.sprite[0].Location.y, player1.sprite[0]);
		break;

	case SALTO:
		FASG::WriteSpriteBuffer(player1.sprite[0].Location.x, player1.sprite[0].Location.y, player1.sprite[0]);
		break;
	}
}