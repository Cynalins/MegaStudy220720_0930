/*
* chapter 02
*/

#include <stdio.h>
#include <stdlib.h>

// 함수
// 반환 형태(함수 이름 앞에 붙은 것), 
/*
	void 함수이름(매개변수(입력의 형태)) 
	{
	함수의 몸체
	}
	모든 함수는 return을 만나면 종료됨.
	int형은 return 정수;
	return 0; 인 이유 > 정상종료
	return -1; 비정상 종료
*/
void Output() {
	printf("Hello Worlds!!\n");
}

// main (시작점) 메인문만 실행하고 종료가 됨. 진입점은 하나만 가질 수 있음.
int main(void) 
{
	// 들여쓰기(Tab)
	Output();

	// R밸류 리터널상수(?), 심볼릭 상수
	// L밸류 변수를 얘기.
	//10 + 20;

	
	// **문자와 문자열
	// 'A' = 문자 > 문자하나만 입력 가능.
	// "A" = 문자열 > 여러문자를 입력하여도 가능.
	// 'H','E','L','L','O' > 문자 "Hello" > 문자열.


	// **서식문자
	// %d = 10진 정수
	// %f = 실수
	// %c = 단일문자
	// %s = 문자열
	// %% = 기호출력(% 표현)
	// %x = 부호x 16진 정수(소문자 대문자 나눔)
	// %u = 부호x 10진수, %o = 8진수
	
	printf("정수 출력 : %d\n", 10);
	printf("문자 출력 : %c\n", 'A');
	printf("문자 출력 : %c%c%c%c%c\n", 'H', 'E', 'L', 'L', 'O');
	printf("문자열 출력 : %s\n", "Hello");
	printf("실수 출력 : %f\n", 3.141592f);
	printf("%d%% 입니다.\n", 100);
	printf("\n");

	// \n = 줄바꿈 표시
	// \t = tab 표현
	// \b = backspacebar(삭제)
	// 
	// \\ = \ 표현
	
	printf("Goot\bd\tchance\n");
	printf("10,000\\\n");

	printf("%d과 %d의 합은 %d 입니다.\n", 10, 20, 10 + 20);

	// **진수 표현

	printf("\n");
	printf("10진수의 10 : %d\n", 10);
	printf("8진수의 10 : %d\n", 010);
	printf("16진수의 10 : %d\n", 0x10);

	// **아스키 코드표
	printf("\n");
	printf("65 문자출력 : %c\n", 65);
	printf("A를 정수 출력 : %d\n", 'A');
	//printf("16진수의 10 : %d\n", 0x10);

	return 0;
}