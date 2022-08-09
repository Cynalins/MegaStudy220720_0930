/*
* chapter 08
*/
#include <stdio.h>
void line()
{
	printf("\n======================================================================================\n\n");
}
int main()
{
	// ** 변수를 각각 선언하여 출력.
	int Number1 = 1;
	int Number2 = 2;
	int Number3 = 3;
	int Number4 = 4;
	int Number5 = 5;

	printf("%d\n", Number1);
	printf("%d\n", Number2);
	printf("%d\n", Number3);
	printf("%d\n", Number4);
	printf("%d\n", Number5);
	line();
	// 단점 : 각각의 변수명을 직접 작성하여야 한다. 번거롭다,
	// ================================================================================================

	// ** 하나의 배열을 선언하여 출력

	// ** 장점1 : 배열로 선언함으로써, 초기화 구문이 현저히 줄었다.
	int number[5] = { 1, 2, 3, 4, 5 };

	printf("%d\n", number[0]);
	printf("%d\n", number[1]);
	printf("%d\n", number[2]);
	printf("%d\n", number[3]);
	printf("%d\n", number[4]);
	line();
	// ================================================================================================
	
	// ==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼
	//					응	용
	// ==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if (i == 0 || i == 2)
			{
				printf("==▼");
			}
		}
		if (i == 1)
		{
			printf("\t\t응\t용");
		}
		printf("\n");
	}
	printf("\n\n");
	// **장점2 : 위와 같이 출력함으로써, 출력의 구문도 현저히 줄었다.
	for (int i = 0; i < 5; ++i)
	{
		printf("number[%d] : %d\n", i, number[i]);
	}
	line();
	// 배열의 길이. 배열의 길이가 5 => 인덱스는 4까지.
	// 배열의 인덱스 => 배열 요소의 시작점을 가르침.
	// ================================================================================
	// const : 상수. = 변하지않는 값.
	// 배열을 선언할때 요소의 갯수를 적는것은 정수형 상수만 가능
	// ** 사용이 불가능한 예
	/*
	{
		int number[5] = 10; => 인덱스번호가 4번까지 존재.
	}
	*/





	return 0;
}