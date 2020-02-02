#include "HUD_colisiones.h"



//variables necesarias para las condiciones de colision entre los diferentes sprites
std::string HUDMessage;
extern Player player1;
extern Assets assetsmapa1;
extern Assets assetsmapa3;
extern Sprite puertas[4];
extern bool upDown;
bool puertaAbierta[3] = {false, false, false};
extern bool gameOver;
extern ERooms room;
extern bool cambioDeMapa;
char inventory[5];
bool llaveConseguida[3] = { false, false, false };

void miColision(std::string tag1, std::string tag2)
{	//colisiones entre enemigo y player para la reducion de vida
	if ((tag1 == "Player" && tag2 == "Enemy1") || (tag1 == "Enemy1" && tag2 == "Player")) {
		player1.sprite[0].Location.x = W * 0.5f;
		player1.sprite[0].Location.y = H * 0.5f - 10;
		player1.lifes--;

		if (player1.lifes == 0) 
		{
			gameOver = true;
		}

		
	}

	if ((tag1 == "Player" && tag2 == "Snake1") || (tag1 == "Snake1" && tag2 == "Player")) {
		player1.sprite[0].Location.x = 3;
		player1.sprite[0].Location.y = H * 0.5f - 10;
		player1.lifes--;

		if (player1.lifes == 0)
		{
			gameOver = true;
		}


	}

	if ((tag1 == "Player" && tag2 == "Snake2") || (tag1 == "Snake2" && tag2 == "Player")) {
		player1.sprite[0].Location.x = 3;
		player1.sprite[0].Location.y = H * 0.5f - 10;
		player1.lifes--;

		if (player1.lifes == 0)
		{
			gameOver = true;
		}


	}
	//colisiones entre puerta y player para abrirlas cuando haya posesion de llave
	if ((tag1 == "Player" && tag2 == "puerta") || (tag1 == "puerta" && tag2 == "Player")) {
		for (int i = 0; i < 5; i++) {
			if (inventory[i] == 'L') {

				puertaAbierta[0] = true;
				puertas[0].Location.x = 210;
				puertas[0].Location.y = 1;
				assetsmapa1.llaves[0].Location.x = 210;
				assetsmapa1.llaves[0].Location.y = 1;
				inventory[i] = 'V';
				FirstRoom();
			}
		}
		
	}

	if ((tag1 == "Player" && tag2 == "puertaAzul") || (tag1 == "puertaAzul" && tag2 == "Player")) {
		for (int i = 0; i < 5; i++) {
			if (inventory[i] == 'A') {

				puertaAbierta[2] = true;
				puertas[2].Location.x = 210;
				puertas[2].Location.y = 1;
				assetsmapa1.llaves[1].Location.x = 210;
				assetsmapa1.llaves[1].Location.y = 1;
				inventory[i] = 'V';
				FirstRoom();
			}
		}

	}

	if ((tag1 == "Player" && tag2 == "puertaRoja") || (tag1 == "puertaRoja" && tag2 == "Player")) {
		for (int i = 0; i < 5; i++) {
			if (inventory[i] == 'R') {

				puertaAbierta[1] = true;
				puertas[3].Location.x = 210;
				puertas[3].Location.y = 1;
				assetsmapa3.llaves[2].Location.x = 210;
				assetsmapa3.llaves[2].Location.y = 1;
				inventory[i] = 'V';
				FirstRoom();
			}
		}
	}
	
	//colision entre el portal que te lleva a la pantalla final
	if ((tag1 == "Player" && tag2 == "portalDe1a3") || (tag1 == "portalDe1a3" && tag2 == "Player")) {

		player1.sprite[0].Location.x = 3;

		room = ROOM3;
		cambioDeMapa = true;
	}

	if ((tag1 == "Player" && tag2 == "portalDe3a1") || (tag1 == "portalDe3a1" && tag2 == "Player")) {

		player1.sprite[0].Location.x = 192.f;

		room = ROOM1;
		cambioDeMapa = true;
	}

	if ((tag1 == "Player" && tag2 == "portalDe1a2") || (tag1 == "portalDe1a2" && tag2 == "Player")) {

		player1.sprite[0].Location.x = 192.f;

		room = ROOM2;
		cambioDeMapa = true;
	}

	if ((tag1 == "Player" && tag2 == "portalDe2a1") || (tag1 == "portalDe2a1" && tag2 == "Player")) {

		player1.sprite[0].Location.x = 3.f;

		room = ROOM1;
		cambioDeMapa = true;
	}
	if ((tag1 == "Player" && tag2 == "portalDe2aFIN") || (tag1 == "portalDe2aFIN" && tag2 == "Player")) {
		gameOver = true;
	}
	

	//colisiones para la interaccion entre el player y las escaleras
	if ((tag1 == "Player" && tag2 == "escalera") || (tag1 == "escalera" && tag2 == "Player")) {
		upDown = true;
	}
	
	if ((tag1 == "Player" && tag2 == "escalera2") || (tag1 == "escalera2" && tag2 == "Player")) {
		upDown = true;
	}
	
	if ((tag1 == "Player" && tag2 == "escalera3") || (tag1 == "escalera3" && tag2 == "Player")) {
		upDown = true;
	}

	//y las colisiones para recolectar las llaves
	if ((tag1 == "Player" && tag2 == "blueKey") || (tag1 == "blueKey" && tag2 == "Player")) {
		

		for (int i = 0; i < 5; i++) {
			if (inventory[i] == 'V') {
				assetsmapa1.llaves[1].Location.x = 5 + (8 * i);
				assetsmapa1.llaves[1].Location.y = 1;
				inventory[i] = 'A';
				llaveConseguida[1] = true;
				break;

			}
			
		}

	}

	if ((tag1 == "Player" && tag2 == "redKey") || (tag1 == "redKey" && tag2 == "Player")) {
		

		for (int i = 0; i < 5; i++) {
			if (inventory[i] == 'V') {
				assetsmapa3.llaves[2].Location.x = 5 + (8 * i);
				assetsmapa3.llaves[2].Location.y = 1;
				inventory[i] = 'R';
				llaveConseguida[2] = true;
				break;

			}

		}

	}

	if ((tag1 == "Player" && tag2 == "key") || (tag1 == "key" && tag2 == "Player")) {
		

		for (int i = 0; i < 5; i++) {
			if (inventory[i] == 'V') {
				assetsmapa1.llaves[0].Location.x = 5 + (8 * i);
				assetsmapa1.llaves[0].Location.y = 1;
				inventory[i] = 'L';
				llaveConseguida[0] = true;
				break;

			}

		}

	}
}

