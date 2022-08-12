/*
* chapter 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void n()
{
	printf("\n");
}

int main()
{
	{
		// ** 배열과 포인터의 관계

		// *배열 선언 및 초기화
		int Array[8] = { 0 };

		// * 초기화
		for (int i = 0; i < 8; ++i)
		{
			Array[i] = i + 1;
			printf("%d\n", Array[i]);
		}
		n();
		
		// 배열은 포인터를 줄때 &을 빼면 []도 뺄 수 있다.

		// ** 배열은 인덱스(대괄호)가 없는 상태로 주소반환연산자 없이 주소를 전달 할 수 있다.
		printf("포인터를 사용한 출력\n");
		int* iter = Array;
		// 포인터를 사용할때 &(앤퍼센트)연산자와 배열의 길이를 쓰지않는 이유 : 인덱스 참조해서.

		for (int i = 0; i < 8; ++i)
		{
			printf("%d\n", (*(iter + i)));
			// i를 플러스하는 이유. 포인터에 + 1을하게되면 인덱스의 개념으로 1번째 주소를 두번째 주소 즉 4byte정도 뒤로 보냄.
			// 즉 [i] > 인덱스증가 , *(iter + i) > Array배열의 0번째주소 > 1번째주소 > 2번째주소..... 순.
		}

		{
			int Array[8] = { 0 };

			// ** 문제
			printf("포인터를 사용한 출력\n");
			int* iter = Array;

			for (int i = 0; i < 8; ++i)
			{
				printf("%d\n", (*(iter + i)));

			}
		}
		// iter + i, *(iter + i)
	}
	// 로또 번호를 생성하는 프로그램을 작성해 봅시다.
	{

		/*
		int Number[5][6] = {
			{0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0}
		}
		*/
		int Number[5][6];
		srand(time(NULL));

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				//srand((i+1) * (j+1));
				Number[i][j] = rand() % 45 + 1;
			}
		}

		// ** 버블 정렬
		/*
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				for (int k = (j + 1); k < 6; ++k)
				{
					if (Number[i][j] > Number[i][k])
					{
						int temp = Number[i][j];
						Number[i][j] = Number[i][k];
						Number[i][k] = temp;
					}
				}
			}
		}
		*/
		// 선택 정렬
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				int select = j;
				for (int k = (j + 1); k < 6; ++k)
				{
					if (Number[i][select] > Number[i][k])
					{

						// 45, 30, 18, 25, 44, 9 
						select = k;
					}
				}
				int temp = Number[i][j];
				Number[i][j] = Number[i][select];
				Number[i][select] = temp;
			}
		}
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				printf("%02d ", Number[i][j]);
				
			}
			printf("\n");
		}
		
		
		


	}








	return 0;
}