#include <iostream>
#include <limits>
#include <string>
#include "Yahtzee.h"
#include "ScoreCard.h"
using namespace std;

void ScoreCard::upperScoreCard() {
    int diceValue[5];
    for (int i = 0; i < 5; i++)
    {
        diceValue[i] = R.getDiceValue(i);
    }

    if (selectScore == 1) // Count and add only ones
    {
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == 1)
            {
                aces += 1;
            }
        }
        upperSectionTotal += aces;
        cout << "You scored " << aces << " points!" << endl;
    }
    if (selectScore == 2) // Count and add only twos
    {
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == 2)
            {
                twos += 2;
            }
        }
        upperSectionTotal += twos;
        cout << "You scored " << twos << " points!" << endl;
    }
    if (selectScore == 3) // Count and add only threes
    {
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == 3)
            {
                threes += 3;
            }
        }
        upperSectionTotal += threes;
        cout << "You scored " << threes << " points!" << endl;
    }
    if (selectScore == 4) // Count and add only fours
    {
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == 4)
            {
                fours += 4;
            }
        }
        upperSectionTotal += fours;
        cout << "You scored " << fours << " points!" << endl;
    }
    if (selectScore == 5) // Count and add only fives
    {
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == 5)
            {
                fives += 5;
            }
        }
        upperSectionTotal += fives;
        cout << "You scored " << fives << " points!" << endl;
    }
    if (selectScore == 6) // Count and add only sixes
    {
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == 6)
            {
                sixes += 6;
            }
        }
        upperSectionTotal += sixes;
        cout << "You scored " << sixes << " points!" << endl;
    }
}
void ScoreCard::lowerScoreCard() {
    int diceValue[5];
    for (int i = 0; i < 5; i++)
    {
        diceValue[i] = R.getDiceValue(i);
    }
    if (selectScore == 7) // 3 of a kind, add all dice
    {
        int TOAK1 = 0;
        int TOAK2 = 0;
        int TOAK3 = 0;
        int TOAK4 = 0;
        int TOAK5 = 0;
        int TOAK6 = 0;
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == 1)
            {
                TOAK1++;
            }
            else if (diceValue[i] == 2)
            {
                TOAK2++;
            }
            else if (diceValue[i] == 3)
            {
                TOAK3++;
            }
            else if (diceValue[i] == 4)
            {
                TOAK4++;
            }
            else if (diceValue[i] == 5)
            {
                TOAK5++;
            }
            else if (diceValue[i] == 6)
            {
                TOAK6++;
            }
        }
        if ((TOAK1 >= 3) || (TOAK2 >= 3) || (TOAK3 >= 3) || (TOAK4 >= 3) || (TOAK5 >= 3) || (TOAK6 >= 3))
        {
            threeOfAKind += diceValue[0];
            threeOfAKind += diceValue[1];
            threeOfAKind += diceValue[2];
            threeOfAKind += diceValue[3];
            threeOfAKind += diceValue[4];
        }
        lowerSectionTotal += threeOfAKind;
        cout << "You scored " << threeOfAKind << " points!" << endl;
    }
    if (selectScore == 8) // 4 of a kind, add all dice
    {
        int FOAK1 = 0;
        int FOAK2 = 0;
        int FOAK3 = 0;
        int FOAK4 = 0;
        int FOAK5 = 0;
        int FOAK6 = 0;
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == 1)
            {
                FOAK1++;
            }
            else if (diceValue[i] == 2)
            {
                FOAK2++;
            }
            else if (diceValue[i] == 3)
            {
                FOAK3++;
            }
            else if (diceValue[i] == 4)
            {
                FOAK4++;
            }
            else if (diceValue[i] == 5)
            {
                FOAK5++;
            }
            else if (diceValue[i] == 6)
            {
                FOAK6++;
            }
        }
        if ((FOAK1 >= 3) || (FOAK2 >= 3) || (FOAK3 >= 3) || (FOAK4 >= 3) || (FOAK5 >= 3) || (FOAK6 >= 3))
        {
            fourOfAKind += diceValue[0];
            fourOfAKind += diceValue[1];
            fourOfAKind += diceValue[2];
            fourOfAKind += diceValue[3];
            fourOfAKind += diceValue[4];
        }
        lowerSectionTotal += fourOfAKind;
        cout << "You scored " << fourOfAKind << " points!" << endl;
    }
    if (selectScore == 9) // Full house, score 25
    {
        int FL1 = 0;
        int FL2 = 0;
        int FH2 = 0;
        int FH3 = 0;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                if ((diceValue[i] == j) && (FL1 == 0))
                {
                    FL1 = j;
                }
                else if ((diceValue[i] == j) && (diceValue[i] != FL1) && (FL2 == 0))
                {
                    FL2 = j;
                }
            }
        }
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == FL1)
            {
                FH2 += 1;
            }
            else if (diceValue[i] == FL2)
            {
                FH3 += 1;
            }
        }
        if (((FH2 == 3) && (FH3 == 2)) || ((FH2 == 2) && (FH3 == 3)))
        {
            fullHouse = 25;
        }
        lowerSectionTotal += fullHouse;
        cout << "You scored " << fullHouse << " points!" << endl;
    }
    if (selectScore == 10) // Small straight, number order of four
    {
        int TEMP = 4;
        int smallS[4];
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] < TEMP)
            {
                TEMP = diceValue[i];
            }
        }
        smallS[0] = TEMP;
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == smallS[0] + 1)
            {
                smallS[1] = diceValue[i];
            }
        }
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == smallS[1] + 1)
            {
                smallS[2] = diceValue[i];
            }
        }
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == smallS[2] + 1)
            {
                smallS[3] = diceValue[i];
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (smallS[i] == smallS[i - 1] + 1)
            {
                smallStraight = 30;
            }
        }
        lowerSectionTotal += smallStraight;
        cout << "You scored " << smallStraight << " points!" << endl;
    }
    if (selectScore == 11) // Large straight, number order of five
    {
        int TEMP = 3;
        int largeS[5];
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] < TEMP)
            {
                TEMP = diceValue[i];
            }
        }
        largeS[0] = TEMP;
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == largeS[0] + 1)
            {
                largeS[1] = diceValue[i];
            }
        }
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == largeS[1] + 1)
            {
                largeS[2] = diceValue[i];
            }
        }
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == largeS[2] + 1)
            {
                largeS[3] = diceValue[i];
            }
        }
        for (int i = 0; i < 5; i++)
        {
            if (diceValue[i] == largeS[3] + 1)
            {
                largeS[4] = diceValue[i];
            }
        }
        for (int i = 0; i < 4; i++)
        {
            if (largeS[i] == largeS[i - 1] + 1)
            {
                largeStraight = 40;
            }
        }
        lowerSectionTotal += largeStraight;
        cout << "You scored " << largeStraight << " points!" << endl;
    }
    if (selectScore == 12) // Yahtzee, 5 of a kind
    {
        if (diceValue[0] == diceValue[1] == diceValue[2] == diceValue[3] == diceValue[4])
        {
            yahtzee = 50;
        }
        lowerSectionTotal += yahtzee;
        cout << "You scored " << yahtzee << " points!" << endl;
    }
    if (selectScore == 13) // Chance, add up all dice
    {
        for (int i = 0; i < 5; i++)
        {
            chance += diceValue[i];
        }
        lowerSectionTotal += chance;
        cout << "You scored " << chance << " points!" << endl;
    }
}

void ScoreCard::displayScoreCard() {
    cout << "Upper Section:" << endl;
    cout << "(1) Aces: " << aces << endl;
    cout << "(2) Twos: " << twos << endl;
    cout << "(3) Threes: " << threes << endl;
    cout << "(4) Fours: " << fours << endl;
    cout << "(5) Fives: " << fives << endl;
    cout << "(6) Sixes: " << sixes << endl;
    cout << "Total Score: " << upperSectionTotal << endl;
    cout << "Bonus: " << upperBonus << endl;
    cout << "Total: " << upperSectionTotalBonus << endl;
    cout << " " << endl;
    cout << "Lower Section:" << endl;
    cout << "(7) 3 of a Kind: " << threeOfAKind << endl;
    cout << "(8) 4 of a Kind: " << fourOfAKind << endl;
    cout << "(9) Full House: " << fullHouse << endl;
    cout << "(10) Small Straight: " << smallStraight << endl;
    cout << "(11) Large Straight: " << largeStraight << endl;
    cout << "(12) Yahtzee: " << yahtzee << endl;
    cout << "(13) Chance: " << chance << endl;
    cout << "Total: " << lowerSectionTotal << endl;
    cout << "How would you like to score your roll?" << endl;
    cin >> selectScore;
}
