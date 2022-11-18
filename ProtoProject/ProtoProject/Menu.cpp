#include "Menu.h"
#include "SceneManager.h"

Menu::Menu()
{
}

Menu::~Menu()
{
	Release();
}

void Menu::Start()
{
	
}

void Menu::Update()
{
	cout << "Menu" << endl;
	if (GetAsyncKeyState('S'))
		SceneManager::GetInstance()->SetScene(Scene_ID::STAGEID);
}

void Menu::Render()
{

}

void Menu::Release()
{
}

