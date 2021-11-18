
// Virtual Yahtzee Game

#include <iostream>
#include <limits>
#include <string>
#include "Yahtzee.h"
#include "ScoreCard.h"
using namespace std;

void displayYahtzee() {
    cout << "YOU SELECTED" << endl;
    cout << "   ___    ___ ________  ___  ___  _________  ________  _______   _______       " << endl;
    cout << "  |\\  \\  /  /|\\   __  \\|\\  \\|\\  \\|\\___   ___\\\\_____  \\|\\  ___ \\ |\\  ___ \\      " << endl;
    cout << "  \\ \\  \\/  / | \\  \\|\\  \\ \\  \\\\\\  \\|___ \\  \\_|\\|___/  /\\ \\   __/|\\ \\   __/|     " << endl;
    cout << "   \\ \\    / / \\ \\   __  \\ \\   __  \\   \\ \\  \\     /  / /\\ \\  \\_|/_\\ \\  \\_|/__   " << endl;
    cout << "    \\/  /  /   \\ \\  \\ \\  \\ \\  \\ \\  \\   \\ \\  \\   /  /_/__\\ \\  \\_|\\ \\ \\  \\_|\\ \\  " << endl;
    cout << "  __/  / /      \\ \\__\\ \\__\\ \\__\\ \\__\\   \\ \\__\\ |\\________\\ \\_______\\ \\_______\\ " << endl;
    cout << " |\\___/ /        \\|__|\\|__|\\|__|\\|__|    \\|__|  \\|_______|\\|_______|\\|_______| " << endl;
    cout << " \\|___|/                                                                       " << endl;
    cout << "                                                                               " << endl;
}

void displayInstructions() {
    cout << "INSTRUCTIONS:" << endl;
}

int mainYahtzee()
{
    srand(time(NULL));
    bool playGame = true;
    char gameNull;
    displayYahtzee();
    Yahtzee Round;
    ScoreCard Player(Round);
    int counter = 0;
    while (playGame == true)
    {
        displayInstructions();
        Round.rollDice();
        Round.display();
        Round.reRoll();
        Round.display();
        Round.reRoll();
        Round.display();
        Player.updateRound(Round);
        Player.displayScoreCard();
        if ((Player.selectScore >= 1) && (Player.selectScore <= 6))
        {
            Player.upperScoreCard();
        }
        else if ((Player.selectScore >= 7) && (Player.selectScore <= 13))
        {
            Player.lowerScoreCard();
        }
        counter++;
        if (counter == 13)
        {
            playGame = false;
        }
        cout << "Would you like to continue playing? (y/n)" << endl;
        cin >> gameNull;
        if ((gameNull == 'n')||(gameNull=='N'))
        {
            playGame = false;
        }
        else { return 1; }
    }
    cout << "Your final score!" << endl;
    Player.displayScoreCard();
    cout << "Enter anything." << endl;
    cout << "Congratulations! Thanks for playing!" << endl;

    return 0;
}
