#include <stdio.h>
#include <Windows.h>

// ** �浹ó��.
// ** ������ & ���������.
// ** ��� ����(scene ��ȯ)
// ** �����Լ�
// ** �Լ� ����.

struct Vector2
{
	int x, y;
};

struct Object
{
	Vector2 Position;
	Vector2 Scale;
	char* Texture;
};

// ** true/false ���߿� �ϳ��� ��ȯ.
// ** Ű �Է��� Ⱦ �̵��϶��� Ȯ��.
bool Horzontal = false;

// ** Ű �Է��� �� �̵��϶��� Ȯ��.
bool Vertical = false;

void SetCursorPosition(int _x, int _y);
void ShowCursor(bool _b);
void InputKey(Object* _object);

int main(void)
{
	// ** Ŀ���� �Ⱥ��̰� ������.
	ShowCursor(false);

	// ** �ð� ����
	ULONGLONG Time = GetTickCount64();

	// ** �÷��̾� ��ǥ
	Object Player;
	Player.Position.x = 0;
	Player.Position.y = 0;

	Player.Scale.x = 2;
	Player.Scale.y = 1;


	// 128�� ���� ���� : 2�� n��, �ѹ��� ���� �� �ִ� ������ ���� ���� ���� �� ������ ã�ư�.

	// ** ������ �Ѿ��� �غ�(����)
	Object Bullet[128];

	// ** �Ѿ��� �߻� �Ǿ����� Ȯ���ϴ� �뵵.
	bool ShowBullet[128];

	// ** �Ѿ��� �������� ������ �ֱ� ����.
	ULONGLONG BulletDelay = GetTickCount64();

	for (int i = 0; i < 128; i++)
	{
		// ** srand = �����Լ� �ʱ�ȭ. 
		// ** ���� �ð��� �����Ͽ� �� �� ���� ������ �ʱ�ȭ.
		srand(GetTickCount64() * GetTickCount64());
		
		// ** rand() = ���� �Լ�.
		// ** rand() % 40 = 0 ~ 40������ ���� ��.
		Bullet[i].Position.x = 118; // x��ǥ
		Bullet[i].Position.y = rand() % 40; // y��ǥ
		Bullet[i].Texture = (char*)"*"; // �Ѿ� �׸�.
		Bullet[i].Scale.x = 1;
		Bullet[i].Scale.y = 1;

		ShowBullet[i] = false; // 
	}

	bool gameFlag = false;

	// ** �÷��̾� Texture
	Player.Texture = (char*)"��";

	// ** ����
	while (true)
	{
		// ** 0.05�� �������� �ݺ�
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			// ** ȭ�� Ŭ����
			system("cls");

			InputKey(&Player);

			SetCursorPosition(
				Player.Position.x,
				Player.Position.y);

			printf("%s", Player.Texture);

			


			/*
			* �Ѿ� ����.
			* 2.5�� �������� �Ѿ��� �����ϰ�, ���� �ϴ� �������� ���� ��Ȱ��ȭ �Ǿ��ִ� �Ѿ��� ã��
			* ��ǥ�� �����ϰ� , Ȱ��ȭ ���·� �����Ѵ�. �Ѿ��� 1�߸� ���� �� ���̹Ƿ� Ȱ��ȭ�� ������ �Ϸ�Ǹ�
			* ��� �ݺ����� Ż���Ѵ�.
			*/
			for (int i = 0; i < 128; i++)
			{
				// * �Ѿ��� 2.5�� ������ ������.
				if (BulletDelay + 2500 < GetTickCount64())
				{
					// if(ShowBullet[i] == false)
					// �Ѿ��� ��Ȱ��ȭ ���¶��.
					if (!ShowBullet[i])
					{
						// *�� ���� �Ǿ��ٸ� ��ǥ�� �ٽ� �ʱ�ȭ ���ش�.
						Bullet[i].Position.x = 118;
						Bullet[i].Position.y = rand() % 40;

						// * ���� ���¸� Ȱ��ȭ ���·� ���� �Ѵ�.
						ShowBullet[i] = true;

						// * �ð����� �� �ʱ�ȭ �Ѵ�.
						BulletDelay = GetTickCount64();

						// * �Ѿ��� 1���� Ȱ��ȭ �� ���̱� ������
						// * �ݺ����� ����������.
						break;
					}
				}	
			}

			for (int i = 0; i < 128; i++)
			{
				// if(ShowBullet[i] == true)
				// ** �Ѿ��� Ȱ��ȭ ���¶��.
				if (ShowBullet[i])
				{
					// * �Ѿ��� �̵�
					// ** �̵����� : ����
					Bullet[i].Position.x--;

					// ** �浹����.
					
					// ** ũ�Ⱚ�� �Բ� �����ؼ� ���� �浹�� ������ ��.
					if (Bullet[i].Position.x == Player.Position.x && Bullet[i].Position.y == Player.Position.y)
					{
					
						ShowBullet[i] = false;
						continue;
						
						//gameFlag = true;
						//break;
					}
					
					if (Bullet[i].Position.x <= 0)
					{
						ShowBullet[i] = false;
						continue;
					}
					// * �Ѿ��� �� ��ġ�� �׷��� �� �ֵ��� Ŀ���� �̵� ��Ų��.
					SetCursorPosition(Bullet[i].Position.x, Bullet[i].Position.y);

					// * �Ѿ��� �׸���.
					printf("%s", Bullet[i].Texture);

				}

			}
			if (gameFlag)
			{
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

	Info.dwSize = 1;


	SetConsoleCursorInfo(
		GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

void InputKey(Object* _object)
{
	if (GetAsyncKeyState(VK_UP) && !Horzontal)
	{
		if (_object->Position.y > 0)
			_object->Position.y--;

		_object->Texture = (char*)"��";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_DOWN) && !Horzontal)
	{
		if (_object->Position.y < 39)
			_object->Position.y++;

		_object->Texture = (char*)"��";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_LEFT) && !Vertical)
	{
		if (_object->Position.x  > 0)
			_object->Position.x--;

		_object->Texture = (char*)"��";
		Horzontal = true;
	}
	else
		Horzontal = false;

	if (GetAsyncKeyState(VK_RIGHT) && !Vertical)
	{
		// ** x��ǥ�� 118���� ���� ������ �Է��� �޴´�.
		if (_object->Position.x < 118)
			_object->Position.x++;

		_object->Texture = (char*)"��";
		Horzontal = true;
	}
	else
		Horzontal = false;
}