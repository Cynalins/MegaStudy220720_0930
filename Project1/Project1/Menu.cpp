#include "Menu.h"
#include "SceneManager.h"
#include "Player.h"

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
	cout << "플레이어 : " << & Player::Render << endl;
	cout << "Menu" << endl;
}

void Menu::Release()
{
}

