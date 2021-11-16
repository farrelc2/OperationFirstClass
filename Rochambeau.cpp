
#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string>   //string
#include <time.h>   //time
#include <stdlib.h> //srand, rand
#include "Rochambeau.h"

using namespace std;

bool pRock = 0;
bool pPaper = 0;
bool pScissors = 0;
bool pFire = 0;

bool cpuRock = 0;
bool cpuPaper = 0;
bool cpuScissors = 0;


void displayRock() {
    //rock ascii art
    cout << "    ~~~~~ " << endl;
    cout << "   /     \\" << endl;
    cout << "   [      ]" << endl;
    cout << "   \\     /" << endl;
    cout << "    ~~~~~" << endl;
}
void displayPaper() {
    //paper ascii art
    cout << "     __________" << endl;
    cout << "    |          |" << endl;
    cout << "    |          |" << endl;
    cout << "    |          |" << endl;
    cout << "    |          |" << endl;
    cout << "    |          |" << endl;
    cout << "    |          |" << endl;
    cout << "    |__________|" << endl;
}
void displayScissors() {
    //scissor ascii art
    cout << "    _       ,/'" << endl;
    cout << "   (_).  ,/'" << endl;
    cout << "    _  ::  " << endl;
    cout << "   (_)'  `\\." << endl;
    cout << "            `\\." << endl;
}

void displayFire() {

    cout << "______    _                _       _____                     " << endl;
    cout << "|  ___|  (_)              | |     /  ___|                    " << endl;
    cout << "| |_ _ __ _  ___ _ __   __| |___  \ `--.  ___ ___ _ __   ___ " << endl;
    cout << "|  _| '__| |/ _ \ '_ \ / _` / __|  `--. \// __/ _ \\ '_ \\ / _ \\" << endl;
    cout << "| | | |  | |  __/ | | | (_| \__ \ /\__/ / (_|  __/ | | |  __/" << endl;
    cout << "\_| |_|  |_|\___|_| |_|\__,_|___/ \____/ \___\___|_| |_|\___|" << endl;
    cout << "                                                             " << endl << endl;


    cout << "           _ ._  _ , _ ._" << endl;
    cout << "         (_ ' ( `  )_  .__)" << endl;
    cout << "       ( (  (    )   `)  ) _)" << endl;
    cout << "      (__ (_   (_ . _) _) ,__)" << endl;
    cout << "          `~~`\\ ' . /`~~`" << endl;
    cout << "               ;   ;" << endl;
    cout << "               /   \\" << endl;
    cout << "______________/_ __ \\_____________" << endl;

    cout << endl << endl;
    cout << "    Joey: Ha ha! I win." << endl;
    cout << "    Ross: What's that?" << endl;
    cout << "    Joey: Thats fire. It beats everything." << endl;
    cout << "    Phoebe: Oh really? Does it beat water balloon? *Poot-pssh*" << endl;
    cout << "      __   _" << endl;
    cout << "   (_   _    _)" << endl;
    cout << "  / /(_) (__)" << endl;
    cout << " / / / / / /" << endl;
    cout << "/ / / / / /" << endl;

    cout << "    Joey: Well played, Phoebe Buffay. Well Played." << endl;

}
void playGame() {
    //random seed
    int cpuSelection = 0;
    cpuSelection = rand() % 3 + 1; //random number 1-3
    string playerSelection;
    int playerWins = 0;
    int cpuWins = 0;
    cout << "Enter in your selection,  rock,  paper, or scissors, : ";
    cin >> playerSelection;
    cout << endl;

    if (playerSelection == "rock") {
        cout << "********PLAYER********" << endl;
        displayRock();
        pRock = 1;
    }
    else if (playerSelection == "paper") {
        cout << "********PLAYER********" << endl;
        displayPaper();
        pPaper = 1;
    }
    else if (playerSelection == "scissors") {
        cout << "********PLAYER********" << endl;
        displayScissors();
        pScissors = 1;
    }
    else if (playerSelection == "fire") {
        cout << "********PLAYER********" << endl;
        displayFire();
        pFire = 1;
    }
    else {
        cout << "Enter a valid selection" << endl;
    }
    if (playerSelection != "fire") {

        if (cpuSelection == 1) {
            cout << "********CPU********" << endl;
            displayRock();
            cpuRock = 1;
        }
        else if (cpuSelection == 2) {
            cout << "********CPU********" << endl;
            displayPaper();
            cpuPaper = 1;
        }
        else if (cpuSelection == 3) {
            cout << "********CPU********" << endl;
            displayScissors();
            cpuScissors = 1;
        }

        else {
            cout << "Enter a valid selection" << endl;
        }
    }
    else if (playerSelection != "fire")
    {
        cout << "You lost" << endl;
    }
    if (pFire == 1) {
        cout << "YOU WIN!" << endl;
    }
    else if ((pRock == 1 && cpuScissors == 1) || (pPaper == 1 && cpuRock == 1) || (pScissors == 1 && cpuPaper == 1)) {
        cout << "Player Wins" << endl;
        playerWins++;
    }
    else if ((cpuRock == 1 && pScissors == 1) || (cpuPaper == 1 && pRock == 1) || (cpuScissors == 1 && pPaper == 1)) {
        cout << "CPU Beat YOU" << endl;
        cpuWins++;
    }
    else if ((cpuRock == 1 && pRock == 1) || (cpuPaper == 1 && pPaper == 1) || (cpuScissors == 1 && pScissors == 1)) {
        cout << "Player and CPU tied..." << endl << endl;
    }

}

int mainRochambeau()
{
    srand(time(NULL));
    int endgame = 0;
    char select;
    cout << endl << endl << endl;

    while (endgame != 1) {
        playGame();
        cout << "Do you want to continue playing? Y or N: ";
        cin >> select;
        if ((select == 'Y') || (select == 'y')) {
            endgame = 0;
        }
        else if (select == 'N' || (select == 'n')) {
            endgame = 1;
        }
    }
    return 0;
}
