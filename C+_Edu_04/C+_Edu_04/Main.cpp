/*
* chapter 04
*/

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//** const
// ** ���ȭ
// const int NUMBER = 10;

// ** �浹ó��.
// ** ������ & ���������.
// ** ��� ���� (scene ��ȯ)
// ** ���� �Լ�.
// ** �Լ� ����.

struct Vector2
{
	int x, y;

	// ** ������ : �ʱ�ȭ�� �����־���Ѵ�.
	Vector2() : x(0), y(0)
	{
	}

	// ** ���� ������
	Vector2(int _x, int _y) : x(_x), y(_y)
	{
	}
};

struct Object
{
	Vector2 Position;
	Vector2 Scale;
	char* Texture;
};

bool Horzontal = false;
bool Vertical = false;

void SetCursorPosition(int _x, int _y);
void ShowCursor(bool _b);
void InputKey(Object* _Object);

int main(void)
{
	ShowCursor(false);

	ULONGLONG Time = GetTickCount64();
	ULONGLONG BulletDelay = GetTickCount64();

	bool gameFlag = false;

	// ** �÷��̾� �ʱ�ȭ
	Object Player;
	Player.Position = Vector2(int(120 * 0.3333f), 40 >> 1);
	Player.Texture = (char*)"��";
	Player.Scale = Vector2((int)strlen(Player.Texture), 1);

	// Player.Position.x = int(120 * 0.3333f);
	// Player.Position.y = 40 >> 1;

	
	// ** Texture�� ���̸� �̸� Ȯ���� �� ����.
	// ** Textrue�� ���� �ʱ�ȭ �ϰ� ���Ŀ� ����� �Ʒ��� ���� �ʱ�ȭ �Ѵ�.
	// Player.Scale.x = (int)strlen(Player.Texture);
	// Player.Scale.y = 1;


	// ** �� �ʱ�ȭ
	Object Enemy[128];

	bool ShowEnemy[128];

	for (int i = 0; i < 128; ++i)
	{
		srand(GetTickCount64() * GetTickCount64());
		Enemy[i].Position = Vector2(int(120 * 0.3333f * 2), rand() % 40 + 1);
		Enemy[i].Texture = (char*)"��";
		Enemy[i].Scale = Vector2((int)strlen(Enemy[i].Texture), 1);

		ShowEnemy[i] = false;
	}

	// Enemy.Position.x = int(120 * 0.3333f * 2);
	// Enemy.Position.y = 40 >> 1;
	// Enemy.Scale.x = (int)strlen(Enemy.Texture);
	// Enemy.Scale.y = 1;


	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			// ** progress
			InputKey(&Player);

			// ** =========== Render ===========



			// ** Player
			SetCursorPosition(Player.Position.x, Player.Position.y);

			printf("%s", Player.Texture);

			for (int i = 0; i < 128; ++i)
			{
				if (BulletDelay + 250 < GetTickCount64())
				{
					if (!ShowEnemy[i])
					{
						Enemy[i].Position.x = 118;
						Enemy[i].Position.y = rand() % 40;

						ShowEnemy[i] = true;

						BulletDelay = GetTickCount64();

						break;
					}
				}

			}

			for (int i = 0; i < 128; ++i)
			{
				if (ShowEnemy[i])
				{
					


				}

			}

			for (int i = 0; i < 128; ++i)
			{
				// ** Enemy
				SetCursorPosition(Enemy[i].Position.x, Enemy[i].Position.y);

				printf("%s", Enemy[i].Texture);

				if (Enemy[i].Position.x >= 0)
				{
					Enemy[i].Position.x--;
				}
				else
				{
					Enemy[i].Position.x = 120;
					Enemy[i].Position.y = rand() % 40 + 1;
				}

				// ** �浹
				if (Player.Position.x + 2 > Enemy[i].Position.x &&
					Enemy[i].Position.x + 2 > Player.Position.x &&
					Player.Position.y == Enemy[i].Position.y)
				{					
					gameFlag = true;
					break;
				}
			}
			if (gameFlag)
			{
				SetCursorPosition(120 >> 1, 10);
				printf("������");
				break;
			}
			
			

		}
	}

	return 0;
}

// ** Ŀ���� ��ġ�� �̵���Ų��.
void SetCursorPosition(int _x, int _y)
{
	// ** ��ǥ�� ����.
	COORD pos = { (SHORT)_x, (SHORT)_y };

	// ** ������ ��ǥ�� �̵���Ű�� �Լ�.
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos);
	// ** GetStdHandle(STD_OUTPUT_HANDLE) = ���� �ܼ�â�� �ڵ�.
	// ** HANDLE : ������ â�� �⺻ �������� ������ �� ����.
}

// ** Ŀ���� ���̰�/�Ⱥ��̰� �ϴ� �Լ�.
// ** true ���̰�, false �Ⱥ��̰�.
void ShowCursor(bool _b)
{
	// ** Ŀ���� �⺻������ �����Ѵ�.
	CONSOLE_CURSOR_INFO Info;

	// ** Ŀ���� �⺻������ �����Ѵ�.
	// ** Ŀ���� ���̰�/�Ⱥ��̰� �Ѵ�.
	Info.bVisible = _b;

	// ** Ŀ���� ũ�⸦ �����Ѵ�.
	Info.dwSize = 1;

	// ** Ŀ���� ������ �����Ű�� �Լ�.
	SetConsoleCursorInfo(
		GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

// ** �÷��̾��� Ű �Է��� �ް�, �Է¿� ���� Texture �� ���� �Ѵ�.
void InputKey(Object* _Object)
{
	if (GetAsyncKeyState(VK_UP) && !Horzontal)
	{
		if (_Object->Position.y > 0)
			_Object->Position.y--;

		_Object->Texture = (char*)"��";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_DOWN) && !Horzontal)
	{
		if (_Object->Position.y < 39)
			_Object->Position.y++;

		_Object->Texture = (char*)"��";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_LEFT) && !Vertical)
	{
		if (_Object->Position.x > 0)
			_Object->Position.x--;

		_Object->Texture = (char*)"��";
		Horzontal = true;
	}
	else
		Horzontal = false;

	if (GetAsyncKeyState(VK_RIGHT) && !Vertical)
	{
		if (_Object->Position.x < 118)
			_Object->Position.x++;

		_Object->Texture = (char*)"��";
		Horzontal = true;
	}
	else
		Horzontal = false;
}