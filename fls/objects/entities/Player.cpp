//
// Created by 14794 on 11/28/2022.
//

#include "Player.h"
#include "rlgl.h"
#include <cmath>
#include <iostream>
#include <math.h>

void Player::updateLocation() {}

void Player::draw() {
    Vector2 topLeft = {location.x - 25, location.y - 25};
    Vector2 topRight = {location.x + 25, location.y - 25};




    Rectangle playerRect = {location.x, location.y, 50, 50};
    DrawRectanglePro(playerRect, {25, 25}, rotation, BLUE);

    Vector2 myMouse = GetMousePosition();
    std::cout << myMouse.x << " " << myMouse.y << std::endl;

}

Player::Player(float x, float y) {
    location.x = x;
    location.y = y;
}

int Player::checkRotation(Vector2 mouseLocation) {
    int deltaX = location.x - mouseLocation.x;
    int deltaY = location.y - mouseLocation.y;
    float rad = atan2(deltaY, deltaX);
    int deg = rad * (180 / M_PI);
    std::cout << deg << std::endl;

    return deg;
}
