#include "raylib.h"
#include "rlgl.h"
#include "raymath.h"

int main() {

    // Variables
    //----------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    Camera2D camera = { 0 };
    camera.zoom = 0.5f;

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
            EndMode2D();


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization

    CloseWindow();        // Close window and OpenGL context
}