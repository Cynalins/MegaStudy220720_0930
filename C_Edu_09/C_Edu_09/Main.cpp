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

	// �����ʹ� ����ǥ�� ����.

	{
		// * 1�ܰ�
		// * == �ֽ���

		int Number = 10; // �Ϲ� ����
		// ** �Ϲ� ������ �����͸� ���´�.

		int* pNumber;	 // ������ ����
		// ** ������ ������ �Ϲݺ����� �ּҸ� ���´�.

	}
	
	{
		// * 2�ܰ�
		int Number = 10;

		// ** �ּҴ� ������ ���� ǥ���� �� �ִ�.
		printf("�ּ� : %p\n", &Number);
		printf("������ : %d\n", Number);
		n();

		// �ּ�(������)�� ����ϱ� ���ؼ��� &(���ۼ�Ʈ) �����ڰ� �ʿ��ϴ�.
		// �ּ� = ���ּ� , ������ = ��»��, ������ = �̸�.
		// �������� > �� ������ �ּҿ� �����Ѵ�.


	}

	{
		// * 3�ܰ�
		
		int Number = 10;

		int* pNumber = &Number;

		// ** ������ ������ �����͸� ����� ������ �׸� �տ� [*]�� ���� �ش�.
		printf("pointer : %d\n", *pNumber);
		printf("pointer : %p\n", &Number);
		printf("pointer : %p\n", pNumber);
		n();

	}

	{

		// �����͵� �ּ�, �̸�, ���� ����������.
		// �����ʹ� ������ �� �� �ִ�.

		// * 4�ܰ�

		int Number = 10;

		int* pNumber = &Number;
		*pNumber = 15;

		// ** ������ ������ �����͸� ����� ������ �׸� �տ� [*]�� ���� �ش�.
		printf("Number �� : %d\n", Number);
		printf("Number �ּ� : %p\n", &Number);
		printf("Pointer �� ����Ű�� �� : %d\n", *pNumber);
		printf("Pointer �� ����Ű�� �� : %p\n", pNumber);
		printf("Pointer �� �ּ� : %p\n", &pNumber);
		n();
	}

	{
		// ** ������ ������ �Ϲݺ����� �����͸� �����Ѵ�.
		// * ���� 
		int Number = 10;

		int* pNumber = &Number;

		printf("Number�� �� : %d\n", Number);
		printf("Pointer�� ����Ű�� �� : %d\n", *pNumber);
		n();

		// �Ϲ� ������ ���� ����
		Number = 100;
		printf("Number�� �� : %d\n", Number);
		printf("Pointer�� ����Ű�� �� : %d\n", *pNumber);
		n();

		// ������ ������ ���� ����
		*pNumber = 10000;
		printf("Number�� �� : %d\n", Number);
		printf("Pointer�� ����Ű�� �� : %d\n", *pNumber);
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

		// ������ ������ ���� ���δ�.

	}

	{
		// * ������ �����ʰ� swap
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
		// ** �������� ũ��� ����ȯ�濡 ���� �� ũ�Ⱑ �޶�����.
		int Number = 10;
		long long Num = 10;
		// �����͸� ����� ������ �Ѱ��־���� ���������̶� �����־���Ѵ�.
		long long* Pointer = &Num;

		// �������� ũ��.
		// x64 = 4byte
		// x64 = 8byte

		// 64bit ���ؿ����� �������� ũ��� 8byte, 84bit�� 4byte
		// �����ʹ� �ѹ��� �����ϴ� ũ�⸦ �������� ��⶧��.
		// ����ȯ�濡 ���� �������� ũ�Ⱑ �޶��� �� �ִ�.

		printf("%d\n", sizeof(Number));
		printf("long long : %d\n", sizeof(Num));
		printf("%d\n", sizeof(Pointer));

	}

	return 0;
}