#include "Headers.h"
#include "Child.h"
#include "Player.h"
#include "MainUpdate.h"

/*
class AAA
{
public:
	const int Sum(const int num1, const int num2)const // <- 매개변수 밖의 const 함수내부에서 값을 바꾸지 마라.
	{
		return num1 + num2;
	}

};
// &래퍼런스 연산자 = 값을 그대로 가져온다(주소)
// 래퍼런스 연산자로 값을 가져올 경우에는 const를 활용하여 값을 지켜주는 것이 좋다.
int Sum(int& num1, int& num2)
{
	cout << &num1 << endl << &num2 << endl;
	return num1 + num2;
}
*/


int main()
{
	/*
	Child c;
	c.Render();
	int num1 = 0, num2 = 0;
	cout << &num1 << endl << &num2 << endl;
	cout << Sum(num1, num2) << endl;
	MainUpdate md;
	md.Initialize();
	*/

	// Child* pc = new Child();
	ULONGLONG time = GetTickCount64();

	MainUpdate main;
	main.Start();

	while (true)
	{
		if (time < GetTickCount64())
		{
			time = GetTickCount64();

			main.Update();
			main.Render();

			if (GetAsyncKeyState('Q'))
				break;
		}

	}

	return 0;
}