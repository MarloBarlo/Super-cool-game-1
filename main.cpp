#include "raylib.h"
#include "rlgl.h"
#include "raymath.h"
#include "fls/objects/Player.h"
int main() {

    // Variables
    //----------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    Camera2D camera = { 0 };
    camera.zoom = .75f;
    Player newbie = Player(500, 250);

    //----------------------------------------------------------------------------------

    // Setup
    //----------------------------------------------------------------------------------

    InitWindow(screenWidth, screenHeight, "super-cool-game-1");

    float P = 2.00;


    SetTargetFPS(60);

    //----------------------------------------------------------------------------------

    while (!WindowShouldClose())
    {
        // Update
        //----------------------------------------------------------------------------------
        if (IsKeyDown(KEY_D)) newbie.location.x += P;
        if (IsKeyDown(KEY_A)) newbie.location.x -= P;
        if (IsKeyDown(KEY_W)) newbie.location.y -= P;
        if (IsKeyDown(KEY_S)) newbie.location.y += P;
        if (IsKeyDown(KEY_LEFT_SHIFT)) P = 4;
        else P = 2.00;


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
        newbie.drawPlayer();
        EndMode2D();


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization

    CloseWindow();        // Close window and OpenGL context
}