

#ifndef SUPER_COOL_GAME_1_PLAYER_H
#define SUPER_COOL_GAME_1_PLAYER_H
#include "raylib.h"


//We plan to add more, but just for now I think we need to have the player with simple stuff.
class Player {
public:

    Player(float x, float y);
    Vector2 location;
    float speed = 2.0;
    float stamina = 20;
    double rotation = 0;

    void drawUpdate(Vector2 mouseLocation);

};


#endif //SUPER_COOL_GAME_1_PLAYER_H
