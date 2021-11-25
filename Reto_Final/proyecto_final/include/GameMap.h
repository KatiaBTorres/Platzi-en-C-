#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap
{
    public:
        GameMap();

        MapCell* PlayerZelda;
        MapCell Zeldas[15][10];

        void Draw();

        //obtener la pocision del player y actualizar en el mapa
        void setPlayerZelda(int PlayereX, int PlayerY);


    protected:
    private:
};

#endif // GAMEMAP_H
