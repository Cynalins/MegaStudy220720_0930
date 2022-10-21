#include "Menu.h"
#include "CursorManager.h"
#include "SceneManager.h"

Menu::Menu()
{

}

Menu::~Menu()
{
	
}

void Menu::Start()
{
    Info.Position = Vector3(20.0f, 10.0f, 0.0f);
    Info.Rotation = Vector3(0.0f, 0.0f, 0.0f);
    Info.Scale = Vector3(0.0f, 0.0f, 0.0f);
    color = 8;
}

void Menu::Update()
{
#ifdef Debug
    if (GetAsyncKeyState(VK_UP))
        Info2.Position.y--;
    if (GetAsyncKeyState(VK_DOWN))
        Info2.Position.y++;
    if (GetAsyncKeyState(VK_LEFT))
        Info2.Position.x--;
    if (GetAsyncKeyState(VK_RIGHT))
        Info2.Position.x++;
#endif
    if (GetAsyncKeyState('1'))
        SceneManager::GetInstance()->SetScene(StageID);
}

void Menu::Render()
{
#ifdef Debug
    CursorManager::Renderer(0, 0, "X : ");
    CursorManager::Renderer(4, 0, Info2.Position.x);
    CursorManager::Renderer(0, 1, "Y : ");
    CursorManager::Renderer(4, 1, Info2.Position.y);
#endif
    
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$$$$$$$\  $$$$$$\   $$$$$$\$$\     $$\                                          $$\     ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$  _____|$$  __$$\ $$  __$$\$$\   $$  |                                       $$$$ |    ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$ |      $$ /  $$ |$$ /  \__\$$\ $$  /                              $$\       \_$$ |    ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$$$$\    $$$$$$$$ |\$$$$$$\  \$$$$  /                               \__|        $$ |    ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$  __|   $$  __$$ | \____$$\  \$$  /                                            $$ |    ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$ |      $$ |  $$ |$$\   $$ |  $$ |                                 $$\         $$ |    ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$$$$$$$\ $$ |  $$ |\$$$$$$  |  $$ |                                 \__|      $$$$$$\   ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "\________|\__|  \__| \______/   \__|                                           \______|  ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$\   $$\  $$$$$$\  $$$$$$$\  $$\      $$\  $$$$$$\  $$\                        $$$$$$\  ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$$\  $$ |$$  __$$\ $$  __$$\ $$$\    $$$ |$$  __$$\ $$ |                      $$  __$$\ ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$$$\ $$ |$$ /  $$ |$$ |  $$ |$$$$\  $$$$ |$$ /  $$ |$$ |            $$\       \__/  $$ |", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$ $$\$$ |$$ |  $$ |$$$$$$$  |$$\$$\$$ $$ |$$$$$$$$ |$$ |            \__|       $$$$$$  |", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$ \$$$$ |$$ |  $$ |$$  __$$< $$ \$$$  $$ |$$  __$$ |$$ |                      $$  ____/ ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$ |\$$$ |$$ |  $$ |$$ |  $$ |$$ |\$  /$$ |$$ |  $$ |$$ |            $$\       $$ |      ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$ | \$$ | $$$$$$  |$$ |  $$ |$$ | \_/ $$ |$$ |  $$ |$$$$$$$$\       \__|      $$$$$$$$\ ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "\__|  \__| \______/ \__|  \__|\__|     \__|\__|  \__|\________|                \________|", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$\   $$\  $$$$$$\  $$$$$$$\  $$$$$$$\                                          $$$$$$\  ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$ |  $$ |$$  __$$\ $$  __$$\ $$  __$$\                                        $$ ___$$\ ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$ |  $$ |$$ /  $$ |$$ |  $$ |$$ |  $$ |                             $$\       \_/   $$ |", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$$$$$$$ |$$$$$$$$ |$$$$$$$  |$$ |  $$ |                             \__|        $$$$$ / ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$  __$$ |$$  __$$ |$$  __$$< $$ |  $$ |                                       \___$$\   ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |                             $$\       $$\   $$ |", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$ |  $$ |$$ |  $$ |$$ |  $$ |$$$$$$$  |                             \__|      \$$$$$$  |", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "\__|  \__|\__|  \__|\__|  \__|\_______/                                         \______/ ", color);
}

void Menu::Release()
{

}

