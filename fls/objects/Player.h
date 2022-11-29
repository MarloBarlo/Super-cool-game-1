

#ifndef SUPER_COOL_GAME_1_PLAYER_H
#define SUPER_COOL_GAME_1_PLAYER_H
#include "raylib.h"



//We plan to add more, but just for now I think we need to have the player with simple stuff.
class Player {
private:
    Vector2 location;
public:
    Player(float x, float y);
    void updateLocation();
    void drawPlayer();


};


#endif //SUPER_COOL_GAME_1_PLAYER_H
