#include "Headers.h"
#include "Child.h"
#include "Player.h"
#include "MainUpdate.h"

/*
class AAA
{
public:
	const int Sum(const int num1, const int num2)const // <- �Ű����� ���� const �Լ����ο��� ���� �ٲ��� ����.
	{
		return num1 + num2;
	}

};
// &���۷��� ������ = ���� �״�� �����´�(�ּ�)
// ���۷��� �����ڷ� ���� ������ ��쿡�� const�� Ȱ���Ͽ� ���� �����ִ� ���� ����.
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