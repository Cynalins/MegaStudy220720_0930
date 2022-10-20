#include "Headers.h"

int main()
{

	ULONGLONG Time = GetTickCount64();

	while (true)
	{
		if (Time < GetTickCount64())
		{
			system("cls");

			Time = GetTickCount64();
		}

			//Obect풀 에관하여.

		// 정적화
			/*
		else
		{
			if ()
			{

			}
		}
			*/
	}


	return 0;
}