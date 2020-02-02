#include "menu.h"

FASG::Sprite Titulo = FASG::Sprite("textoMenu.txt"); //declaracion del titulo 

extern Player player1;

void DrawTitulo() { //dibujamos el titulo en la pantalla de inicio y final

	FASG::WriteSpriteBuffer(57, 10, Titulo);
}

void Start() //escribimos el texto de inicio y creamos la salida del bucle
{
	std::string start1 = "PRESS SPACE TO START";
	std::string start2 = "OR X TO EXIT GAME";

	FASG::WriteStringBuffer(39, FASG::EAligned::CENTER, start1, FASG::EForeColor::Red);
	FASG::WriteStringBuffer(40, FASG::EAligned::CENTER, start2, FASG::EForeColor::Red);

	if (FASG::IsKeyDown(' '))
	{
		gameStart = true;
	}
}

void Final() //escribimos el texto del fin y creamos la salida del bucle
{
	std::string final1 = "THANKS FOR PLAYING";
	std::string final2 = "CREDITS: CARLOS DE YZAGUIRRE & ALVAR DALDA";
	std::string final3 = "PRESS SPACE TO EXIT GAME";

	FASG::WriteStringBuffer(38, FASG::EAligned::CENTER, final1, FASG::EForeColor::Red);
	FASG::WriteStringBuffer(39, FASG::EAligned::CENTER, final2, FASG::EForeColor::Red);
	FASG::WriteStringBuffer(40, FASG::EAligned::CENTER, final3, FASG::EForeColor::Red);

	if (FASG::IsKeyDown(' '))
	{
		gameFinish = true;
	}
}