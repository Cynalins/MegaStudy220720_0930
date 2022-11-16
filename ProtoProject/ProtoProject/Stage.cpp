#include "Stage.h"
#include "SceneManager.h"

Stage::Stage()
{
}

Stage::~Stage()
{
}

void Stage::Start()
{
}

void Stage::Update()
{
	cout << "Stage" << endl;
	if (GetAsyncKeyState(VK_RETURN))
		SceneManager::GetInstance()->SetScene(Scene_ID::EXITID);
}

void Stage::Render()
{
}

void Stage::Release()
{
}

