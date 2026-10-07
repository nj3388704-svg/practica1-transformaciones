#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "Rotación de una figura");
    SetTargetFPS(60);

    float angulo = 0.0f;
    const Rectangle rectangulo = {300.0f, 180.0f, 200.0f, 90.0f};
    const Vector2 origen = {100.0f, 45.0f};

    while (!WindowShouldClose())
    {
        angulo += 60.0f * GetFrameTime();

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectanglePro(rectangulo, origen, angulo, GREEN);
        DrawText("Rotación alrededor del centro", 20, 20, 24, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
