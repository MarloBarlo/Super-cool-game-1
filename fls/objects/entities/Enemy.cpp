//
// Created by 14794 on 11/29/2022.
//

#include "Enemy.h"

void Enemy::draw() {
    Rectangle playerRect = {location.x, location.y, 50, 50};
    DrawRectangleRec(playerRect, RED);
}

void Enemy::updateLocation() {

}

Enemy::Enemy(float x, float y) {
    location.x = x;
    location.y = y;
}
