//
// Created by 14794 on 11/28/2022.
//

#include "Player.h"
#include "rlgl.h"
#include <cmath>
#include <iostream>
#include <math.h>



void Player::drawUpdate(Vector2 mouseLocation) {
    Vector2 followPoint = {location.x, location.y};
    Rectangle playerRect = {location.x, location.y, 50, 50};
    std::cout << location.x << " " << location.y << std::endl;
    //std::cout << mouseLocation.x - location.x << " " << mouseLocation.y - location.y << std::endl;
    //std::cout << mouseLocation.x << " " << mouseLocation.y << std::endl;
    DrawRectanglePro(playerRect, {25, 25}, rotation, BLUE);
    //std::cout << mouseLocation.x << " " << mouseLocation.y << std::endl;
    //std::cout << location.x << " " << location.y << std::endl;
}

void Player::draw() {
    Vector2 topLeft = {location.x - 25, location.y - 25};
    Vector2 topRight = {location.x + 25, location.y - 25};
    Vector2 followPoint = {location.x, location.y};




    Rectangle playerRect = {location.x, location.y, 50, 50};
    DrawRectanglePro(playerRect, {25, 25}, rotation, BLUE);
    DrawRectanglePro({location.x - 25, location.y - 25, 50, 8}, {0, 0}, rotation, BLACK);
    //DrawLineEx(topLeft, topRight, 8, BLACK);
    std::cout << location.x << " " << location.y << std::endl;




}

Player::Player(float x, float y) {
    location.x = x;
    location.y = y;
}
