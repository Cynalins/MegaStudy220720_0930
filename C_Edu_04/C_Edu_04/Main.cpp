/*
*  chapter04
*/

#include <stdio.h>

int main(void)
{
	// *산술 연산자
	// +, -, *, /, %

	// *대입 연산자
	// = (후순위 연산자)

	// *단항 연산자(증감 연산자)
	// *전위 연산 : ++ or --(항목)
	// *후위 연산 :  (항목) ++ or --
	// ++, --
	{
		// *1씩 증가 하거나 1씩 감소한다.
		int i = 0;

		// *전위연산 : 연산을 우선순위로 한다(증감 먼저).
		printf_s("%d\n", ++i);

		// *후위연산 : 연산을 후순위로 한다.
		printf_s("%d\n", i--);

		// *현재 값 출력
		printf_s("%d\n", i);
	}

	// *2항 연산자
	// *(항목 A) + (항목 B)
	// *(항목 A) + (항목 B) - (항목 C)
	// *(항목 A) + (항목 B) - (항목 C) * (항목 D)
	// 1 + 2 + 3 + 4 + 5 = 15
	// 1 + 2 = 3 + 3 = 6 이런식으로 2항연산자


	// *삼항 연산자
	// (조건)? True : False

	{
		int i = 10;
		int n = (i > 9) ? i : 0;

		printf_s("n : %d\n", n);
		printf_s("\n");
	}


	// *관계 연산자(비교 연산자)
	// >, <, >=, <=

	// *논리 연산자
	// ==, !=, && (그리고), || (또는)
	{
		// A = 10, B = 11
		// *[ A == B ] : A와 B는 같은가? , False
		int A = 10;
		int B = 11;
		printf_s("A = 10, B = 11");
		printf_s("조건 (A == B) ? 참 : 1/거짓 : 0 = %d\n", (A == B));
		// A = 10, B = 11
		// *[ A != B ] : A와 B는 같지 않은가? , True
		printf_s("조건 (A != B) ? 참 : 1/거짓 : 0 = %d\n", (A != B));
		printf_s("\n");
	}

	// *&&
	// 항목 A와 항목 B가 모두 true일때 true를 반환.
	{
		int A = 0;
		int B = 0;
		printf_s("&& 연산자\n");
		printf_s("A && B ? 참 : 1 / 거짓 : 0 = %d\n", A&&B);
		printf_s("\n");

		int a, b, c, d;
		a = 10;
		b = 20;
		c = 30;
		d = 40;

		printf_s("(a > b)&&(c < d) ? %d\n\n",(a > b)&&(c < d));
	}

	// *||
	// 항목 A와 항목 B중 1개만 true라도 true를 반환. 
	{
		int A = 0;
		int B = 0;
		printf_s("|| 연산자\n");
		printf_s("A || B ? 참 : 1 / 거짓 : 0 = %d\n", A || B);
		printf_s("\n");

	}

	// *[ !(항목A) ] , 0 = false : 0이아닌값 = true
	{
		int A = 20;
		printf_s("Not 연산자\n !A : %d\n", !A);
		printf_s("\n");

		int a, b, c, d;
		a = 10;
		b = 20;
		c = 30;
		d = 40;

		printf_s("(a > b)||(c < d) ? %d\n\n", (a > b) || (c < d));
	}
	
	



	// *비트 연산자
	// & [엠퍼센트,AND], | [OR], ^ [XOR]
	// 변수를 하나 쓰지않고 swap 하기.

	{
		int i = 10 + 20;
		// = 은 후순위연산자 따라서 10 + 20먼저 연산하고 i에 30을 대입
	}

	// *형변환

	{
		char c = 'A';
		short s = 32767; 
		int i = 100000000;

		float f = 3.141592f;
		// *f를 마지막에 쓰는 이유.
		// 실수 뒤에f를 사용하면 float을 표현, f를 사용하지않으면 double로 표현.
		// double을 사용하면 15번재줄까지 0으로 출력, 비효율 따라서 f를 마지막에 붙여 float형으로 만듬.

		{
			i = (int)f;
			printf_s("%d\n", i);
		}

	}

	// *복합 연산자
	// +=, -=, *=, /=, %=
	{
		int a = 10, b = 20;
		a = a + b;
		printf_s("%d\n", a);
		a += b;
		printf_s("%d\n", a);
		a -= b;
		printf_s("%d\n", a);
		a *= b;
		printf_s("%d\n", a);
		a /= b;
		printf_s("%d\n", a);
	}

	return 0;
}