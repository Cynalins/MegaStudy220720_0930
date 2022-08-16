/*
* chapter 11
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>

void Print_arr(int*, int);
void Print_arr1(int _pArr[], int _size);

int main()
{
	/*
	{
		// ** �迭�� ����� ���� ���
		// char Buffer[5] = "�ѱ�";
		char Buffer[] = "�ѱ�";
		printf("%c%c%c%c\n",
			Buffer[0],
			Buffer[1],
			Buffer[2],
			Buffer[3]);
	}

	{
		// ** �����͸� ����� ���� ���
		// ** "�ѱ�" = ���ڿ��� �ʱ�ȭ �Ǿ��ֱ� ������ char[5] ��ŭ�� ���̸� �����ִ�.
		// ** ���ڿ� ���� �迭�� �ν��ϱ� ������ ������ ���� �� ��ȯ�� �ʿ��ϴ�.
		char* Buffer = (char*)"�ѱ�"; // ���ڿ� �տ��ִ� (char*)�� ���ڿ������ͷ� ����ȯ.
		printf("%c%c%c%c",
			Buffer[0],
			Buffer[1],
			Buffer[2],
			Buffer[3]);
	}

	{
		// ** ������ ������ ���ڸ� ���� �Է¹��� �� ����.
		char* Buffer = (char*)"�ѱ�";

		scanf("%s", Buffer);

		printf("%s", Buffer);


	}
	{
		char Buffer[128] = "";

		scanf("%s", Buffer);

		printf("%s", Buffer);

	}
	{
		// �����Ϳ� �迭�� �������� ����.
		// �����͵� �迭ó�� ��밡��.
		// malloc => �޸� �Ҵ�.
	}
	*/
	{
		// ; �� ���̴� �߰�ȣ(���� �ʱ�ȭ, )
		int Array[5] = { 10, 20, 30, 40, 50 };

		int* pArr = Array;
		int* pArr2 = Array + 2;

		printf("1. �ּ� : %d\n", Array); 
		printf("2. �� : %d\n", *Array); // ������ �ּ�
		printf("3. �� : %d\n", *(Array + 1)); // 20
		printf("4. �ּ� : %d\n", pArr + 2); // �ε�����ȣ 2�ּ�(30)��
		printf("5. �� : %d\n", *(pArr + 2));
		printf("6. %d\n", pArr[3]); // 40
		printf("7. %d\n", *pArr2); // 30
		printf("8. %d\n", pArr2 - pArr); // 
		printf("9. %d\n", pArr2[-2]);
		printf("10. %d\n", *(++pArr));
		// *�� ���̰ų� []�� �ᵵ �Ѵ� �����͸� �����
	}
	{
		int Array[5] = { 10, 20, 30, 40, 50 };
		Print_arr(Array, 5);
		Print_arr1(Array, 5);

		// ���� ����
		int size = sizeof(Array) / sizeof(Array[0]);
		printf("%d\n", size);
	}

	return 0;
}

// ** �迭�� �Լ��� ���� �� ������ �ݵ�� �迭�� ũ�⸦ �Բ� �����Ͽ��� �Ѵ�.
void Print_arr(int* _pArr, int _size)
{
	for (int i = 0; i < _size; ++i)
	{
		printf("%d. %d\n", i, _pArr[i]);
		// printf("2. %d\n", *(pArr + i));
	}
}

// �迭�� ������ �뿡�� [int * ]�� ���� ������� int Array[]�� ���� ������ �����ϴ�.
void Print_arr1(int _pArr[], int _size)
{
	// int Size = sizeof(_pArr) / sizeof(_pArr[0])
	for (int i = 0; i < _size; ++i)
	{
		printf("%d. %d\n", i, _pArr[i]);
		// printf("2. %d\n", *(pArr + i));
	}
}