/*
* chapter 06
*/

#include <stdio.h>

int main(void)
{
	// **반복문 (while)
	// 모든 반복문에는 초기문, 조건문, 증감문이 필요하다.
	// while(조건) , 조건이 참일 경우에만 반복된다.(실행된다)
	// while문 : 조건이 무한루프 조건일 때, 탈출할 수 있는 요소가 필요하다. 무한루프에 많이 사용됨.
	{
		while (true)
		{
			if (true)
			{
				break;
			}
		}
	}
	// 일정 횟수 만큼 반복해야할때, 초기문,조건문,증감문 이 세가지 요소가 필요하다.
	{
		int i = 0; // 초기문.

		while (i < 10) // 조건문
		{
			printf("while 반복문 %d\n", i + 1);
			++i; // 증감문.
		}
	}

	// *반복문 (for) = 일정 횟수만큼 반복해야할때 자주 사용됨.
	{
		// for(초기문; 조건문; 증감문)
		for (int i = 0; i < 10; ++i)
		{
			printf("for 반복문 %d\n", i);
		}
	}

	// *for문의 무한루프 조건일때
	{
		for (; true;)
		{
			printf("for 반복문\n");
			if (true)
			{
				break;
			}
		}
	}

	// do ~ while문은 최초의 한번은 실행됨. 그 다음 조건이 참이면 반복, 거짓이면 반복x
	{
		do
		{
			// ** 최초 1회는 반드시 실행됨.
			printf("최초에 한번은 실행됨.");
			break;
			// ** 그 후에 조건을 확인하고 조건이 true인 경우 반복.
		} while (false);
		printf("\n\n");
	}

	//===========================================================================================

	// [구구단]
	// for문의 3단 중첩은 공간표현이라고 볼 수 있음. x, y, z;
	{
		int x, y;
		printf("시작단 / 끝단 입력 : ");
		scanf_s("%d %d", &x, &y);

		for (int i = x; i < y; ++i)
		{
			if (i % 2 == 0)
			{
				continue;
			}
			else
			{
				for (int j = 1; j < 10; ++j)
				{
					// if(i % 2 || !(j % 2))
					//		continue;
					if (j % 2 != 0)
					{
						continue;
					}
					else
					{
						printf("%d * %d = %02d | ", i, j, i * j);
					}
				}
			}
			printf("\n");
		}
	}

	{
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				printf("★");
			}
			printf("\n");
		}
		printf("\n\n");
	}

	return 0;
}