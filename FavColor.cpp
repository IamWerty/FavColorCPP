// FavColor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "init.h"

int main()
{
	favColors* colors = favColors::getInstance();
	bool doWhile = true;
	int colorOption = 0;
	int option = 0;
	while (doWhile) {
		std::cout << "Hello User!!!\n";
		colors->showFirstMenu();
		std::cin >> option;
		switch (option) {
		case 1:
			std::cout << "You add new favorite color\n";
			colors->showColors();
			std::cin >> colorOption;
			if (colorOption == 0) {
				return 0; // Exit the if
			}
			else colors->addColor(colorOption);
			colors->pressEnterToContinue();
			colors->clearConsole();
			break;
		case 2:
			std::cout << "You remove one of favorite color\n";
			colors->showColors();
			std::cin >> colorOption;
			colors->removeColor(colorOption);
			colors->pressEnterToContinue();
			colors->clearConsole();
			break;
		case 3:
			std::cout << "Your favorite colors are:\n";
			colors->showFavoriteColors();
			colors->pressEnterToContinue();
			colors->clearConsole();
			break;
		case 4:
			colors->clearConsole();
			std::cout << "You exit\n";
			doWhile = false;
			break;

		default:
			std::cout << "Invalid option\n";
			colors->pressEnterToContinue();
			colors->clearConsole();
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
