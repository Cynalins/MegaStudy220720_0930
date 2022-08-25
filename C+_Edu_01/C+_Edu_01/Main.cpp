/*
* chapter 01
*/

// ** 기본 입출력
#include <stdio.h>

//  ** system 함수
#include <stdlib.h>

// ** input 및 윈도우창을 제어 할대 사용되는 라이브러리.
#include <Windows.h>

// 핸들링.
// 핸들은 보통 포인터를 쓰지않는다,

struct Student
{
	char* name;
	int kor;
	int eng;
	int math;
};

typedef struct Object
{
	Student std;
	int age;
	int number;
	int iClass;
}HOBJ;

struct Times
{
	char hour;
	char minute;
	char second;
};

struct Menu
{
	enum {
		tsHour,
		tsMinute
	};
};


int main()
{
	// ** 루프

	
	// ** 시간 함수.
	ULONGLONG Time = GetTickCount64(); // GetTickCount64()64bit형 컴퓨터가 켜진후로 시간함수.
	// ** GetTickCount64() == 1/1000 초 = 0.001초 단위.
	// DWORD Time = GetTickCount(); <= 32bit형태, 컴퓨터가 켜진 순간부터 49.7일(최대) 
	// ULONGLONG > Unsigned longlong > 64bit 정수형 (8byte)
	Times time;

	time.hour = 0;
	time.minute = 0;
	time.second = 57;

	Menu tmenu;
	
	while (true)
	{

		// if 특정 이벤트가 발생 한다면.....
		// else 아니라면
		if (Time + 999 < GetTickCount64())
		{
			
			// ** 루프
			Time = GetTickCount64();

			// ** 화면을 지워준다.
			system("cls");
			
			// ** 초침이 60이 되면 초침은 다시 0으로 만들고 분침 1증가
			if (time.second >= 59)
			{
				++time.minute;
				time.second = -1;
			}
			// ** 분침이 60이 되면 분침은 다시 0으로 만들고 시간 1증가
			if (time.minute >= 60)
			{
				++time.hour;
				time.minute = 0;
			}
			// ** 시침이 24시가 되면 모든 시간을 0으로 셋팅.
			if (time.hour >= 24)
			{
				time.hour = 0;
			}
			
			printf("%02dh %02dm %02ds",time.hour, time.minute, ++time.second);

		}

	}

	return 0;
}