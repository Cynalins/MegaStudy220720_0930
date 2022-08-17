/*
* chapter 12
*/

#include <stdio.h>
#include <stdlib.h>
#include <string>

int main()
{
	/*
	// 배열, 문자열, 포인터 => 시작주소와 끝나는 주소를
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
	printf("첫 번째 문자 : %c\n", *"apple");
	printf("두 번째 문자 : %c\n", *("apple"+1));
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);
	*/

	{
		// malloc : memory location의 약자
		// 스텍 : L(last)I(in)F(first)O(out) 지역, 영역
		// 힙 : 
		// 큐 : F(first)I(in)F(first)O(out)

		int* pi;
		double* pd;


		// (형변환())malloc
		// 스텍      힙
		pi = (int*)malloc(sizeof(int));
		if (pi == NULL)
		{
			printf("# 메모리가 부족합니다.\n");
			exit(1);
		}
		pd = (double*)malloc(sizeof(double));

		*pi = 10;
		*pd = 3.4;

		printf("정수형으로 사용 : %d\n", *pi);
		printf("실수형으로 사용 : %.1f\n", *pd);

		// ** 중요 **
		free(pi);
		free(pd);
	}

	{
		printf("(void*) size : %d\n", sizeof(void*));


	}
	{
		// ** void포인터의 사용(void* )
		int Array[5] = { 0 };
		
		void* pArr = Array;
		int* i = (int*)pArr;
		float* f = (float*)pArr;

		// 형태가 보존되었을 때 출력
		// int* i = (int*)pArr;
		printf("%d\n", *i);

		// 형태가 바뀔때 발생할 수 있는 문제
		printf("%f\n", *f);

	}

	// ===========================================================
	{
		// ** int* pi = (int*)malloc(메모리를 할당할 크기);
		// ** int* pi = (int*)malloc(sizeof(int));
		// ** int* pi = (int*)malloc(4); 숫자를 사용해도됨.
		const int max = 10;
		int* pi = (int*)malloc(sizeof(int) * max); // sizeof(int)*max => 힙, pi => 힙에 할당된 주소를 가짐. 자기자신은 스텍에 위치.
		for (int i = 0; i < max; ++i)
		{
			pi[i] = 10 * i + 10;
			printf("%d, ", *(pi+i));
		}


	}








	return 0;
}

