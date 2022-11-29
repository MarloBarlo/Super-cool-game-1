#include "raylib.h"


int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "super-cool-game-1");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // Update
        //----------------------------------------------------------------------------------



        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();



        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization

    CloseWindow();        // Close window and OpenGL context
}