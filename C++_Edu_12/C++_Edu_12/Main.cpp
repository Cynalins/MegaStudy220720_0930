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

			//ObectǮ �����Ͽ�.

		// ����ȭ
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