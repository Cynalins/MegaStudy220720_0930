/*
*  chapter 03
*/

#include <stdio.h>

// 1 bit = 0 or 1 => 2개
// 2 bit = 00, 01, 10 ,11 => 4개
// 3 bit = 000,001,010,011,100,101,110,111 => 8개
// * 4 bit = 0000, 0001, 0010, 0011, 0100, 0101, 0110, 0111
// * 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111 => 16개
// 5 bit = 32개
// 6 bit = 64개
// 7 bit = 128개
// 0 0 0 0 0 0 0 0 (256개의 표현범위를 가짐.)8bit == 1byte (아스키코드 1byte로 표현가능)
// 11111111 = -1
// 11111110 = -2
// 1000                                     0000 = -128
// 01111111 = 127
// unsigned = 부호가 없다.(항상 양수)

// 0(부호표현 비트 0 = 양, 1 = 음) 0000000

// int << 2바이트pc에서는 2바이트만큼 4바이트pc에서는 4바이트만큼.

int main(void)
{
	__int64;

	// sizeof == 데이터의 크기를 정수로 반환.
	printf("%d\n", sizeof(__int64));
	printf("\n");

	// * 변수선언
	char c;    // (자료형 : char) (변수이름 : c)

	// * 변수 초기화 (여러번 반복 가능)
	c = 127; // ( 변수이름 : c )( 대입연산자 : = )( 값 = 127 )
	
	// * 변수 선언 및 초기화
	short s = 32767;
	int i = 2147483647;
	long n = 2147483647;

	// ** 초기화 된 변수의 값을 출력
	printf("char : %d\n", c);
	printf("short : %d\n", s);
	printf("int : %d\n", i);
	printf("long : %d\n", n);
	printf("\n");

	// *데이터 타입의 최대 표현범위보다 +1 씩 더 갖게된 경우 어떻게 출력되는지 확인
	c = c + 1;
	s = s + 1;
	i = i + 1;
	n = n + 2;


	// ** 초기화 된 변수의 값을 출력
	printf("char : %d\n", c);
	printf("short : %d\n", s);
	printf("int : %d\n", i);
	printf("long : %d\n", n);
	printf("\n");

	// unsigned
	printf("%d\n", sizeof(unsigned char));
	printf("%d\n", sizeof(unsigned short));
	printf("%d\n", sizeof(unsigned int));
	printf("%d\n", sizeof(unsigned long));
	printf("%d\n", sizeof(unsigned __int64));
	printf("\n");


	// *unsigned 형태의 데이터 타입으로 생성 후, 위 예제와 똑같은 값으로 초기화
	unsigned char uc = 127;
	unsigned short us = 32767;
	unsigned int ui = 2147483647;
	unsigned long un = 2147483647;

	// *값을 1씩 더해줌
	uc = uc + 1;
	us = us + 1;
	ui = ui + 1;
	un = un + 2;
	
	printf("unsigned char : %d\n", uc);
	printf("unsigned short : %d\n", us);
	printf("unsigned int : %u\n", ui);
	printf("unsigned long : %u\n", un);
	printf("\n");

	// 자주사용하는 실수형 float , double 안쓰는 이유 > 비효율적.
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	printf("\n");

	return 0;
}
// cpu 직렬 연산