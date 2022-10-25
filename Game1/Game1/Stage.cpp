#include "Stage.h"
#include "CursorManager.h"
#include "SceneManager.h"

Stage::Stage()
{

}

Stage::~Stage()
{
	Release();
}

void Stage::Start()
{
	Info.Position = Vector3(57.0f, 15.0f, 0.0f);
	Info.Rotation = Vector3(0.0f, 0.0f, 0.0f);
	Info.Scale = Vector3(0.0f, 0.0f, 0.0f);
	color = 7;

	color2 = 0;
	Atari = 0;
	count = 0;
}

void Stage::Update()
{
	srand(time(NULL));
	if (GetAsyncKeyState(VK_RETURN))
	{
		Atari = rand() % 6 + 1;
		++count;
	}

	if (Atari == 5 || count == 6)
	{
		color = 0;
		color2 = 7;
		count == 6;
	}

	if (color2 == 7 && GetAsyncKeyState(VK_SPACE))
		SceneManager::GetInstance()->SetScene(MenuID);
	if (GetAsyncKeyState(VK_ESCAPE))
		SceneManager::GetInstance()->SetScene(ExitID);
}

void Stage::Render()
{
	
	
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, " $$$$$$#  $$$$\ $$$$# ", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 1, "$$  __$$# #____|#____|", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 2, "$$ |  #__|$$$$\ $$$$# ", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 3, "$$ |      #____|#____|", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 4, "$$ |                  ", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 5, "#__|                  ", color);


	CursorManager::Renderer(Info.Position.x, Info.Position.y + 6, "                             $$$$$$#  ", color2);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 7, "                            $$$ __$$# ", color2);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 8, " $$$$$$#  $$$$# $$$$#       $$$$# $$ |", color2);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 9, "$$  __$$# #____|#____|      $$#$$#$$ |", color2);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 10, "$$ |  #__|$$$$# $$$$#       $$ #$$$$ |", color2);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 11, "$$ |      #____|#____|      $$ |#$$$ |", color2);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 12, "$$ |                        #$$$$$$  /", color2);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 13, "#__|                         #______/ ", color2);
}

void Stage::Release()
{

}

