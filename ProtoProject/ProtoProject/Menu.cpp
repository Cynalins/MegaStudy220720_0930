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
	cout << "Menu" << endl;
	if (GetAsyncKeyState(VK_RETURN))
		SceneManager::GetInstance()->SetScene(Scene_ID::STAGEID);
}

void Menu::Update()
{

}

void Menu::Render()
{

}

void Menu::Release()
{
}

