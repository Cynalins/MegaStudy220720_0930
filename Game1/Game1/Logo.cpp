#include "Logo.h"
#include "CursorManager.h"
#include "SceneManager.h"
#include "Child.h"



Logo::Logo()
{

}

Logo::~Logo()
{
	Release();
}

void Logo::Start()
{
	
	
	Info1.Position = Vector3(19.0f, 8.0f, 0.0f);
	Info1.Rotation = Vector3(0.0f, 0.0f, 0.0f);
	Info1.Scale = Vector3(0.0f, 0.0f, 0.0f);
	color1 = 8;

	Info2.Position = Vector3(45.0f, 26.0f, 0.0f);
	Info2.Rotation = Vector3(0.0f, 0.0f, 0.0f);
	Info2.Scale = Vector3(0.0f, 0.0f, 0.0f);
	color2 = 0;
	switching = 0;
	DelayTime = 50;
	Time = GetTickCount64();

}

void Logo::Update()
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
	if (Time + DelayTime < GetTickCount64())
	{
		Time = GetTickCount64();

		++switching;
		switch (switching)
		{
		case 0:
			color2 = BlackColors[0];
			break;
		case 1:
			color2 = BlackColors[1];
			break;
		case 2:
			color2 = BlackColors[2];
			break;
			/*
		case 10:
			color2 = BlackColors[3];
			DelayTime = 1000;
			break;
		case 15:
			color2 = BlackColors[3];
			DelayTime = 150;
			break;
			*/
		case 3:
			color2 = BlackColors[2];
			break;
		case 4:
			color2 = BlackColors[1];
			break;
		case 5:
			color2 = BlackColors[0];
			break;
		default:
			switching = 0;
		}
	}

	if (GetAsyncKeyState(VK_RETURN))
		SceneManager::GetInstance()->SetScene(MenuID);
}

void Logo::Render()
{
#ifdef Debug
	CursorManager::Renderer(0, 0, "X : ");
	CursorManager::Renderer(4, 0, Info2.Position.x);
	CursorManager::Renderer(0, 1, "Y : ");
	CursorManager::Renderer(4, 1, Info2.Position.y);
#endif
	
	/*
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 0, "$$$$$$$#              $$#     $$#                               $$$$$$$#                                          ", color);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 1, "$$  __$$#             $$ |    $$ |                              $$  __$$#                                         ", color);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 2, "$$ |  $$ |$$#   $$# $$$$$$# $$$$$$#    $$$$$$#  $$$$$$$#        $$ |  $$ | $$$$$$#   $$$$$$#   $$$$$$$#  $$$$$$$# ", color);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 3, "$$$$$$$# |$$ |  $$ |#_$$  _|#_$$  _|  $$  __$$# $$  __$$#       $$$$$$$  |$$  __$$# $$  __$$# $$  _____|$$  _____|", color);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 4, "$$  __$$# $$ |  $$ |  $$ |    $$ |    $$ /  $$ |$$ |  $$ |      $$  ____/ $$ |  #__|$$$$$$$$ |#$$$$$$#  #$$$$$$#  ", color);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 5, "$$ |  $$ |$$ |  $$ |  $$ |$$# $$ |$$# $$ |  $$ |$$ |  $$ |      $$ |      $$ |      $$   ____| #____$$#  #____$$# ", color);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 6, "$$$$$$$  |#$$$$$$  |  #$$$$  |#$$$$  |#$$$$$$  |$$ |  $$ |      $$ |      $$ |      #$$$$$$$# $$$$$$$  |$$$$$$$  |", color);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 7, "#_______/  #______/    #____/  #____/  #______/ #__|  #__|      #__|      #__|       #_______|#_______/ #_______/ ", color);
	
	*/
	
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 0, " _____     _   _              _____				 ", color2);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 1, "| __  |_ _| |_| |_ ___ ___   |  _  |___ ___ ___ ___ ", color2);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 2, "| __ -| | |  _|  _| . |   |  |   __|  _| -_|_ -|_ -|", color2);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 3, "|_____|___|_| |_| |___|_|_|  |__|  |_| |___|___|___|", color2);
	

	/*
	if(GetAsyncKeyState(VK_RETURN))
		SceneState
	*/
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 0, " $$$$$$#                                           $$$$$$#    $$#                                   $$#"     , color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 1, "$$  __$$#                                         $$  __$$#   $$ |                                  $$ |"    , color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 2, "$$ /  #__| $$$$$$#  $$$$$$#$$$$#   $$$$$$#        $$ /  #__|$$$$$$#    $$$$$$#  $$$$$$#   $$$$$$# $$$$$$#"   , color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 3, "$$ |$$$$#  #____$$# $$  _$$  _$$# $$  __$$#       #$$$$$$#  #_$$  _|  $$  __$$# #____$$# $$  __$$##_$$  _|"  , color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 4, "$$ |#_$$ | $$$$$$$ |$$ / $$ / $$ |$$$$$$$$ |       #____$$#   $$ |    $$ |  #__|$$$$$$$ |$$ |  #__| $$ |"    , color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 5, "$$ |  $$ |$$  __$$ |$$ | $$ | $$ |$$   ____|      $$#   $$ |  $$ |$$# $$ |     $$  __$$ |$$ |       $$ |$$#" , color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 6, "#$$$$$$  |#$$$$$$$ |$$ | $$ | $$ |#$$$$$$$#       #$$$$$$  |  #$$$$  |$$ |     #$$$$$$$ |$$ |       #$$$$  |", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 7, " #______/  #_______|#__| #__| #__| #_______|       #______/    #____/ #__|      #_______|#__|        #____/ ", color1);
}

void Logo::Release()
{

}

