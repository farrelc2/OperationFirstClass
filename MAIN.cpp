#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string>   //string
#include <fstream> //for ofstream class
#include <windows.h>
#include <time.h>   //time
#include <stdlib.h> //srand, rand
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

void rules();

int main() {
	bool Quit = 0;
	int gameSelection;
	char play;
	string line;
	rules();
	

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
			system("Color 09");
			mainYahtzee();
		}
		else if (gameSelection == 2) {
			//Play rochambeau
			system("Color 0B");
			mainRochambeau();

		}
		else if (gameSelection == 3) {
			//demo rules
			ifstream rules;
			rules.open("Rules.txt");
			while (!rules.eof()) {
				getline(rules, line);
				cout << line << endl;
			}
			rules.close();

		}
		else {
			cout << "Incorrect  Game Selection, enter a valid choice: ";
		}
	}
	return 0;
}

void rules() {
	ofstream rules;
	rules.open("Rules.txt");


	rules << "Welcome to the Rules" << endl;
	rules << "  Rochambeau Rules" << endl;
	rules << "   Partners say, 'Roshambo' or 'Rock Paper Scissors' together with their hands in a fist." << endl;
	rules << "   On 'bo' or 'paper, ' players pick one of three things to show with their hand :" << endl;
	rules << "   Rock which is demonstrated by a fist." << endl;
	rules << "   Scissors with two finger spread out to represent scissors. (This looks like a sideways peace sign.)" << endl;
	rules << "   Paper by holding out a palm down, flat hand." << endl;
	rules << "   If players show the same things, they go again." << endl;
	rules << "   If one player picks rockand one scissors, the player who showed rock wins the dispute.To explain this, say rock crushes scissors(no need to actually crush)." << endl;
	rules << "   If one player picks scissorsand the other paper, the player who showed scissors succeeds.Scissors cuts paper." << endl;
	rules << "   If a player shows paper while the other shows rock, the player who picked paper succeeds.Paper covers rock." << endl;
	rules << "   Once game is taught, ask players to use in many different gamesand situations to solve minor disputes, such as is the ball in or out or who arrived first in line." << endl<<endl;
	
	rules << " Yahtzee Rules " << endl;
	rules << endl;
	rules << " " << endl;
	rules << "The objective of YAHTZEE is to get as many points as possible by rolling five " << endl;
	rules << "dice and getting certain combinations of dice." << endl;
	rules << " " << endl;
	rules << "Gameplay" << endl;
	rules << " " << endl;
	rules << "In each turn a player may throw the dice up to three times. A player doesn't" << endl;
	rules << "have to roll all five dice on the second and third throw of a round, he may put " << endl;
	rules << "as many dice as he wants to the side and only throw the ones that don't have " << endl;
	rules << "the numbers he's trying to get. For example, a player throws and gets " << endl;
	rules << "1,3,3,4,6. He decides he want to try for the large straight, 1,2,3,4,5. So, he" << endl;
	rules << "puts 1,3,4 to the side and only throws 3 and 6 again, hoping to get 2 and 5." << endl;
	rules << "In this game you click on the dice you want to keep. They will be moved down " << endl;
	rules << "and will not be thrown the next time you press the 'Roll Dice' button. If you " << endl;
	rules << "decide after the second throw in a turn that you don't want to keep the same " << endl;
	rules << "dice before the third throw then you can click them again and they will move " << endl;
	rules << "back to the table and be thrown in the third throw." << endl;
	rules << " " << endl;
	rules << "Upper section combinations" << endl;
	rules << " " << endl;
	rules << "Ones: Get as many ones as possible." << endl;
	rules << "Twos: Get as many twos as possible." << endl;
	rules << "Threes: Get as many threes as possible." << endl;
	rules << "Fours: Get as many fours as possible." << endl;
	rules << "Fives: Get as many fives as possible" << endl;
	rules << "Sixes: Get as many sixes as possible." << endl;
	rules << "For the six combinations above the score for each of them is the sum of dice" << endl;
	rules << "of the right kind. E.g. if you get 1,3,3,3,5 and you choose Threes you will get" << endl;
	rules << "3*3 = 9 points. The sum of all the above combinations is calculated and if it is " << endl;
	rules << "63 or more, the player will get a bonus of 35 points. On average a player " << endl;
	rules << "needs three of each to reach 63, but it is not required to get three of each " << endl;
	rules << "exactly, it is perfectly OK to have five sixes, and zero ones for example, as " << endl;
	rules << "ong as the sum is 63 or more the bonus will be awarded." << endl;
	rules << " " << endl;
	rules << "Lower section combinations" << endl;
	rules << " " << endl;
	rules << "Three of a kind: Get three dice with the same number. Points are the sum all " << endl;
	rules << "dice (not just the three of a kind)." << endl;
	rules << "Four of a kind: Get four dice with the same number. Points are the sum all" << endl;
	rules << "dice (not just the four of a kind)." << endl;
	rules << "Full house: Get three of a kind and a pair, e.g. 1,1,3,3,3 or 3,3,3,6,6. Scores" << endl;
	rules << "25 points." << endl;
	rules << "Small straight: Get four sequential dice, 1,2,3,4 or 2,3,4,5 or 3,4,5,6. Scores" << endl;
	rules << "30 points." << endl;
	rules << "Large straight: Get five sequential dice, 1,2,3,4,5 or 2,3,4,5,6. Scores 40" << endl;
	rules << "points." << endl;
	rules << "Chance: You can put anything into chance, it's basically like a garbage can " << endl;
	rules << "when you don't have anything else you can use the dice for. The score is " << endl;
	rules << "simply the sum of the dice." << endl;
	rules << "YAHTZEE: Five of a kind. Scores 50 points." << endl;

	rules.close();

}
