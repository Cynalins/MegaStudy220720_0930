#include "Child.h"
#include "SceneManager.h"

Child::Child()
{

}

Child::~Child()
{
	Release();
}

void Child::Start()
{

}

void Child::Update()
{
	if (GetAsyncKeyState(VK_RETURN))
		SceneManager::GetInstance()->SetScene(ExitID);
}

void Child::Render()
{

}

void Child::Release()
{

}

