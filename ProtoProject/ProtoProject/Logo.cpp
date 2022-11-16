#include "Logo.h"
#include "SceneManager.h"

Logo::Logo()
{
}

Logo::~Logo()
{
}

void Logo::Start()
{
	
}

void Logo::Update()
{
	cout << "LOGO" << endl;
	if(GetAsyncKeyState('A'))
		SceneManager::GetInstance()->SetScene(Scene_ID::MENUID);
}

void Logo::Render()
{
}

void Logo::Release()
{
}

