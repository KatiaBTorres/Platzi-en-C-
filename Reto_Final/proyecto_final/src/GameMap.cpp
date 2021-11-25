#include "GameMap.h"

#include <iostream>

using namespace std;

GameMap::GameMap()
{
    //ctor
}

void GameMap::Draw()
{
    for (int i = 0; i < 15; i++)
    {
        for (int p = 0; p < 10; p++)
        {
            cout << Zeldas[i][p].id;
        }

        cout << endl;
    }
}

void GameMap::setPlayerZelda(int PlayerX, int PlayerY)
{
    if (PlayerZelda != NULL)
    {
        PlayerZelda->id = 0;
    }

    PlayerZelda = &Zeldas[PlayerY][PlayerX];
    PlayerZelda->id = 3;

   // cout << "las cordenadas del jugador estan:" << PlayerX << ", " << PlayerY << endl;
}
