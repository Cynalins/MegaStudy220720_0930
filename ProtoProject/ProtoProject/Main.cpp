#include "Headers.h"
#include "MainUpdate.h"
#include "DatatManager.h"

int main()
{
	MainUpdate Main;
	Main.Start();

	ULONGLONG Time = GetTickCount64();

	// ** 경로 저장
	DataManager::saveData("images\\background.png");

	while (true)
	{
		if (Time + 80 < GetTickCount64())
		{
			system("cls");

			

			DataManager::loadData(); 

			Main.Update();
			Main.Render();
		}
	}




	return 0;
}