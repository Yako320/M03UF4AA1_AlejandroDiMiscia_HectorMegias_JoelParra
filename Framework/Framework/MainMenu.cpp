#include "MenuScene.h"
#include "ConsoleControl.h"

void MenuScene::Update()
{
	if (GetAsyncKeyState('2') != 0) {
		nextScene = "Ranking"; //Selects the next scene 
		finished = true; //Indicates that this scene is finished
	}
	else if (GetAsyncKeyState('1') != 0) {
		nextScene = "Gameplay";
		finished = true;

	}
	else if (GetAsyncKeyState('3') != 0) {
		nextScene = "Exit";
		finished = true;
	}
}

void MenuScene::Render()
{
	ConsoleSetColor(MAGENTA, BLACK);
	std::cout << "__________                        __   ________          __   " << std::endl;
	std::cout << "\\______   \\_______   ____ _____  |  | _\\_____  \\  __ ___/  |_ " << std::endl;
	std::cout << " |    |  _/\\_  __ \\_/ __ \\\\__  \\ |  |/ //   |   \\|  |  \\   __\\" << std::endl;
	std::cout << " |    |   \\ |  | \\/\\  ___/ / __ \\|    </    |    \\  |  /|  |  " << std::endl;
	std::cout << " |______  / |__|    \\___  >____  /__|_ \\_______  /____/ |__|  " << std::endl;
	std::cout << "        \\/              \\/     \\/     \\/       \\/             " << std::endl;

	ConsoleSetColor(BLUE, BLACK);
	std::cout << "\n\n\n" << "1- Gameplay\n" << "2- Ranking\n";

	ConsoleSetColor(RED, BLACK);
	std::cout << "3- Exit";
	ConsoleSetColor(WHITE, BLACK);
}
