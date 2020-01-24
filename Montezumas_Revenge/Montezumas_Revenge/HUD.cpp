#include "HUD.h"
#include "map.h"
#include "enemy.h"
#include "player.h"

std::string HUDMessage;
extern Player player1;

void miColision(std::string tag1, std::string tag2)
{
	player1.sprite[0].Location.x = W * 0.5f;
	player1.sprite[0].Location.y = H * 0.5f - 10;
}

void DrawHUD()
{
	FASG::WriteStringBuffer(H * 0.5f, FASG::EAligned::CENTER, HUDMessage, EForeColor::Green);
	HUDMessage = "";
}
