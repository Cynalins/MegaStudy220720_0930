/*
* Chapter 05
*/

#include <stdio.h>
#include <string>

using namespace std;

int main(void)
{


	// * 0. 그런데 만약에 정수기 앞에 컵이 없다면
	// * -  인포에서 컵을 받아온다.
	// * 1. 정수기 앞에서 물을 마신다.

	// * 컴퓨터 스크립트 *
	// 
	// 1. 정수기앞에 선다.
	// 2. 컵을 탐색한다.
	// 3. 만약 컵이 없다면..... if(조건)
	//		- 인포에서 컵을 받아온다. {조건이 맞다면 행동하게될 실행문}  
	// 4. 컵을 손에 쥔다.
	// 5. 컵에 물을 담아 마신다.

	// 스크립트화를 잘해야 한다.
	// **if ~ else문
	// 더많은것을 확인할 수있음.(조건)
	/*
	{
		char* Name;
		int Number;

		// 분기문이라고도 한다.
		printf("입력 : ");
		scanf_s("%d", &Number);

		if (Number == 1)
		{
			Name = (char*)"홍길동";
		}
		else if(Number == 2)
		{
			Name = (char*)"임꺽정";
		}
		else
		{
			Name = (char*)"이몽룡";
		}

		printf_s("결과 값 : %s\n", Name);
		printf_s("\n");
	}
	
	// 절차지향.
	// **switch ~ case 문
	{
		int Number;

		// 분기문이라고도 한다.
		printf("입력 : ");
		scanf_s("%d", &Number);

		switch (Number)
		{
		case 1:
			printf("홍길동");
			break;
		case 2:
			printf("임꺽정");
			break;
		case 3:
			printf("이몽룡");
			break;
		default:
			printf("잘못 입력 하였습니다.");
		}
		printf("\n\n");
	}
	*/
	// default == else라고 봐도됨.


	return 0;
}
