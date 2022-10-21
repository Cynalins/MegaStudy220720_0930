#pragma once
#include "Headers.h"

class CursorManager
{
public:
	static void Renderer(float _x, float _y, string _str, int _color = 15)
	{
		COORD pos = { (SHORT)_x, (SHORT)_y };
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		
		SetColor(_color);
		cout << _str;
	}

	static void Renderer(float _x, float _y, int _value, int _color = 15)
	{
		COORD pos = { (SHORT)_x, (SHORT)_y };
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		SetColor(_color);
		cout << _value;
	}
private:
	static void SetColor(int _color)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _color);
	}

private:
	CursorManager() {};
public:
	~CursorManager() {};
};