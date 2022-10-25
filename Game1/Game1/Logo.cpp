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
	
	Info1.Position = Vector3(17.0f, 1.0f, 0.0f);
	Info1.Rotation = Vector3(0.0f, 0.0f, 0.0f);
	Info1.Scale = Vector3(0.0f, 0.0f, 0.0f);

	color1 = 2;

	Info2.Position = Vector3(48.0f, 31.0f, 0.0f);
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
			color1 = RouletteColor[0];
			color2 = BlackColors[0];
			break;
		case 1:
			color1 = RouletteColor[1];
			color2 = BlackColors[1];
			break;
		case 2:
			color1 = RouletteColor[2];
			color2 = BlackColors[2];
			break;
		case 3:
			color1 = RouletteColor[3];
			color2 = BlackColors[2];
			break;
		case 4:
			color1 = RouletteColor[2];
			color2 = BlackColors[1];
			break;
		case 5:
			color1 = RouletteColor[1];
			color2 = BlackColors[0];
			break;
		case 6:
			color1 = RouletteColor[0];
			break;
		default:
			switching = 0;
		}

	}


	if (GetAsyncKeyState(VK_RETURN))
		SceneManager::GetInstance()->SetScene(MenuID);

	if (GetAsyncKeyState(VK_ESCAPE))
		SceneManager::GetInstance()->SetScene(ExitID);
}

void Logo::Render()
{
#ifdef Debug
	CursorManager::Renderer(0, 0, "X : ");
	CursorManager::Renderer(4, 0, Info2.Position.x);
	CursorManager::Renderer(0, 1, "Y : ");
	CursorManager::Renderer(4, 1, Info2.Position.y);
#endif
	
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 0, " _____     _   _              _____				 ", color2);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 1, "| __  |_ _| |_| |_ ___ ___   |  _  |___ ___ ___ ___ ", color2);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 2, "| __ -| | |  _|  _| . |   |  |   __|  _| -_|_ -|_ -|", color2);
	CursorManager::Renderer(Info2.Position.x, Info2.Position.y + 3, "|_____|___|_| |_| |___|_|_|  |__|  |_| |___|___|___|", color2);
	

	
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 0 ,"________                                                                                                     ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 1 ,"`MMMMMMMb.                            68b                                                                    ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 2 ," MM    `Mb                            Y89                                                                    ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 3 ," MM     MM ___   ___   ____     ____  ___    ___   ___  __                                                   ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 4 ," MM     MM `MM    MM  6MMMMb#  6MMMMb#`MM  6MMMMb  `MM 6MMb                                                  ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 5 ," MM    .M9  MM    MM MM'    ` MM'    ` MM 8M'  `Mb  MMM9 `Mb                                                 ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 6 ," MMMMMMM9'  MM    MM YM.      YM.      MM     ,oMM  MM'   MM                                                 ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 7 ," MM  #M#    MM    MM  YMMMMb   YMMMMb  MM ,6MM9'MM  MM    MM                                                 ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 8 ," MM   #M#   MM    MM      `Mb      `Mb MM MM'   MM  MM    MM                                                 ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 9 ," MM    #M#  YM.   MM L    ,MM L    ,MM MM MM.  ,MM  MM    MM                                                 ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 10, "_MM_    #M#_ YMMM9MM_MYMMMM9  MYMMMM9 _MM_`YMMM9'Yb_MM_  _MM_                                                ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 11 , "                                                                                                             ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 12 , "                                                                                                             ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 13 , "                                                                                                             ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 14 , "                                                                                                             ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 15 , "                                                                                                             ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 16 , "                        ________      ____   ____     ______     __________ __________ __________ __________ ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 17 , "                        `MMMMMMMb.   6MMMMb  `MM'     `M`MM'     `MMMMMMMMM MMMMMMMMMM MMMMMMMMMM `MMMMMMMMM ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 18 , "                         MM    `Mb  8P    Y8  MM       M MM       MM      # /   MM   # /   MM   #  MM      # ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 19 , "                         MM     MM 6M      Mb MM       M MM       MM            MM         MM      MM        ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 20 , "                         MM     MM MM      MM MM       M MM       MM    ,       MM         MM      MM    ,   ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 21 , "                         MM    .M9 MM      MM MM       M MM       MMMMMMM       MM         MM      MMMMMMM   ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 22 , "                         MMMMMMM9' MM      MM MM       M MM       MM    `       MM         MM      MM    `   ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 23 , "                         MM  #M#   MM      MM MM       M MM       MM            MM         MM      MM        ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 24 , "                         MM   #M#  YM      M9 YM       M MM       MM            MM         MM      MM        ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 25 , "                         MM    #M#  8b    d8   8b     d8 MM    /  MM      /     MM         MM      MM      / ", color1);
	CursorManager::Renderer(Info1.Position.x, Info1.Position.y + 26 , "                        _MM_    #M#_ YMMMM9     YMMMMM9 _MMMMMMM _MMMMMMMMM    _MM_       _MM_    _MMMMMMMMM ", color1);
																	  

}

void Logo::Release()
{

}

