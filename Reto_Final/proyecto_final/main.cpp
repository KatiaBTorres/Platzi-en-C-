#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{
    bool isGameOver = false;
    GameMap Map;
    Player Hero;

    while (isGameOver == false)
    {
        // Aqui es el loop del juego
        Hero.callInput();

        //Actualizado de info del Player en el mapa
        Map.setPlayerZelda(Hero.x, Hero.y);

        //Aqui se dibuja el mapa
        Map.Draw();

    }



    return 0;
}
