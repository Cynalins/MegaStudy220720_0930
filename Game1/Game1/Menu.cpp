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
    Info.Position = Vector3(15.0f, 15.0f, 0.0f);
    Info.Rotation = Vector3(0.0f, 0.0f, 0.0f);
    Info.Scale = Vector3(0.0f, 0.0f, 0.0f);
    color = 7;

    Info2.Position = Vector3(20.0f, 3.0f, 0.0f);
    Info2.Rotation = Vector3(0.0f, 0.0f, 0.0f);
    Info2.Scale = Vector3(0.0f, 0.0f, 0.0f);
    color2 = 12;
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
}

void Menu::Render()
{
#ifdef Debug
    CursorManager::Renderer(0, 0, "X : ");
    CursorManager::Renderer(4, 0, Info2.Position.x);
    CursorManager::Renderer(0, 1, "Y : ");
    CursorManager::Renderer(4, 1, Info2.Position.y);
#endif

CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 0, "$$$$$$$#  $$#   $$# $$#       $$#    $$$$$$$$#       $$#   $$# $$#  $$# $$#      $$# ", color2);
CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 1, "$$  __$$# $$ |  $$ |$$ |      $$ |   #__$$  __|      $$$#  $$ |$$ |  $$ |$$$#    $$$ |", color2);
CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 2, "$$ |  $$ |$$ |  $$ |$$ |      $$ |      $$ |         $$$$# $$ |$$ |  $$ |$$$$#  $$$$ |", color2);
CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 3, "$$$$$$$# |$$ |  $$ |$$ |      $$ |      $$ |         $$ $$#$$ |$$ |  $$ |$$#$$#$$ $$ |", color2);
CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 4, "$$  __$$# $$ |  $$ |$$ |      $$ |      $$ |         $$ #$$$$ |$$ |  $$ |$$ #$$$  $$ |", color2);
CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 5, "$$ |  $$ |$$ |  $$ |$$ |      $$ |      $$ |         $$ |#$$$ |$$ |  $$ |$$ |#$  /$$ |", color2);
CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 6, "$$$$$$$  |#$$$$$$  |$$$$$$$$# $$$$$$$$# $$ |         $$ | #$$ |#$$$$$$  |$$ | #_/ $$ |", color2);
CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 7, "#_______/  #______/ #________|#________|#__|         #__|  #__| #______/ #__|     #__|", color2);


CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "$$#            $$$$$$$#  $$#   $$# $$#       $$#       $$$$$$$$# $$$$$$$$#        $$$$$$#            ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 1, "#$$#           $$  __$$# $$ |  $$ |$$ |      $$ |      $$  _____|#__$$  __|      $$  __$$#           ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 2, " #$$#          $$ |  $$ |$$ |  $$ |$$ |      $$ |      $$ |         $$ |         $$ /  #__|          ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 3, "  #$$#         $$$$$$$# |$$ |  $$ |$$ |      $$ |      $$$$$#       $$ |         $$$$$$$#            ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 4, "  $$  |        $$  __$$# $$ |  $$ |$$ |      $$ |      $$  __|      $$ |         $$  __$$#           ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 5, " $$  /         $$ |  $$ |$$ |  $$ |$$ |      $$ |      $$ |         $$ |         $$ /  $$ |          ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 6, "$$  /          $$$$$$$  |#$$$$$$  |$$$$$$$$# $$$$$$$$# $$$$$$$$#    $$ |          $$$$$$  |          ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 7, "#__/           #_______/  #______/ #________|#________|#________|   #__|          #______/           ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 8, "                                                                                      ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 9, "                                                                                      ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 10, "                                                                                      ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 11, "$$#            $$$$$$$#  $$#   $$# $$#       $$#       $$$$$$$$# $$$$$$$$#         $$#    $$$$$$#    ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 12, "#$$#           $$  __$$# $$ |  $$ |$$ |      $$ |      $$  _____|#__$$  __|      $$$$ |  $$  __$$#   ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 13, " #$$#          $$ |  $$ |$$ |  $$ |$$ |      $$ |      $$ |         $$ |         #_$$ |  #__/  $$ |  ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 14, "  #$$#         $$$$$$$# |$$ |  $$ |$$ |      $$ |      $$$$$#       $$ |           $$ |   $$$$$$  |  ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 15, "  $$  |        $$  __$$# $$ |  $$ |$$ |      $$ |      $$  __|      $$ |           $$ |  $$  ____/   ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 16, " $$  /         $$ |  $$ |$$ |  $$ |$$ |      $$ |      $$ |         $$ |           $$ |  $$ |        ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 17, "$$  /          $$$$$$$  |#$$$$$$  |$$$$$$$$# $$$$$$$$# $$$$$$$$#    $$ |         $$$$$$# $$$$$$$$#   ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 18, "#__/           #_______/  #______/ #________|#________|#________|   #__|         #______|#________|  ", color);

   
}

void Menu::Release()
{

}

