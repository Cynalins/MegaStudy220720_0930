#include "SceneManager.h"
#include "Logo.h"
#include "Menu.h"
#include "Stage.h"

SceneManager* SceneManager::Instance = nullptr;

SceneManager::SceneManager() : SceneState(nullptr)
{
}

SceneManager::~SceneManager()
{
	Release();
}

void SceneManager::SetScene(Scene_ID id)
{
	if (SceneState != nullptr)
		::Safe_Release(SceneState);
	
	switch (id)
	{
	case Scene_ID::LOGOID:
		SceneState = new Logo;
		break;
	case Scene_ID::MENUID:
		SceneState = new Menu;
		break;
	case Scene_ID::STAGEID:
		SceneState = new Stage;
		break;
	case Scene_ID::EXITID:
		exit(0);
		break;
	}
}

void SceneManager::Update()
{
	SceneState->Update();
}

void SceneManager::Render()
{
	SceneState->Render();
}

void SceneManager::Release()
{
	SceneState->Release();
}

