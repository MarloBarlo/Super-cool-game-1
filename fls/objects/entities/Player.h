

#ifndef SUPER_COOL_GAME_1_PLAYER_H
#define SUPER_COOL_GAME_1_PLAYER_H
#include "raylib.h"



//We plan to add more, but just for now I think we need to have the player with simple stuff.
class Player {
public:
    Player(float x, float y);
    void updateLocation();
    void draw();
    Vector2 location;
    float speed = 2.0;
    float stamina = 20;

    int checkRotation(Vector2 mouseLocation);

    int rotation;
};


#endif //SUPER_COOL_GAME_1_PLAYER_H
