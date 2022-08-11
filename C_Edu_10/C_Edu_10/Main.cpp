/*
* chapter 10
*/

#include <stdio.h>

void n()
{
	printf("\n");
}

int main()
{
	{
		// ** 배열과 포인터의 관계

		int Array[8] = { 0 };

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


	return 0;
}