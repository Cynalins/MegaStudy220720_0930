#include <stdio.h>
#include <Windows.h>

// ** 충돌처리.
// ** 생성자 & 복사생성자.
// ** 장면 관리(scene 전환)
// ** 생성함수
// ** 함수 정리.

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

// ** true/false 둘중에 하나만 반환.
// ** 키 입력이 횡 이동일때를 확인.
bool Horzontal = false;

// ** 키 입력이 종 이동일때를 확인.
bool Vertical = false;

void SetCursorPosition(int _x, int _y);
void ShowCursor(bool _b);
void InputKey(Object* _object);

int main(void)
{
	// ** 커서를 안보이게 설정함.
	ShowCursor(false);

	// ** 시간 셋팅
	ULONGLONG Time = GetTickCount64();

	// ** 플레이어 좌표
	Object Player;
	Player.Position.x = 0;
	Player.Position.y = 0;

	Player.Scale.x = 2;
	Player.Scale.y = 1;


	// 128을 쓰는 이유 : 2의 n승, 한번에 담을 수 있는 공간을 먼저 만든 다음 그 값으로 찾아감.

	// ** 여분의 총알을 준비(생성)
	Object Bullet[128];

	// ** 총알이 발사 되었는지 확인하는 용도.
	bool ShowBullet[128];

	// ** 총알의 생성간의 간격을 주기 위함.
	ULONGLONG BulletDelay = GetTickCount64();

	for (int i = 0; i < 128; i++)
	{
		// ** srand = 랜덤함수 초기화. 
		// ** 현재 시간을 제곱하여 알 수 없는 값으로 초기화.
		srand(GetTickCount64() * GetTickCount64());
		
		// ** rand() = 랜덤 함수.
		// ** rand() % 40 = 0 ~ 40사이의 랜덤 값.
		Bullet[i].Position.x = 118; // x좌표
		Bullet[i].Position.y = rand() % 40; // y좌표
		Bullet[i].Texture = (char*)"*"; // 총알 그림.
		Bullet[i].Scale.x = 1;
		Bullet[i].Scale.y = 1;

		ShowBullet[i] = false; // 
	}

	bool gameFlag = false;

	// ** 플레이어 Texture
	Player.Texture = (char*)"△";

	// ** 루프
	while (true)
	{
		// ** 0.05초 간격으로 반복
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			// ** 화면 클리어
			system("cls");

			InputKey(&Player);

			SetCursorPosition(
				Player.Position.x,
				Player.Position.y);

			printf("%s", Player.Texture);

			


			/*
			* 총알 생성.
			* 2.5초 간격으로 총알을 생성하고, 생성 하는 과정에서 현재 비활성화 되어있는 총알을 찾아
			* 좌표를 수정하고 , 활성화 상태로 변경한다. 총알을 1발만 생성 할 것이므로 활성화로 변경이 완료되면
			* 즉시 반복문을 탈출한다.
			*/
			for (int i = 0; i < 128; i++)
			{
				// * 총알이 2.5초 단위로 생성됨.
				if (BulletDelay + 2500 < GetTickCount64())
				{
					// if(ShowBullet[i] == false)
					// 총알이 비활성화 상태라면.
					if (!ShowBullet[i])
					{
						// *재 생성 되었다면 좌표를 다시 초기화 해준다.
						Bullet[i].Position.x = 118;
						Bullet[i].Position.y = rand() % 40;

						// * 현재 상태를 활성화 상태로 변경 한다.
						ShowBullet[i] = true;

						// * 시간값을 재 초기화 한다.
						BulletDelay = GetTickCount64();

						// * 총알을 1개만 활성화 할 것이기 때문에
						// * 반복문을 빠져나간다.
						break;
					}
				}	
			}

			for (int i = 0; i < 128; i++)
			{
				// if(ShowBullet[i] == true)
				// ** 총알이 활성화 상태라면.
				if (ShowBullet[i])
				{
					// * 총알의 이동
					// ** 이동방향 : ←←←
					Bullet[i].Position.x--;

					// ** 충돌판정.
					
					// ** 크기값을 함께 설정해서 범위 충돌을 만들어야 함.
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
					// * 총알이 제 위치에 그려질 수 있도록 커서를 이동 시킨다.
					SetCursorPosition(Bullet[i].Position.x, Bullet[i].Position.y);

					// * 총알을 그린다.
					printf("%s", Bullet[i].Texture);

				}

			}
			if (gameFlag)
			{
				printf("류다희");
				break;
			}


		}
	}

	return 0;
}

// ** 커서의 위치를 이동시킨다.
void SetCursorPosition(int _x, int _y)
{
	// ** 좌표를 설정.
	COORD pos = { (SHORT)_x, (SHORT)_y };

	// ** 설정한 좌표로 이동시키는 함수.
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos);
	// ** GetStdHandle(STD_OUTPUT_HANDLE) = 현재 콘솔창의 핸들.
	// ** HANDLE : 윈도우 창의 기본 설정값을 셋팅할 수 있음.
}


// ** 커서를 보이게/안보이게 하는 함수.
// ** true 보이게, false 안보이게.
void ShowCursor(bool _b)
{
	// ** 커서의 기본정보를 생성한다.
	CONSOLE_CURSOR_INFO Info;

	// ** 커서의 기본정보를 셋팅한다.
	// ** 커서를 보이게/안보이게 한다.
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

		_object->Texture = (char*)"△";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_DOWN) && !Horzontal)
	{
		if (_object->Position.y < 39)
			_object->Position.y++;

		_object->Texture = (char*)"▽";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_LEFT) && !Vertical)
	{
		if (_object->Position.x  > 0)
			_object->Position.x--;

		_object->Texture = (char*)"◁";
		Horzontal = true;
	}
	else
		Horzontal = false;

	if (GetAsyncKeyState(VK_RIGHT) && !Vertical)
	{
		// ** x좌표가 118보다 작을 때에만 입력을 받는다.
		if (_object->Position.x < 118)
			_object->Position.x++;

		_object->Texture = (char*)"▷";
		Horzontal = true;
	}
	else
		Horzontal = false;
}