/*
* chapter 14
*/

#include <stdio.h>
#include <stdlib.h>

// ** ������ : ����, ��� => �������̸鼭 ������̾���ϴ� ���� ���� ��밡��.
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
			printf("��");
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

		// **�������� �̸��� ����.
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

		objectList[PLAYER].name = (char*)"ȫ�浿";
		objectList[PLAYER].lev = 60;

		objectList[ENEMY].name = (char*)"Enemy";
		objectList[ENEMY].lev = 5;

		objectList[BULLET].name = (char*)"bullet";
		objectList[BULLET].lev = 0;

		objectList[BOSS].name = (char*)"Boss";
		objectList[BOSS].lev = 100;

		for (int i = 0; i < MAX; ++i)
		{
			printf("%s�� ������ : %d\n", objectList[i].name, objectList[i].lev);
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
			// ** �ܼ� ���gû��
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
				exit(0); // ** �ܼ� ����
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

		// **Ÿ���� �������Ѵ�.
		typedef Student STD;

		STD stds;

		stds.name = (char*)"ȫ�浿";
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
		// ** ����ü�� ����鼭 �̸��� ������ �� ����.
		typedef struct Student
		{
			char* name;
			int korScore;
			int engScore;
			int mathScore;
		}STD;
	}

	{
		// type(Ÿ����)def(�����Ѵ�) = > Ÿ���� �������Ѵ�. ��� ��
		// ** ���� ���·� ������ ����.
		typedef struct Student
		{
			char* name;
			int korScore;
			int engScore;
			int mathScore;
		}STD, STD1, STD2, STD3,* PSTD;

		STD std;
		std.name = (char*)"����";
		printf("%s", std.name);

		PSTD zzz = (PSTD)malloc(sizeof(STD1));
		zzz->name = (char*)"���﷡"; // NULL������ �����Ͽ� �ʱ�ȭ zzz->name �� ���� ����.
		printf("%s", zzz->name); // name�� ��ü�� �����̱⶧���� ������ �ƴ϶� *�� �Ⱥ���.

	}









	return 0;
}
