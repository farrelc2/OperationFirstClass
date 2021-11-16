#pragma once
#include "Yahtzee.h"
class ScoreCard {
private:
    int aces = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int sixes = 0;
    int upperSectionTotal = 0;
    int upperBonus = 0;
    int upperSectionTotalBonus = 0;

    int threeOfAKind = 0;
    int fourOfAKind = 0;
    int fullHouse = 0;
    int smallStraight = 0;
    int largeStraight = 0;
    int yahtzee = 0;
    int chance = 0;
    int lowerBonus = 0;
    int lowerSectionTotal = 0;

public:
    ScoreCard(Yahtzee& currentRoll) { R = currentRoll; }
    int selectScore;
    Yahtzee R;
    void updateRound(Yahtzee& y) {
        R = y;
    }
    void upperScoreCard();
    void lowerScoreCard();
    void displayScoreCard();
};
