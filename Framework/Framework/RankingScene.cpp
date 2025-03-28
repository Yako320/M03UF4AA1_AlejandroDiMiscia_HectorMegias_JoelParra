#include "RankingScene.h"
#include "ConsoleControl.h"

void RankingScene::Update()
{
	if (GetAsyncKeyState('R') != 0) {
		finished = true;
	}
}

void RankingScene::Render()
{
	ConsoleSetColor(MAGENTA, BLACK);
	std::cout << "__________                __    __                " << std::endl;
	std::cout << "\\______   \\_____    ____ |  | _|__| ____    ____  " << std::endl;
	std::cout << " |       _/\\__  \\  /    \\|  |/ /  |/    \\  / ___\\ " << std::endl;
	std::cout << " |    |   \\ / __ \\|   |  \\    <|  |   |  \\/ /_/  >" << std::endl;
	std::cout << " |____|_  /(____  /___|  /__|_ \\__|___|  /\\___  / " << std::endl;
	std::cout << "        \\/      \\/     \\/     \\/       \\//_____/  " << std::endl;

	ConsoleSetColor(RED, BLACK);
	std::cout << "\nPress R to go back to the menu;";
	ConsoleSetColor(WHITE, BLACK);

}
