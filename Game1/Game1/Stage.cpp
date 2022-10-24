#include "Stage.h"
#include "CursorManager.h"

Stage::Stage()
{

}

Stage::~Stage()
{
	Release();
}

void Stage::Start()
{
	Info.Position = Vector3(30.0f, 20.0f, 0.0f);
	Info.Rotation = Vector3(0.0f, 0.0f, 0.0f);
	Info.Scale = Vector3(0.0f, 0.0f, 0.0f);
	color = 8;
}

void Stage::Update()
{
	srand(time(NULL));
	string ImageNumberList[4];
	
	
	for (int i = 0; i < 4; ++i)
	{
		int ImageNumber = rand() % 4;
		ImageNumberList[i] = ImageNumber;
		if (ImageNumber == 0)
			str = "<-";
		else if (ImageNumber == 1)
			str = "->";
		else if (ImageNumber == 2)
			str = "À§";
		else if (ImageNumber == 3)
			str = "¾Æ·¡";
	}

	if (GetAsyncKeyState(VK_LEFT))
		color = 0;
	if (GetAsyncKeyState(VK_RIGHT))
		color = 14;
}

void Stage::Render()
{
	
	
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 0, "      ¢¸		     ", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 1, "    ¢¸¢¸		     ", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 2, "  ¢¸¢¸¢¸¢¸¢¸¢¸¢¸¢¸", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 3, "¢¸¢¸¢¸¢¸¢¸¢¸¢¸¢¸¢¸", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 4, "  ¢¸¢¸¢¸¢¸¢¸¢¸¢¸¢¸", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 5, "	  ¢¸¢¸		     ", color);
	CursorManager::Renderer(Info.Position.x, Info.Position.y + 6, "	    ¢¸		     ", color);
}

void Stage::Release()
{

}

