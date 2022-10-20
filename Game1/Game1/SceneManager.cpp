#include "SceneManager.h"

SceneManager* SceneManager::Instance = nullptr;

SceneManager::SceneManager() : SceneState(nullptr)
{

}

SceneManager::~SceneManager()
{
	Release();
}

void SceneManager::SetScene(SceneID _SceneID)
{
	if (SceneState != nullptr)
	{
		delete SceneState;
		SceneState = nullptr;
	}

	switch (_SceneID)
	{
	case LogoID:
		SceneState = new Logo;
		break;
	case MenuID:
		SceneState = new Menu;
	case StageID:
		SceneState = new Stage;
	case ExitID:
		exit(NULL);
		break;
	}
	
}

void SceneManager::Update()
{
	SceneState
}

void SceneManager::Render()
{

}

void SceneManager::Release()
{

}

