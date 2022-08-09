/*
* chapter 07
*/

#include <stdio.h>


// 같은 이름의 변수도 지역이 다르면 사용할 수 있음.
// ** 영역을 표현하는 중괄호 { } 를 사용하여, 여러개의 영역을 가질 수 있다.
// ** 함수의 전방 선언.
int sum(int _x, int _y);
void Output(int, int);
// 함수 전방선언시 매개변수의 이름은 생략해도 된다.
int Compare(int, int); // void Output(int _x, int _y);
// * 전방 선언은 항상 int main(void)의 상단에 위치 시켜야 한다.
// 메인을 만나기 전에 선언이 되어야한다.

// ** 함수가 재귀적으로 호출되기 때문에 종료되는 구간이 없다면 스택 오버플로우가 발생한다.
/*void 재귀함수()
{
	printf("재귀호출");
	재귀함수();
}
*/

// ** 매개 변수를 사용하여 재귀함수의 호출 횟수를 카운트하고 함수를 종료시키는 방법.
void 재귀함수(int _n)
{
	if (_n == 0)
		return;
	else
	{
		printf("%d 재귀호출\n", _n);
		재귀함수(_n - 1);
	}
}

int main(void)
{/*
	// ** 영역 내부에서의 변수 사용.
	{
		//같은 이름의 변수를 사용.
		int x = 10;
		{
			// ** 변수의 이름이 같은 경우 같은 지역(해당 영역 내부)에있는 변수부터 우선순위로 한다.
			int x = 20;
			
			printf("첫 번째 : %d\n", x);
		}
		printf("두번째 : %d\n", x);

		// ** 문제점 : 상위에 있는 변수의 값을 사용할 수 없다.
		// ** 문제점 : 변수의 이름이 같기 때문에, 변수 사용에 혼란이 생길 수 있다.
	}
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result = %d\n", result);

	
	// ** 변수의 존재 기간(변수의 범위)
	{
		// ** 변수는 선언된 해당 영역이 종료되는 지점까지 사용 가능하다.
		int 변수1 = 10;
		{
			int 변수2 = 20;
			변수1 = 변수2;
		}
		변수2 = 30;  <= X 사용 불가.
	}
	

	//===============================================================================================
	{
		// ** 같은 이름의 변수명을 다른 영역에서 별도로 가질수 있다.
		int result = sum(a, b);
	}
	// 재정의 error > 이름이 똑같은게 있다.(중복) / 변수, 함수 등
	*/
	Output(10, 20);

	int result = Compare(10, 20);

	printf("%d\n\n", result);

	재귀함수(5);

	return 0;
}
// ** 함수의 정의
int sum(int _x, int _y)
{
	int temp;
	temp = _x + _y;
	return temp;
}

void Output(int _x, int _y)
{
	if (true)
	{
		printf("Output함수 호출됨.");
		printf("%d + %d = %d\n", _x, _y, _x + _y);
	}
	// void의 형태의 함수에서는 break의 역활을 해 줄 수있다.(return)

}

// 매개변수의 복제는 항상 뒤에서부터 일어난다.
int Compare(int _x, int _y)
{
	if (_x > _y)
		return _x;
	else if (_x < _y)
		return _y;
	else
		return 0;
}

