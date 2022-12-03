//
// Created by 14794 on 11/28/2022.
//

#include "Player.h"
#include "rlgl.h"
#include <cmath>
#include <iostream>

void Player::updateLocation() {}

void Player::draw() {
    Rectangle playerRect = {location.x, location.y, 50, 50};
    //rlTranslatef(location.x, location.y, 0);
    //rlRotatef(rotation, 0, 0, -1);
    DrawRectanglePro(playerRect, {0, 0}, 0, BLUE);
    DrawLineEx({location.x, location.y + 5}, {location.x + 50, location.y + 5}, 8, BLACK);

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
