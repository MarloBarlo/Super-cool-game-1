#include "raylib.h"
#include "rlgl.h"
#include "raymath.h"
#include "fls/objects/entities/Player.h"

int main() {

    // Variables
    //----------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    Camera2D camera = { 0 };
    camera.zoom = .50f;
    Player newbie = Player(500, 250);

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
        if (IsKeyDown(KEY_D)) newbie.location.x += newbie.speed;
        if (IsKeyDown(KEY_A)) newbie.location.x -= newbie.speed;
        if (IsKeyDown(KEY_W)) newbie.location.y -= newbie.speed;
        if (IsKeyDown(KEY_S)) newbie.location.y += newbie.speed;
        if (IsKeyDown(KEY_LEFT_SHIFT)) newbie.speed = 4.0, newbie.stamina -= .10;
        else newbie.speed = 2.0;
        if (newbie.stamina <= 0) newbie.speed = 2.0;






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
        newbie.draw();
        EndMode2D();


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization

    CloseWindow();        // Close window and OpenGL context
}