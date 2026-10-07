#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 500;

    InitWindow(screenWidth, screenHeight, "Ejemplo 1");

    SetTargetFPS(120);

    float rectWidth = 100.0f;
    float rectHeight = 100.0f;

    float rectPosX = 0.0f;
    float rectPosY = 0.0f;

    float rectSpeedX = 150.0f;
    float rectSpeedY = 20.0f;

    Color colores[4] = {
        BLACK,
        YELLOW,
        GREEN,
        PURPLE
    };

    int currentColor = 0;

    while (!WindowShouldClose())
    {
        float deltaTime = GetFrameTime();

        rectPosX += rectSpeedX * deltaTime;
        rectPosY += rectSpeedY * deltaTime;

        if (rectPosX >= (screenWidth - rectWidth))
        {
            rectPosX = screenWidth - rectWidth;
            rectSpeedX *= -1;
            currentColor++;
        }
        else if (rectPosX <= 0.0f)
        {
            rectPosX = 0.0f;
            rectSpeedX *= -1;
            currentColor++;
        }

        if (rectPosY >= (screenHeight - rectHeight))
        {
            rectPosY = screenHeight - rectHeight;
            rectSpeedY *= -1;
            currentColor++;
        }
        else if (rectPosY <= 0.0f)
        {
            rectPosY = 0.0f;
            rectSpeedY *= -1;
            currentColor++;
        }

        if (currentColor > 3)
        {
            currentColor = 0;
        }

        BeginDrawing();

        ClearBackground(WHITE);

        DrawRectangle(
            (int)rectPosX,
            (int)rectPosY,
            (int)rectWidth,
            (int)rectHeight,
            colores[currentColor]
        );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}