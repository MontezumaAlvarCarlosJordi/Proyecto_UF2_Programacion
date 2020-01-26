#include "HUD.h"
#include "map.h"
#include "start.h"
#include "assets.h"
#include "enemy.h"
#include "player.h"

std::string HUDMessage;
extern Player player1;
extern Assets assets;
extern Sprite puertas[4];
extern bool upDown;
bool puertaAbierta[3] = {false, false, false};
extern bool gameOver;

void miColision(std::string tag1, std::string tag2)
{
	if ((tag1 == "Player" && tag2 == "Enemy") || (tag1 == "Enemy" && tag2 == "Player")) {
		player1.sprite[0].Location.x = W * 0.5f;
		player1.sprite[0].Location.y = H * 0.5f - 10;
		
		InitAssets();
		for (int i = 0; i < 3; i++) {
			puertaAbierta[i] = false;
		}
	}

	if ((tag1 == "Player" && tag2 == "puerta") || (tag1 == "puerta" && tag2 == "Player")) {
		for (int i = 0; i < 5; i++) {
			if (assets.inventory[i] == 'L') {

				puertaAbierta[0] = true;
				puertas[0].Location.x = 210;
				puertas[0].Location.y = 1;
				assets.sprite[0].Location.x = 210;
				assets.sprite[0].Location.y = 1;

			}
		}
		
	}

	if ((tag1 == "Player" && tag2 == "puertaAzul") || (tag1 == "puertaAzul" && tag2 == "Player")) {
		for (int i = 0; i < 5; i++) {
			if (assets.inventory[i] == 'A') {

				puertaAbierta[1] = true;
				puertas[2].Location.x = 210;
				puertas[2].Location.y = 1;
				assets.sprite[1].Location.x = 210;
				assets.sprite[1].Location.y = 1;

			}
		}

	}

	if ((tag1 == "Player" && tag2 == "puertaRoja") || (tag1 == "puertaRoja" && tag2 == "Player")) {
		for (int i = 0; i < 5; i++) {
			if (assets.inventory[i] == 'R') {

				puertaAbierta[2] = true;
				puertas[3].Location.x = 210;
				puertas[3].Location.y = 1;
				assets.sprite[2].Location.x = 210;
				assets.sprite[2].Location.y = 1;
				DrawHUD();

			}
		}

	}

	if ((tag1 == "Player" && tag2 == "portal") || (tag1 == "portal" && tag2 == "Player")) {
		
		gameOver = true;
	}

	if ((tag1 == "Player" && tag2 == "escalera") || (tag1 == "escalera" && tag2 == "Player")) {
		upDown = true;
	}
	
	if ((tag1 == "Player" && tag2 == "escalera2") || (tag1 == "escalera2" && tag2 == "Player")) {
		upDown = true;
	}
	
	if ((tag1 == "Player" && tag2 == "escalera3") || (tag1 == "escalera3" && tag2 == "Player")) {
		upDown = true;
	}

	if ((tag1 == "Player" && tag2 == "blueKey") || (tag1 == "blueKey" && tag2 == "Player")) {
		assets.sprite[1].Location.x = 5;
		assets.sprite[1].Location.y = 1;

		for (int i = 0; i < 5; i++) {
			if (assets.inventory[i] == 'V') {

				assets.inventory[i] = 'A';
				break;

			}
			
		}

	}

	if ((tag1 == "Player" && tag2 == "redKey") || (tag1 == "redKey" && tag2 == "Player")) {
		assets.sprite[2].Location.x = 5;
		assets.sprite[2].Location.y = 1;

		for (int i = 0; i < 5; i++) {
			if (assets.inventory[i] == 'V') {

				assets.inventory[i] = 'R';
				break;

			}

		}

	}

	if ((tag1 == "Player" && tag2 == "key") || (tag1 == "key" && tag2 == "Player")) {
		assets.sprite[0].Location.x = 5;
		assets.sprite[0].Location.y = 1;

		for (int i = 0; i < 5; i++) {
			if (assets.inventory[i] == 'V') {

				assets.inventory[i] = 'L';
				break;

			}

		}

	}
}

void DrawHUD()
{
	
	FASG::WriteStringBuffer(10, FASG::EAligned::CENTER, HUDMessage, EForeColor::Red);
	HUDMessage = "Enhorabuena. Has ganado. Pulsa X para salir";
}
