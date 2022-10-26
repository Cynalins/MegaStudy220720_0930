#include "ShootStage.h"
#include "CursorManager.h"
#include "SceneManager.h"

ShootStage::ShootStage()
{

}

ShootStage::~ShootStage()
{
	Release();
}

void ShootStage::Start()
{
	Info.Position = Vector3(57.0f, 15.0f, 0.0f);
	Info.Rotation = Vector3(0.0f, 0.0f, 0.0f);
	Info.Scale = Vector3(0.0f, 0.0f, 0.0f);
	color = 7;

	switching = 0;
	time = 
}

void ShootStage::Update()
{
	switch(switching)

	if (GetAsyncKeyState(VK_SPACE))
		SceneManager::GetInstance()->SetScene(MenuID);
	if (GetAsyncKeyState(VK_ESCAPE))
		SceneManager::GetInstance()->SetScene(ExitID);
}

void ShootStage::Render()
{
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 6, "                             $$$$$$#  ", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 7, "                            $$$ __$$# ", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 8, " $$$$$$#  $$$$# $$$$#       $$$$# $$ |", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 9, "$$  __$$# #____|#____|      $$#$$#$$ |", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 10, "$$ |  #__|$$$$# $$$$#       $$ #$$$$ |", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 11, "$$ |      #____|#____|      $$ |#$$$ |", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 12, "$$ |                        #$$$$$$  /", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 13, "#__|                         #______/ ", color);

}

void ShootStage::Release()
{

}

