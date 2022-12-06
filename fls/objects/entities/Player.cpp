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
    Vector2 topLeft = {location.x - 25, location.y - 25};
    Vector2 topRight = {location.x + 25, location.y - 25};
    Rectangle playerRect = {location.x, location.y, 50, 50};
    Vector2 triangle = {mouseLocation.x - location.x, (mouseLocation.y - location.y) * -1};
    //std::cout << mouseLocation.x << " " << mouseLocation.y << std::endl;
    rotation = atan(triangle.x / triangle.y) * 180/M_PI;
    std::cout << rotation << std::endl;

    Vector2 topLeftPrime = {float(location.x * cos(rotation) - (-1 * location.y * sin(rotation))),
                            float(location.x * sin(rotation) + (-1 * location.y * cos(rotation)))};




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
