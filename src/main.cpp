#include "raylib.h"
#include "rlImGui.h"
#include "imgui.h"

#include "Room.h"
#include "Display.h"

void Init();
void Update();
void Display();
void Keys();

Room room;

int main() {
    Init();

    while (!WindowShouldClose())
    {
        Keys();
        Update();
        Display();
    }

    rlImGuiShutdown();
    CloseWindow();
}

void Init()
{
    InitWindow(1280, 720, "raylib + rlImGui");
    SetTargetFPS(60);

    rlImGuiSetup(true);

    room = Room("data/rooms/room00.txt");
}

void Update()
{

}

void Display()
{
    BeginDrawing();
    ClearBackground(DARKGRAY);

    DrawText("Game Running", 20, 20, 20, RAYWHITE);

    rlImGuiBegin();
    ImGui::Begin("Debug");
    ImGui::Text("ImGui works!");
    ImGui::End();
    rlImGuiEnd();

    DrawRoom(room.GetMap());

    EndDrawing();
}

void Keys()
{

}