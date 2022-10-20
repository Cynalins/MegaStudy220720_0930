#pragma once
#include "Headers.h"

// Manager(감독 클래스)는 무조건 생성자는 막아주는것이 좋다.
class CursorManager
{
public:
	static void Renderer(float _x, float _y, string _str, int _Color = 15)
	{
		COORD pos = { _x, _y };

		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		SetColor(_Color);
		cout << _str;
	}

private:
	void SetColor(int _Color)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _Color);
	}





private:
	CursorManager() {};
public:
	~CursorManager() {};
};