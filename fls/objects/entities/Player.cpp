//
// Created by 14794 on 11/28/2022.
//

#include "Player.h"
#include "rlgl.h"
#include <cmath>
#include <iostream>
#include <math.h>



void Player::drawUpdate(Vector2 mouseLocation) {


    Rectangle playerRect = {location.x, location.y, 50, 50};
    Vector2 triangle = {mouseLocation.x - location.x, (mouseLocation.y - location.y) * -1};
    rotation = atan(triangle.x / triangle.y) * 180/M_PI;
    DrawRectanglePro(playerRect, {25, 25}, rotation, BLUE);

}


Player::Player(float x, float y) {
    location.x = x;
    location.y = y;
}
