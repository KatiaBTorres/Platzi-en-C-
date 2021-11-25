#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    x = 1;
    y = 1;
}

void Player::callInput()
{
    char userInput = ' ';

    cin >> userInput;

    switch (userInput)
    {
    case 'w':
        y += 1;
        break;

    case 's':
        y -= 1;
        break;

    case 'a':
        x -= 1;
        break;

    case 'd':
        x += 1;
        break;
    }
}
