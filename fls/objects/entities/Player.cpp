//
// Created by 14794 on 11/28/2022.
//

#include "Player.h"

void Player::updateLocation() {}

void Player::draw() {
    Rectangle playerRect = {location.x, location.y, 50, 50};
    DrawRectangleRec(playerRect, BLUE);

}

Player::Player(float x, float y) {
    location.x = x;
    location.y = y;
}
