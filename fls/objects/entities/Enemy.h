#ifndef SUPER_COOL_GAME_1_ENEMY_H
#define SUPER_COOL_GAME_1_ENEMY_H


#include "raylib.h"

class Enemy {
public:
    Enemy(float x, float y);
    void updateLocation();
    void draw();
    Vector2 location{};
};


#endif //SUPER_COOL_GAME_1_ENEMY_H
