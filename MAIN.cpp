#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string>   //string
#include <fstream> //for ofstream class
#include <windows.h>
#include "Rochambeau.h"
#include "ScoreCard.h"
#include "Yahtzee.h"


using namespace std;


void gameMenu() {
	system("Color F5");
	cout << "                                  ______     ______   ______     ______     ______     ______   __     ______     __   __              " << endl;
	cout << "                                 /\\  __ \\   /\\  == \\ /\\  ___\\   /\\  == \\   /\\  __ \\   /\\__  _\\ /\\ \\   /\\  __ \\   /\\ ' - .\\             " << endl;
	cout << "                                 \\ \\ \\/\\ \\  \\ \\  _-/ \\ \\  __\\   \\ \\  __<   \\ \\  __ \\  \\/_/\\ \\/ \\ \\ \\  \\ \\ \\/\\ \\  \\ \\ \\-.  \\            " << endl;
	cout << "                                  \\ \\_____\\  \\ \\_\\    \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_\\ \\_\\    \\ \\_\\  \\ \\_\\  \\ \\_____\\  \\ \\_\\\'\\_\\           " << endl;
	cout << "                                   \\/_____/   \\/_/     \\/_____/   \\/_/ /_/   \\/_/\\/_/     \\/_/   \\/_/   \\/_____/   \\/_/ \\/_/           " << endl;
	cout << "                                                                                                                                       " << endl;
	cout << "                               ______   __     ______     ______     ______      ______     __         ______     ______     ______    " << endl;
	cout << "                              /\\  ___\\ /\\ \\   /\\  == \\   /\\  ___\\   /\\__  _\\    /\\  ___\\   /\\ \\       /\\  __ \\   /\\  ___\\   /\\  ___\\   " << endl;
	cout << "                              \\ \\  __\\ \\ \\ \\  \\ \\  __<   \\ \\___  \\  \\/_/\\ \\/    \\ \\ \\____  \\ \\ \\____  \\ \\  __ \\  \\ \\___  \\  \\ \\___  \\  " << endl;
	cout << "                               \\ \\_\\    \\ \\_\\  \\ \\_\\ \\_\\  \\/\\_____\\    \\ \\_\\     \\ \\_____\\  \\ \\_____\\  \ \\_\\ \\_\\  \\/\\_____\\  \\/\\_____\\ " << endl;
	cout << "                                \\/_/     \\/_/   \\/_/ /_/   \\/_____/     \\/_/      \\/_____/   \\/_____/   \\/_/\\/_/   \\/_____/   \\/_____/ " << endl;
	cout << "                                                                                                                                       " << endl;
	cout << endl << endl;



}

int main() {
	bool Quit = 0;
	int gameSelection;
	char play;


	while (Quit == 0) {
		
		gameMenu();
		cout << "Would you like to continue to play Games? enter Y or N" << endl;
		cin >> play;
			if ((play == 'Y') || (play == 'y')) {
				Quit = 0;
			}
			else if ((play == 'N') || (play == 'n')) {
				Quit = 1;
				return 1;
			}
			else {
				cout << "Enter valid response." << endl;
			}

		cout << "                     Select your Game: enter 1 for Yahtzee, 2 for Rochambeau, and 3 for Rules: ";
		cin >> gameSelection;

		if (gameSelection == 1) {
			//Play yahtzee
			mainYahtzee();
		}
		else if (gameSelection == 2) {
			//Play rochambeau
			mainRochambeau();

		}
		else if (gameSelection == 3) {
			//demo rules
		
		}
		else {
			cout << "Incorrect gameSelection, enter a valid choice: ";
		}
	}
	return 0;
}
