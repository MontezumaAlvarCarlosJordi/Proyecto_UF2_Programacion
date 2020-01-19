#include "player.h"
#include "map.h"
#include "start.h"



Player player1;



EPlayer statusPlayer1;

void InitPlayer() {
	
	//Velocidad del jugador
	player1.speed = 50.f;

	//Se asocia que Sprite va a ser el jugador
	player1.sprite[0].LoadSprite("PlayerIdle.txt");

	//Posicion inicial al empezar el juego
	player1.sprite[0].Location.x = W * 0.5f;
	player1.sprite[0].Location.y = H * 0.5f;

	//Le indico al sistema que el sprite del player entra dentro del sistema de detección de colisiones, y
	//que lo identifique con el tag "Player" (como si le digo "Maria").
	Sprite::AddToCollisionSystem(player1.sprite[0], "Player");
}

void InputPlayer(bool &gameOver) {
	
	if (FASG::IsKeyDown('X')) {
		
		gameOver = true;

	}
	
	statusPlayer1 = EPlayer::IDLE;

	
	if (FASG::IsKeyPressed('W'))
	{
		player1.sprite[0].Location.y -= player1.speed * FASG::GetDeltaTime();
		statusPlayer1 = EPlayer::ARRIBA;
	}
	if (FASG::IsKeyPressed('S'))
	{
		player1.sprite[0].Location.y += player1.speed * FASG::GetDeltaTime();
		statusPlayer1 = EPlayer::ABAJO;
	}
	if (FASG::IsKeyPressed('A'))
	{
		player1.sprite[0].Location.x -= player1.speed * FASG::GetDeltaTime();
		statusPlayer1 = EPlayer::IZQ;
	}
	if (FASG::IsKeyPressed('D'))
	{
		player1.sprite[0].Location.x += player1.speed * FASG::GetDeltaTime();
		statusPlayer1 = EPlayer::DER;
	}
	
	

}

void DrawPlayer() {

	
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