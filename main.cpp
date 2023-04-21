#include <iostream>
#include <cmath>
#include "raylib.h"
#include "rlgl.h"
#include "raymath.h"
#include "fls/objects/entities/Player.h"

int main() {

    // Variables
    //----------------------------------------------------------------------------------

    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "super-cool-game-1");
    Player newbie = Player(0, 0);
    Camera2D camera = {Vector2{ screenWidth/2.0f, screenHeight/2.0f }, 0, 0, 0, .50};
    Vector2 mouseLocation = GetScreenToWorld2D(GetMousePosition(), camera);


    //----------------------------------------------------------------------------------

    // Setup
    //----------------------------------------------------------------------------------

    InitWindow(screenWidth, screenHeight, "super-cool-game-1");
    SetTargetFPS(60);

    //----------------------------------------------------------------------------------

    while (!WindowShouldClose())
    {
        // Update
        //----------------------------------------------------------------------------------
        camera.target = newbie.location;
        mouseLocation = GetScreenToWorld2D(GetMousePosition(), camera);
        float wheel = GetMouseWheelMove();

        std::cout << newbie.speed << " " << newbie.stamina << std::endl;

        if (wheel != 0) {
            const float zoomIncrement = 0.125f;
            camera.zoom += (wheel*zoomIncrement);
            if (camera.zoom < zoomIncrement) camera.zoom = zoomIncrement;
        }

        if (IsKeyDown(KEY_D)) newbie.location.x += newbie.speed;
        if (IsKeyDown(KEY_A)) newbie.location.x -= newbie.speed;
        if (IsKeyDown(KEY_W)) newbie.location.y -= newbie.speed;
        if (IsKeyDown(KEY_S)) newbie.location.y += newbie.speed;
        if (IsKeyDown(KEY_LEFT_SHIFT) & (newbie.stamina > 0)) newbie.speed = 4.0, newbie.stamina -= .10;
        else newbie.speed = 2.0;
        if (!IsKeyDown(KEY_LEFT_SHIFT) & (newbie.stamina < 20)) newbie.stamina += .10;

        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
        ClearBackground(WHITE);
        BeginMode2D(camera);
        rlPushMatrix();
        rlTranslatef(0, 25*50, 0);
        rlRotatef(90, 1, 0, 0);
        DrawGrid(100, 50);
        rlPopMatrix();
        newbie.drawUpdate(mouseLocation);
        EndMode2D();


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    CloseWindow();        // Close window and OpenGL context
}
