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
	SceneManager::GetInstance()->SetScene(STAGEID);
}

void Menu::Render()
{
	cout << "Menu" << endl;
}

void Menu::Release()
{
}

