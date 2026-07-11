#include "raylib.h"

int main() {

    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "DVD Bouncing Ball");

    SetTargetFPS(60);

    Vector2 ballPosition = {screenWidth / 2.0f, screenHeight / 2.0f};
    float ballRadius = 25.0f;

    float ballSpeedX = 5.0f;
    float ballSpeedY = 4.0f;

    while (!WindowShouldClose()) {

        ballPosition.x += ballSpeedX;
        ballPosition.y += ballSpeedY;

        if ((ballPosition.x + ballRadius >= screenWidth) || (ballPosition.x - ballRadius <= 0)) {
            ballSpeedX *= -1.0f;
        }

        if ((ballPosition.y + ballRadius >= screenHeight) || (ballPosition.y - ballRadius <= 0)) {
            ballSpeedY *= -1.0f;
        }

        BeginDrawing();

        ClearBackground(BLACK);

        DrawCircleV(ballPosition, ballRadius, VIOLET);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
