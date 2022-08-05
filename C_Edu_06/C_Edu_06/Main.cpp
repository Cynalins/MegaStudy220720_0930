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
			printf("최오에 한번은 실행됨.");
			break;
		} while (false);
		printf("\n");
	}






	return 0;
}