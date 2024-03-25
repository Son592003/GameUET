//
// Created by Administrator on 05/03/2024.
//

#ifndef PROJECT_NAME_GAMEMAP_H
#define PROJECT_NAME_GAMEMAP_H
#include "CommonFunc.h"
#include "BaseObject.h"
#define MAX_TILE 20
class TileMat : public BaseObject{
public:
    TileMat(){;}
    ~TileMat(){;}
};
class GameMap{
public:
    GameMap(){;}
    ~GameMap(){;}

    void LoadMap( char *name);
    void LoadTiles(SDL_Renderer* screen);
    void DrawMap(SDL_Renderer * screen);
    Map getMap() const {
        return game_map_;
    }
private:
    Map game_map_;
    TileMat tile_mat[MAX_TILE];
};
#endif //PROJECT_NAME_GAMEMAP_H
