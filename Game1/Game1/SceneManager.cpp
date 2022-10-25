#include "SceneManager.h"
#include "Logo.h"
#include "Menu.h"
#include "Stage.h"
#include "NormalStage.h"


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
		break;
	case EasyStageID:
		SceneState = new Stage;
		break;
	case NormalStageID:
		SceneState = new NormalStage;
		break;
	case ExitID:
		printf("���α׷��� �����մϴ�.");
		exit(NULL);
		break;
	}
	
	SceneState->Start();
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

}

