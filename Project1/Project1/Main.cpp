#include "Headers.h"
#include "MainUpdate.h"

int main()
{
	MainUpdate Main;
	
	ULONGLONG time = GetTickCount64();

	Main.Start();

	while (true)
	{
		if (time < GetTickCount64())
		{
			time = GetTickCount64();

			Main.Update();
			Main.Render();
		}
	}


	return 0;
}