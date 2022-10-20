#include "Menu.h"
#include "ObjectManager.h"
#include "Child.h"


void Menu::Start()
{
	cout << "Menu" << endl;

	ObjectManager::GetInstance()->SetObjects(*(*Objects));

	for (int i = 0; i < EndID; ++i)
	{
		for (int j = 0; j < MaxID; ++i)
		{
			Objects[i][j] = new Child;
			Objects[i][j]->Start();
		}
	}
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

Menu::Menu()
{
}

Menu::~Menu()
{
}
