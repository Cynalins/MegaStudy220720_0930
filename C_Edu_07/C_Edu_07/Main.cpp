/*
* chapter 07
*/

#include <stdio.h>


// ���� �̸��� ������ ������ �ٸ��� ����� �� ����.
// ** ������ ǥ���ϴ� �߰�ȣ { } �� ����Ͽ�, �������� ������ ���� �� �ִ�.
// ** �Լ��� ���� ����.
int sum(int _x, int _y);
void Output(int, int);
// �Լ� ���漱��� �Ű������� �̸��� �����ص� �ȴ�.
int Compare(int, int); // void Output(int _x, int _y);
// * ���� ������ �׻� int main(void)�� ��ܿ� ��ġ ���Ѿ� �Ѵ�.
// ������ ������ ���� ������ �Ǿ���Ѵ�.

// ** �Լ��� ��������� ȣ��Ǳ� ������ ����Ǵ� ������ ���ٸ� ���� �����÷ο찡 �߻��Ѵ�.
/*void ����Լ�()
{
	printf("���ȣ��");
	����Լ�();
}
*/

// ** �Ű� ������ ����Ͽ� ����Լ��� ȣ�� Ƚ���� ī��Ʈ�ϰ� �Լ��� �����Ű�� ���.
void ����Լ�(int _n)
{
	if (_n == 0)
		return;
	else
	{
		printf("%d ���ȣ��\n", _n);
		����Լ�(_n - 1);
	}
}

int main(void)
{/*
	// ** ���� ���ο����� ���� ���.
	{
		//���� �̸��� ������ ���.
		int x = 10;
		{
			// ** ������ �̸��� ���� ��� ���� ����(�ش� ���� ����)���ִ� �������� �켱������ �Ѵ�.
			int x = 20;
			
			printf("ù ��° : %d\n", x);
		}
		printf("�ι�° : %d\n", x);

		// ** ������ : ������ �ִ� ������ ���� ����� �� ����.
		// ** ������ : ������ �̸��� ���� ������, ���� ��뿡 ȥ���� ���� �� �ִ�.
	}
	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result = %d\n", result);

	
	// ** ������ ���� �Ⱓ(������ ����)
	{
		// ** ������ ����� �ش� ������ ����Ǵ� �������� ��� �����ϴ�.
		int ����1 = 10;
		{
			int ����2 = 20;
			����1 = ����2;
		}
		����2 = 30;  <= X ��� �Ұ�.
	}
	

	//===============================================================================================
	{
		// ** ���� �̸��� �������� �ٸ� �������� ������ ������ �ִ�.
		int result = sum(a, b);
	}
	// ������ error > �̸��� �Ȱ����� �ִ�.(�ߺ�) / ����, �Լ� ��
	*/
	Output(10, 20);

	int result = Compare(10, 20);

	printf("%d\n\n", result);

	����Լ�(5);

	return 0;
}
// ** �Լ��� ����
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
		printf("Output�Լ� ȣ���.");
		printf("%d + %d = %d\n", _x, _y, _x + _y);
	}
	// void�� ������ �Լ������� break�� ��Ȱ�� �� �� ���ִ�.(return)

}

// �Ű������� ������ �׻� �ڿ������� �Ͼ��.
int Compare(int _x, int _y)
{
	if (_x > _y)
		return _x;
	else if (_x < _y)
		return _y;
	else
		return 0;
}
