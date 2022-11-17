#include "Stage.h"
#include "SceneManager.h"
#include "InputManager.h"
#include "CursorManager.h"
#include "Player.h"

Stage::Stage()
{
}

Stage::~Stage()
{
}

void Stage::Start()
{
	pPlayer = new Player;
	pPlayer->Start();
}

void Stage::Update()
{
	cout << "Stage" << endl;

	pPlayer->Update();
	
	
	/*
	if (GetAsyncKeyState(VK_RETURN))
		SceneManager::GetInstance()->SetScene(Scene_ID::EXITID);
	*/
}

void Stage::Render()
{
	pPlayer->Render();
	/*
	InputManager::GetInstance()->InputKey();
	name = InputManager::GetInstance()->GetwKey();

	cout << name << endl;
	*/
}

void Stage::Release()
{
}

