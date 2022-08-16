/*
* chapter 09 pointer.
*/

#include <stdio.h>
#include <string>

#define _CRT_SECURE_NO_WARNINGS

void n()
{
	printf("\n");
}

int main()
{

	// 포인터는 이정표와 같다.

	{
		// * 1단계
		// * == 애스터

		int Number = 10; // 일반 변수
		// ** 일반 변수는 데이터를 갖는다.

		int* pNumber;	 // 포인터 변수
		// ** 포인터 변수는 일반변수의 주소를 갖는다.

	}
	
	{
		// * 2단계
		int Number = 10;

		// ** 주소는 다음과 같이 표현할 수 있다.
		printf("주소 : %p\n", &Number);
		printf("데이터 : %d\n", Number);
		n();

		// 주소(포인터)를 출력하기 위해서는 &(앤퍼센트) 연산자가 필요하다.
		// 주소 = 집주소 , 데이터 = 사는사람, 변수명 = 이름.
		// 변수선언 > 이 변수의 주소에 접근한다.


	}

	{
		// * 3단계
		
		int Number = 10;

		int* pNumber = &Number;

		// ** 포인터 변수가 데이터를 출력할 때에는 항목 앞에 [*]를 붙혀 준다.
		printf("pointer : %d\n", *pNumber);
		printf("pointer : %p\n", &Number);
		printf("pointer : %p\n", pNumber);
		n();

	}

	{

		// 포인터도 주소, 이름, 값만 가지고있음.
		// 포인터는 접근을 할 수 있다.

		// * 4단계

		int Number = 10;

		int* pNumber = &Number;
		*pNumber = 15;

		// ** 포인터 변수가 데이터를 출력할 때에는 항목 앞에 [*]를 붙혀 준다.
		printf("Number 값 : %d\n", Number);
		printf("Number 주소 : %p\n", &Number);
		printf("Pointer 가 가르키는 값 : %d\n", *pNumber);
		printf("Pointer 가 가르키는 값 : %p\n", pNumber);
		printf("Pointer 의 주소 : %p\n", &pNumber);
		n();
	}

	{
		// ** 포인터 변수와 일반변수는 데이터를 공유한다.
		// * 검증 
		int Number = 10;

		int* pNumber = &Number;

		printf("Number의 값 : %d\n", Number);
		printf("Pointer가 가르키는 값 : %d\n", *pNumber);
		n();

		// 일반 변수의 값만 변경
		Number = 100;
		printf("Number의 값 : %d\n", Number);
		printf("Pointer가 가르키는 값 : %d\n", *pNumber);
		n();

		// 포인터 변수의 값만 변경
		*pNumber = 10000;
		printf("Number의 값 : %d\n", Number);
		printf("Pointer가 가르키는 값 : %d\n", *pNumber);
		n();

	}

	{
		// ** swap
		int a = 10;
		int b = 20;
		
		printf("a : %d\n", a);
		printf("b : %d\n", b);
		n();

		if (true)
		{
			int temp = a;
			a = b;
			b = temp;
		}

		printf("a : %d\n", a);
		printf("b : %d\n", b);
		n();

		// 포인터 변수는 자주 쓰인다.

	}

	{
		// * 변수를 쓰지않고 swap
		int a = 10;
		int b = 20;

		a ^= b;
		printf("a : %d\n", a);
		b ^= a;
		printf("b : %d\n", b);
		a ^= b;
		printf("a : %d\n", a);

	}

	{
		// ** 포인터의 크기는 개발환경에 따라 그 크기가 달라진다.
		int Number = 10;
		long long Num = 10;
		// 포인터를 사용할 때에는 넘겨주어야할 데이터형이랑 맞춰주어야한다.
		long long* Pointer = &Num;

		// 포인터의 크기.
		// x64 = 4byte
		// x64 = 8byte

		// 64bit 기준에서는 포인터의 크기는 8byte, 84bit는 4byte
		// 포인터는 한번에 연산하는 크기를 기준으로 잡기때문.
		// 개발환경에 따라 포인터의 크기가 달라질 수 있다.

		printf("%d\n", sizeof(Number));
		printf("long long : %d\n", sizeof(Num));
		printf("%d\n", sizeof(Pointer));

	}

	return 0;
}