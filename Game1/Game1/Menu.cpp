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
        SceneManager::GetInstance()->SetScene(EasyStageID);
    if (GetAsyncKeyState('2'))
        SceneManager::GetInstance()->SetScene(NormalStageID);
    if (GetAsyncKeyState('3'))
        SceneManager::GetInstance()->SetScene(HardStageID);
}

void Menu::Render()
{
#ifdef Debug
    CursorManager::Renderer(0, 0, "X : ");
    CursorManager::Renderer(4, 0, Info2.Position.x);
    CursorManager::Renderer(0, 1, "Y : ");
    CursorManager::Renderer(4, 1, Info2.Position.y);
#endif
    
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$$$$$$$#  $$$$$$#   $$$$$$#$$#     $$#                                          $$#     ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 1, "$$  _____|$$  __$$# $$  __$$#$$#   $$  |                                       $$$$ |    ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 2, "$$ |      $$ /  $$ |$$ /  #__#$$# $$  /                              $$#       #_$$ |    ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 3, "$$$$$#    $$$$$$$$ |#$$$$$$#  #$$$$  /                               #__|        $$ |    ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 4, "$$  __|   $$  __$$ | #____$$#  #$$  /                                            $$ |    ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 5, "$$ |      $$ |  $$ |$$#   $$ |  $$ |                                 $$#         $$ |    ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 6, "$$$$$$$$# $$ |  $$ |#$$$$$$  |  $$ |                                 #__|      $$$$$$#   ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 7, "#________|#__|  #__| #______/   #__|                                           #______|  ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 8, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 9, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 10, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 11, "$$#   $$#  $$$$$$#  $$$$$$$#  $$#      $$#  $$$$$$#  $$#                        $$$$$$#  ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 12, "$$$#  $$ |$$  __$$# $$  __$$# $$$#    $$$ |$$  __$$# $$ |                      $$  __$$# ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 13, "$$$$# $$ |$$ /  $$ |$$ |  $$ |$$$$#  $$$$ |$$ /  $$ |$$ |            $$#       #__/  $$ |", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 14, "$$ $$#$$ |$$ |  $$ |$$$$$$$  |$$#$$#$$ $$ |$$$$$$$$ |$$ |            #__|       $$$$$$  |", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 15, "$$ #$$$$ |$$ |  $$ |$$  __$$< $$ #$$$  $$ |$$  __$$ |$$ |                      $$  ____/ ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 16, "$$ |#$$$ |$$ |  $$ |$$ |  $$ |$$ |#$  /$$ |$$ |  $$ |$$ |            $$#       $$ |      ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 17, "$$ | #$$ | $$$$$$  |$$ |  $$ |$$ | #_/ $$ |$$ |  $$ |$$$$$$$$#       #__|      $$$$$$$$# ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 18, "#__|  #__| #______/ #__|  #__|#__|     #__|#__|  #__|#________|                #________|", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 19, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 20, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 21, "                                                                                         ", color);  
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 22, "$$#   $$#  $$$$$$#  $$$$$$$#  $$$$$$$#                                          $$$$$$#  ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 23, "$$ |  $$ |$$  __$$# $$  __$$# $$  __$$#                                        $$ ___$$# ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 24, "$$ |  $$ |$$ /  $$ |$$ |  $$ |$$ |  $$ |                             $$#       #_/   $$ |", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 25, "$$$$$$$$ |$$$$$$$$ |$$$$$$$  |$$ |  $$ |                             #__|        $$$$$ / ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 26, "$$  __$$ |$$  __$$ |$$  __$$< $$ |  $$ |                                       #___$$#   ", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 27, "$$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |                             $$#       $$#   $$ |", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 28, "$$ |  $$ |$$ |  $$ |$$ |  $$ |$$$$$$$  |                             #__|      #$$$$$$  |", color);
    CursorManager::Renderer(Info.Position.x, Info.Position.y + 29, "#__|  #__|#__|  #__|#__|  #__|#_______/                                         #______/ ", color);
}

void Menu::Release()
{

}

