#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "Traslacion diagonal");

    SetTargetFPS(60);

    Vector2 posicion = {100.0f, 100.0f};

    Vector2 velocidad = {200.0f, 150.0f};
    float radio = 30.0f;

    while (!WindowShouldClose())
    {

        float dt = GetFrameTime();

        posicion.x += velocidad.x * dt;
        posicion.y += velocidad.y * dt;

        if (posicion.x - radio <= 0 || posicion.x + radio >= 800)
        {
            velocidad.x *= -1;
        }

        if (posicion.y - radio <= 0 || posicion.y + radio >= 450)
        {
            velocidad.y *= -1;
        }

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Traslacion diagonal", 20, 20, 28, DARKGRAY);

        DrawCircleV(posicion, radio, RED);

        DrawText(TextFormat("X: %.1f  Y: %.1f", posicion.x, posicion.y),
                20, 60, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}