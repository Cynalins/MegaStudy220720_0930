/*
*  chapter 02
*/

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

struct Vector2
{
	int x, y;
	
};


void SetCursorPosition(int _x, int _y);
void ShowCursor(bool _b);
void InputKey(Vector2* _Position, char* _Texture);

bool horzontal;
bool vertical;

int main()
{
	// ** Ŀ���� �Ⱥ��̰� ������.
	ShowCursor(false);

	// ** �ð� ����(�ý����� �����ð�����)
	ULONGLONG time = GetTickCount64();

	// ** �÷��̾��� ��ǥ
	Vector2 PlayerPosition;
	PlayerPosition.x = 50;
	PlayerPosition.y = 15;

	// ** �÷��̾� �ؽ���
	char* Tex = (char*)"��";
	char* enemy = (char*)"��";

	// ** true / false ���߿� �ϳ��� ��ȯ.
	// ** Ű �Է��� Ⱦ �̵��϶��� Ȯ��
	

	// ** Ű �Է��� �� �̵��϶��� Ȯ��`
	


	while (true)
	{
		// ** 0.05�� ��������  
		if (time + 50 < GetTickCount64())
		{
			
			time = GetTickCount64();


			// ȭ�� Ŭ����
			system("cls");
			
			


			// ** Ű �Է�
			// GetAsyncKeyState() = Ű�Է� �Լ�
			 
			// ��Ȳ�� ���� ������ ��ȯ ��.
			// GetAsyncKeyState() = 0x0000 �� ��ȯ
			// GetAsyncKeyState() = 0x0001 �� ��ȯ
			// GetAsyncKeyState() = 0x8000 �� ��ȯ
			// GetAsyncKeyState() = 0x8001 �� ��ȯ
			
			// ** ���� 8 �� 0�� ����
			// 1 : ������ ������ ����.
			// 0 : ������ ������ ����.
			
			// ** ���� 0�� 1�� ����
			// 0 : ���� ������ ����.
			// 8 : ���� ����.
			 
			InputKey(&PlayerPosition, Tex);
			// printf("%x\n", GetAsyncKeyState(VK_UP) & 0x01);
			// ** �Ű������� Virtual Key�� �Է� �޴´�.
			
			SetCursorPosition(PlayerPosition.x, PlayerPosition.y);
			printf("%s", Tex);
			if (PlayerPosition.y <= 0 || PlayerPosition.y >= 29 || PlayerPosition.x <= 0 || PlayerPosition.x >= 98)
			{
				SetCursorPosition(PlayerPosition.x = 50, PlayerPosition.y = 15);
				system("cls");
				printf("������");
				break;
			}
			
		}

	}




	return 0;
}

// ** Ŀ���� ��ġ�� �̵���Ų��(�Լ�)
void SetCursorPosition(int _x, int _y)
{
	// ** ��ǥ�� ����.
	COORD pos = { (SHORT)_x, (SHORT)_y };

	// ** ������ ��ǥ�� �̵���Ű�� �Լ�.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	// ** GetStdHandle(STD_OUTPUT_HANDLE) = ���� �ܼ��� �ڵ�.
	// ** HANDLE : ������ â�� �⺻ �������� ������ �� ����.
}

// ** Ŀ���� ���̰� / �Ⱥ��̰� �ϴ� �Լ�
// ** true ���̰�, false �Ⱥ��̰�.
void ShowCursor(bool _b)
{
	// ** Ŀ���� �⺻������ �����Ѵ�.
	CONSOLE_CURSOR_INFO info;

	// ** Ŀ���� �⺻������ �����Ѵ�.
	// ** Ŀ���� ���̰� / �Ⱥ��̰� �Ѵ�.
	info.bVisible = _b;

	// ** Ŀ���� ũ�⸦ �����Ѵ�.
	info.dwSize = 1;

	// ** Ŀ���� ������ �����Ű�� �Լ�.
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

// ** �÷��̾��� Ű �Է��� �ް�, �Է¿� ���� texture�� �����Ѵ�.
void InputKey(Vector2* _Position, char* _Texture)
{
	// ** Ű �Է�
	// GetAsyncKeyState() = Ű�Է� �Լ�

	// ��Ȳ�� ���� ������ ��ȯ ��.
	// GetAsyncKeyState() = 0x0000 �� ��ȯ
	// GetAsyncKeyState() = 0x0001 �� ��ȯ
	// GetAsyncKeyState() = 0x8000 �� ��ȯ
	// GetAsyncKeyState() = 0x8001 �� ��ȯ

	// ** ���� 8 �� 0�� ����
	// 1 : ������ ������ ����.
	// 0 : ������ ������ ����.

	// ** ���� 0�� 1�� ����
	// 0 : ���� ������ ����.
	// 8 : ���� ����.


	// printf("%x\n", GetAsyncKeyState(VK_UP) & 0x01);
	// ** �Ű������� Virtual Key�� �Է� �޴´�.

	if (GetAsyncKeyState(VK_UP) && !horzontal) // �ѹ��� �Է� �ްԲ� ó�� & 0x01
	{
		// if( y > 0 )
		//	y--;
		// ** y��ǥ�� 0���� Ŭ��쿡�� �Է��� �޴´�.
		_Position->y--;
		_Texture = (char*)"��";
		vertical = true;
	}
	else
		vertical = false;
	if (GetAsyncKeyState(VK_DOWN) && !horzontal)
	{
		_Position->y++;
		_Texture = (char*)"��";
		vertical = true;
	}
	else
		vertical = false;
	if (GetAsyncKeyState(VK_LEFT) && !vertical)
	{
		_Position->x--;
		_Texture = (char*)"��";
		horzontal = true;
	}
	else
		horzontal = false;
	if (GetAsyncKeyState(VK_RIGHT) && !vertical)
	{
		_Position->x++;
		_Texture = (char*)"��";
		horzontal = true;
	}
	else
		horzontal = false;
}