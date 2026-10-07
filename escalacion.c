#include "raylib.h"
#include <math.h>

int main(void)
{
    InitWindow(800, 450, "Escalación de una figura");
    SetTargetFPS(60);

    float tiempo = 0.0f;

    while (!WindowShouldClose())
    {
        tiempo += GetFrameTime();
        float escala = 1.0f + 0.35f * sinf(tiempo * 3.0f);
        int radio = (int)(70.0f * escala);

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircle(400, 225, radio, ORANGE);
        DrawText("Escalación", 20, 20, 28, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
