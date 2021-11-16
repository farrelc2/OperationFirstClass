#pragma once
class Yahtzee {
private:
    int diceValue[5];
public:
    Yahtzee(int d1, int d2, int d3, int d4, int d5)
    {
        diceValue[0] = d1;
        diceValue[1] = d2;
        diceValue[2] = d3;
        diceValue[3] = d4;
        diceValue[4] = d5;
    }
    Yahtzee() { diceValue[0] = 1; diceValue[1] = 1; diceValue[2] = 1; diceValue[3] = 1; diceValue[4] = 1; }
    int getDiceValue(int y);
    void rollDice();
    void reRoll();
    void display();
};

int mainYahtzee();
