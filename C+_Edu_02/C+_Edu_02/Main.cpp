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
	// ** 커서를 안보이게 설정함.
	ShowCursor(false);

	// ** 시간 셋팅(시스템이 켜진시간부터)
	ULONGLONG time = GetTickCount64();

	// ** 플레이어의 좌표
	Vector2 PlayerPosition;
	PlayerPosition.x = 50;
	PlayerPosition.y = 15;

	// ** 플레이어 텍스쳐
	char* Tex = (char*)"△";
	char* enemy = (char*)"●";

	// ** true / false 둘중에 하나만 반환.
	// ** 키 입력이 횡 이동일때를 확인
	

	// ** 키 입력이 종 이동일때를 확인`
	


	while (true)
	{
		// ** 0.05초 간격으로  
		if (time + 50 < GetTickCount64())
		{
			
			time = GetTickCount64();


			// 화면 클리어
			system("cls");
			
			


			// ** 키 입력
			// GetAsyncKeyState() = 키입력 함수
			 
			// 상황에 따라서 다음을 반환 함.
			// GetAsyncKeyState() = 0x0000 를 반환
			// GetAsyncKeyState() = 0x0001 를 반환
			// GetAsyncKeyState() = 0x8000 를 반환
			// GetAsyncKeyState() = 0x8001 를 반환
			
			// ** 앞쪽 8 과 0의 차이
			// 1 : 이전에 눌린적 없음.
			// 0 : 이전에 눌린적 있음.
			
			// ** 뒤쪽 0과 1의 차이
			// 0 : 현재 눌리지 않음.
			// 8 : 현재 눌림.
			 
			InputKey(&PlayerPosition, Tex);
			// printf("%x\n", GetAsyncKeyState(VK_UP) & 0x01);
			// ** 매개변수로 Virtual Key를 입력 받는다.
			
			SetCursorPosition(PlayerPosition.x, PlayerPosition.y);
			printf("%s", Tex);
			if (PlayerPosition.y <= 0 || PlayerPosition.y >= 29 || PlayerPosition.x <= 0 || PlayerPosition.x >= 98)
			{
				SetCursorPosition(PlayerPosition.x = 50, PlayerPosition.y = 15);
				system("cls");
				printf("류다희");
				break;
			}
			
		}

	}




	return 0;
}

// ** 커서의 위치를 이동시킨다(함수)
void SetCursorPosition(int _x, int _y)
{
	// ** 좌표를 설정.
	COORD pos = { (SHORT)_x, (SHORT)_y };

	// ** 설정한 좌표로 이동시키는 함수.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	// ** GetStdHandle(STD_OUTPUT_HANDLE) = 현재 콘솔의 핸들.
	// ** HANDLE : 윈도우 창의 기본 설정값을 셋팅할 수 있음.
}

// ** 커서를 보이게 / 안보이게 하는 함수
// ** true 보이게, false 안보이게.
void ShowCursor(bool _b)
{
	// ** 커서의 기본정보를 생성한다.
	CONSOLE_CURSOR_INFO info;

	// ** 커서의 기본정보를 셋팅한다.
	// ** 커서를 보이게 / 안보이게 한다.
	info.bVisible = _b;

	// ** 커서의 크기를 설정한다.
	info.dwSize = 1;

	// ** 커서의 설정을 적용시키는 함수.
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

// ** 플레이어의 키 입력을 받고, 입력에 따라 texture를 변경한다.
void InputKey(Vector2* _Position, char* _Texture)
{
	// ** 키 입력
	// GetAsyncKeyState() = 키입력 함수

	// 상황에 따라서 다음을 반환 함.
	// GetAsyncKeyState() = 0x0000 를 반환
	// GetAsyncKeyState() = 0x0001 를 반환
	// GetAsyncKeyState() = 0x8000 를 반환
	// GetAsyncKeyState() = 0x8001 를 반환

	// ** 앞쪽 8 과 0의 차이
	// 1 : 이전에 눌린적 없음.
	// 0 : 이전에 눌린적 있음.

	// ** 뒤쪽 0과 1의 차이
	// 0 : 현재 눌리지 않음.
	// 8 : 현재 눌림.


	// printf("%x\n", GetAsyncKeyState(VK_UP) & 0x01);
	// ** 매개변수로 Virtual Key를 입력 받는다.

	if (GetAsyncKeyState(VK_UP) && !horzontal) // 한번만 입력 받게끔 처리 & 0x01
	{
		// if( y > 0 )
		//	y--;
		// ** y좌표가 0보다 클경우에만 입력을 받는다.
		_Position->y--;
		_Texture = (char*)"△";
		vertical = true;
	}
	else
		vertical = false;
	if (GetAsyncKeyState(VK_DOWN) && !horzontal)
	{
		_Position->y++;
		_Texture = (char*)"▽";
		vertical = true;
	}
	else
		vertical = false;
	if (GetAsyncKeyState(VK_LEFT) && !vertical)
	{
		_Position->x--;
		_Texture = (char*)"◁";
		horzontal = true;
	}
	else
		horzontal = false;
	if (GetAsyncKeyState(VK_RIGHT) && !vertical)
	{
		_Position->x++;
		_Texture = (char*)"▷";
		horzontal = true;
	}
	else
		horzontal = false;
}