/*
* chapter 01
*/

// ** �⺻ �����
#include <stdio.h>

//  ** system �Լ�
#include <stdlib.h>

// ** input �� ������â�� ���� �Ҵ� ���Ǵ� ���̺귯��.
#include <Windows.h>

// �ڵ鸵.
// �ڵ��� ���� �����͸� �����ʴ´�,

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
	// ** ����

	
	// ** �ð� �Լ�.
	ULONGLONG Time = GetTickCount64(); // GetTickCount64()64bit�� ��ǻ�Ͱ� �����ķ� �ð��Լ�.
	// ** GetTickCount64() == 1/1000 �� = 0.001�� ����.
	// DWORD Time = GetTickCount(); <= 32bit����, ��ǻ�Ͱ� ���� �������� 49.7��(�ִ�) 
	// ULONGLONG > Unsigned longlong > 64bit ������ (8byte)
	Times time;

	time.hour = 0;
	time.minute = 0;
	time.second = 57;

	Menu tmenu;
	
	while (true)
	{

		// if Ư�� �̺�Ʈ�� �߻� �Ѵٸ�.....
		// else �ƴ϶��
		if (Time + 999 < GetTickCount64())
		{
			
			// ** ����
			Time = GetTickCount64();

			// ** ȭ���� �����ش�.
			system("cls");
			
			// ** ��ħ�� 60�� �Ǹ� ��ħ�� �ٽ� 0���� ����� ��ħ 1����
			if (time.second >= 59)
			{
				++time.minute;
				time.second = -1;
			}
			// ** ��ħ�� 60�� �Ǹ� ��ħ�� �ٽ� 0���� ����� �ð� 1����
			if (time.minute >= 60)
			{
				++time.hour;
				time.minute = 0;
			}
			// ** ��ħ�� 24�ð� �Ǹ� ��� �ð��� 0���� ����.
			if (time.hour >= 24)
			{
				time.hour = 0;
			}
			
			printf("%02dh %02dm %02ds",time.hour, time.minute, ++time.second);

		}

	}

	return 0;
}