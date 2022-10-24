#include "Logo.h"
#include "SceneManager.h"

Logo::Logo()
{

}

Logo::~Logo()
{
	Release();
}

void Logo::Start()
{
	
}

void Logo::Update()
{
	cout << "Logo" << endl;
	SceneManager::GetInstance()->SetScene(MENUID);
}

void Logo::Render()
{
	
}

void Logo::Release()
{

}

