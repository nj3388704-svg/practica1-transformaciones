#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "Figuras geométricas");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawCircle(150, 150, 60, SKYBLUE);
        DrawRectangle(280, 100, 140, 100, LIME);
        DrawLine(500, 100, 650, 200, RED);
        DrawTriangle(
            (Vector2){600, 320},
            (Vector2){500, 400},
            (Vector2){700, 400},
            PURPLE
        );
        DrawText("Primitivas 2D", 20, 20, 28, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
