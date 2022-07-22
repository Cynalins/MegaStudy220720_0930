/*
chapter 01
*/
#include <stdio.h>
#include <stdlib.h> // std같음 lib(library,라이브러리)

// #define : 정의한다.
// 보안을 위한 경고 메세지를 띄우지 말라고 지시함.
#define _CRT_SECURE_NO_WARNINGS
// main 함수는 매우 특별한 함수 입니다.
// 컴파일러가 프로그램을 실행 시킬때 main함수를 찾기 때문이다.
int main(void) {
	// include : ~ 포함하다. ~포함시키다.
	// 앞쪽에 #기호가 붙어있다면 전처리기, 전처리 지시문, 전처리기 지시문 등 으로 표현.
	// stdio.h > std(standard) / io(input,output) / h(header, 확장자가 헤더) : 표준 입출력 헤더파일.
	
	// 출력 함수
	printf("Be happy");

	// 콘솔 출력 화면을 일시 정지시켜준다.
	system("pause");

	return 0;
}