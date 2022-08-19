/*
* chapter 14
*/

#include <stdio.h>
#include <stdlib.h>

// ** 열거형 : 정수, 상수 => 정수형이면서 상수형이어야하는 곳에 전부 사용가능.
enum{
	AAA, // 0
	BBB, // 1
	CCC, // 2
	DDD, // 3
	EEE = 10, // 10
	FFF  // 11
};

int main()
{
	/*
	{
		int num = 0;
		
		switch (num)
		{
		case AAA:
			printf("아");
			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;

		}
	}
	
	{
		struct Object
		{
			char* name;
			int lev;
		};

		// **열거형의 이름을 붙임.
		enum ObjectID
		{
			PLAYER,
			ENEMY,
			BULLET,
			BOSS,
			ITEM,
			MAX
		};
		Object objectList[MAX];

		objectList[PLAYER].name = (char*)"홍길동";
		objectList[PLAYER].lev = 60;

		objectList[ENEMY].name = (char*)"Enemy";
		objectList[ENEMY].lev = 5;

		objectList[BULLET].name = (char*)"bullet";
		objectList[BULLET].lev = 0;

		objectList[BOSS].name = (char*)"Boss";
		objectList[BOSS].lev = 100;

		for (int i = 0; i < MAX; ++i)
		{
			printf("%s의 레벨은 : %d\n", objectList[i].name, objectList[i].lev);
			printf("\n");
		}

	}

	{
		enum class SceneID
		{
			LOGO,
			MENU,
			STAGE,
			EXIT
		};
		
		SceneID StateID = SceneID::LOGO;
		while (true)
		{
			// ** 콘솔 버펓청소
			// system("cls");
			switch (StateID)
			{
			case SceneID::LOGO:
				printf("LOGO\n");
				StateID = SceneID::MENU;
				break;
			case SceneID::MENU:
				printf("MENU\n");
				StateID = SceneID::STAGE;
				break;
			case SceneID::STAGE:
				printf("STAGE\n");
				StateID = SceneID::EXIT;
				break;
			case SceneID::EXIT:
				printf("EXIT\n");
				exit(0); // ** 콘솔 종료
				break;
			}
		}
	}
	*/

	{
		struct Student
		{
			char* name;
			int korScore;
			int engScore;
			int mathScore;
		};

		// **타입을 재정의한다.
		typedef Student STD;

		STD stds;

		stds.name = (char*)"홍길동";
		stds.korScore = 96;
		stds.engScore = 31;
		stds.mathScore = 100;

		printf("%s\n\n", stds.name);
	}

	{
		typedef int INT;

		int num = 10;
		INT num1 = 10;

		printf("%d\n", num1);
	}

	{
		// ** 구조체를 만들면서 이름을 정의할 수 있음.
		typedef struct Student
		{
			char* name;
			int korScore;
			int engScore;
			int mathScore;
		}STD;
	}

	{
		// type(타입을)def(정의한다) = > 타입을 재정의한다. 라는 뜻
		// ** 여러 형태로 재정의 가능.
		typedef struct Student
		{
			char* name;
			int korScore;
			int engScore;
			int mathScore;
		}STD, STD1, STD2, STD3,* PSTD;

		STD std;
		std.name = (char*)"강강";
		printf("%s", std.name);

		PSTD zzz = (PSTD)malloc(sizeof(STD1));
		zzz->name = (char*)"수울래"; // NULL공간을 참조하여 초기화 zzz->name 은 힙에 있음.
		printf("%s", zzz->name); // name은 자체의 변수이기때문에 공간이 아니라서 *를 안붙임.

	}









	return 0;
}
