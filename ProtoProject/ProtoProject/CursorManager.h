#pragma once
#include "Headers.h"

class CursorManager
{
public:
	static void Renderer(float _x, float _y, string _str, int color = 15)
	{
		COORD pos = { (SHORT)_x, (SHORT)_y };

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		SetColor(color);
		cout << _str;
	}


private:
	static void SetColor(int _Color)
	{
		SetConsoleTextAttribute(
			GetStdHandle(STD_OUTPUT_HANDLE), _Color);
	}
};