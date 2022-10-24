#include "Stage.h"
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
}

void Stage::Update()
{
	SceneManager::GetInstance()->SetScene(EXITID);
}

void Stage::Render()
{
	cout << "Stage" << endl;
}

void Stage::Release()
{
}

