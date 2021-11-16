#include "Yahtzee.h"
#include <time.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int Yahtzee::getDiceValue(int y){
    return diceValue[y];
}

void Yahtzee::rollDice(){
    srand (time(NULL));
    int r1 = rand() % 6 + 1;
    int r2 = rand() % 6 + 1;
    int r3 = rand() % 6 + 1;
    int r4 = rand() % 6 + 1;
    int r5 = rand() % 6 + 1;
    diceValue[0] = r1;
    diceValue[1] = r2;
    diceValue[2] = r3;
    diceValue[3] = r4;
    diceValue[4] = r5;
}

void Yahtzee::reRoll(){
    char choice;
    int diceNum = 1;
    for(int i = 0; i < 5; i++)
    {
        cout << "Would you like to re-roll dice " << diceNum << "? (y/n)" << endl;
        cin >> choice;
        if (choice == 'y')
        {
            diceValue[i] = rand() % 6 + 1;
        }
        if(choice == 'n')
        {
            // Keeps the dice value in place
        }
        diceNum++;
    }
}

void Yahtzee::display(){
    cout << "-----   -----   -----   -----   -----" << endl;
    for (int i1 = 0; i1 < 5; i1++)
    {
        if (diceValue[i1] == 1)
        {
            cout << "|   |   ";
        }
        if (diceValue[i1] == 2 || diceValue[i1] == 3)
        {
            cout << "|  o|   ";
        }
        if (diceValue[i1] == 4 || diceValue[i1] == 5 || diceValue[i1] == 6)
        {
            cout << "|o o|   ";
        }
    }
    cout << endl;
    for (int i2 = 0; i2 < 5; i2++)
    {
        if (diceValue[i2] == 1 || diceValue[i2] == 3 || diceValue[i2] == 5)
        {
            cout << "| o |   ";
        }
        if (diceValue[i2] == 2 || diceValue[i2] == 4)
        {
            cout << "|   |   ";
        }
        if (diceValue[i2] == 6)
        {
            cout << "|o o|   ";
        }
    }
    cout << endl;
    for (int i3 = 0; i3 < 5; i3++)
    {
        if (diceValue[i3] == 1)
        {
            cout << "|   |   ";
        }
        if (diceValue[i3] == 2 || diceValue[i3] == 3)
        {
            cout << "|o  |   ";
        }
        if (diceValue[i3] == 4 || diceValue[i3] == 5 || diceValue[i3] == 6)
        {
            cout << "|o o|   ";
        }
    }
    cout << endl;
    cout << "-----   -----   -----   -----   -----" << endl;
    cout << " (1)     (2)     (3)     (4)     (5)  " << endl;
}