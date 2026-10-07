#include "raylib.h"

int main(void)
{
    const int ancho = 800;
    const int alto = 450;

    InitWindow(ancho, alto, "Mi primera aplicación con Raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hola Mundo, desde Raylib", 300, 200, 30, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
