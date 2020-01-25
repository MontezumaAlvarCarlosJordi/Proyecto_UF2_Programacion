#include "HUD.h"
#include "map.h"
#include "assets.h"
#include "enemy.h"
#include "player.h"

std::string HUDMessage;
extern Player player1;
extern Assets assets;
extern bool upDown;


void miColision(std::string tag1, std::string tag2)
{
	if ((tag1 == "Player" && tag2 == "Enemy") || (tag1 == "Enemy" && tag2 == "Player")) {
		player1.sprite[0].Location.x = W * 0.5f;
		player1.sprite[0].Location.y = H * 0.5f - 10;
	}

	if ((tag1 == "Player" && tag2 == "escalera") || (tag1 == "escalera" && tag2 == "Player")) {
		upDown = true;
	}
	

	if ((tag1 == "Player" && tag2 == "key") || (tag1 == "key" && tag2 == "Player")) {
		assets.sprite[0].Location.x = 5;
		assets.sprite[0].Location.y = 1;

		for (int i = 0; i < 5; i++) {
			if (assets.inventory[i] == NULL) {

				assets.inventory[i] == 'L';

			}
		}

	}
}

void DrawHUD()
{
	FASG::WriteStringBuffer(H * 0.5f, FASG::EAligned::CENTER, HUDMessage, EForeColor::Green);
	HUDMessage = "";
}
