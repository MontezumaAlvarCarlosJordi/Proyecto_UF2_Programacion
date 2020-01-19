#include "HUD.h"
#include "map.h"
#include "enemy.h"
#include "player.h"

std::string HUDMessage;

void miColision(std::string tag1, std::string tag2)
{
	HUDMessage = "Colision de " + tag1 + " y " + tag2;
}

void DrawHUD()
{
	FASG::WriteStringBuffer(H * 0.5f, FASG::EAligned::CENTER, HUDMessage, EForeColor::Green);
	HUDMessage = "";
}
