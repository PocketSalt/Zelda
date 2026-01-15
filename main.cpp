#include "raylib.h"
#include "rlImGui.h"
#include "imgui.h"

int main() {
    InitWindow(1280, 720, "raylib + rlImGui");
    SetTargetFPS(60);

    rlImGuiSetup(true);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(DARKGRAY);

        DrawText("Game Running", 20, 20, 20, RAYWHITE);

        rlImGuiBegin();
        ImGui::Begin("Debug");
        ImGui::Text("ImGui works!");
        ImGui::End();
        rlImGuiEnd();

        EndDrawing();
    }

    rlImGuiShutdown();
    CloseWindow();
}
