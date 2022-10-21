#include "Headers.h"
#include "MainUpdate.h"

int main()
{
	MainUpdate Main;

	Main.Start();

	ULONGLONG time = GetTickCount64();

	while (true)
	{
		if (time + 80 < GetTickCount64())
		{
			system("cls");

			time = GetTickCount64();


			Main.Update();
			Main.Render();
		}
	}


	return 0;
}

// ifdef, endif