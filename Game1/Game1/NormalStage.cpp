#include "NormalStage.h"
#include "CursorManager.h"
#include "SceneManager.h"

NormalStage::NormalStage()
{

}

NormalStage::~NormalStage()
{
	Release();
}

void NormalStage::Start()
{
    Info.Position = Vector3(57.0f, 15.0f, 0.0f);
    Info.Rotation = Vector3(0.0f, 0.0f, 0.0f);
    Info.Scale = Vector3(0.0f, 0.0f, 0.0f);
    color = 7;

    color2 = 0;
    Atari = 0;
    count = 0;
    
}

void NormalStage::Update()
{
#ifdef Debug
    if (GetAsyncKeyState(VK_UP))
        Info.Position.y--;
    if (GetAsyncKeyState(VK_DOWN))
        Info.Position.y++;
    if (GetAsyncKeyState(VK_LEFT))
        Info.Position.x--;
    if (GetAsyncKeyState(VK_RIGHT))
        Info.Position.x++;
#endif
    srand(time(NULL));
    if (GetAsyncKeyState(VK_RETURN))
    {
        Atari = rand() % 12 + 1;
        ++count;
    }

    if (Atari == 5 || count == 12)
    {
        color = 0;
        color2 = 7;
        count == 12;
    }      

    if (color2 == 7 && GetAsyncKeyState(VK_SPACE))
        SceneManager::GetInstance()->SetScene(MenuID);
    if (GetAsyncKeyState(VK_ESCAPE))
        SceneManager::GetInstance()->SetScene(ExitID);

}

void NormalStage::Render()
{
#ifdef Debug
    CursorManager::Renderer(0, 0, "X : ");
    CursorManager::Renderer(4, 0, Info.Position.x);
    CursorManager::Renderer(0, 1, "Y : ");
    CursorManager::Renderer(4, 1, Info.Position.y);
#endif
CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, " $$$$$$#  $$$$\ $$$$# ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 1, "$$  __$$# #____|#____|", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 2, "$$ |  #__|$$$$\ $$$$# ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 3, "$$ |      #____|#____|", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 4, "$$ |                  ", color);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 5, "#__|                  ", color);


CursorManager::Renderer(Info.Position.x, Info.Position.y + 6, "                             $$$$$$#  ",color2);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 7, "                            $$$ __$$# ",color2);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 8, " $$$$$$#  $$$$# $$$$#       $$$$# $$ |",color2);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 9, "$$  __$$# #____|#____|      $$#$$#$$ |",color2);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 10, "$$ |  #__|$$$$# $$$$#       $$ #$$$$ |",color2);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 11, "$$ |      #____|#____|      $$ |#$$$ |",color2);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 12, "$$ |                        #$$$$$$  /",color2);
CursorManager::Renderer(Info.Position.x, Info.Position.y + 13, "#__|                         #______/ ",color2);

}

void NormalStage::Release()
{

}

