#pragma once
#include "Headers.h"

// Manager(���� Ŭ����)�� ������ �����ڴ� �����ִ°��� ����.
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