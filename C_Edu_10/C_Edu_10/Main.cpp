/*
* chapter 10
*/

#include <stdio.h>

void n()
{
	printf("\n");
}

int main()
{
	{
		// ** �迭�� �������� ����

		int Array[8] = { 0 };

		for (int i = 0; i < 8; ++i)
		{
			Array[i] = i + 1;
			printf("%d\n", Array[i]);
		}
		n();
		
		// �迭�� �����͸� �ٶ� &�� ���� []�� �� �� �ִ�.

		// ** �迭�� �ε���(���ȣ)�� ���� ���·� �ּҹ�ȯ������ ���� �ּҸ� ���� �� �� �ִ�.
		printf("�����͸� ����� ���\n");
		int* iter = Array;

		for (int i = 0; i < 8; ++i)
		{
			printf("%d\n", (*(iter + i)));
			// i�� �÷����ϴ� ����. �����Ϳ� + 1���ϰԵǸ� �ε����� �������� 1��° �ּҸ� �ι�° �ּ� �� 4byte���� �ڷ� ����.
			// �� [i] > �ε������� , *(iter + i) > Array�迭�� 0��°�ּ� > 1��°�ּ� > 2��°�ּ�..... ��.
		}

		{
			int Array[8] = { 0 };

			// ** ����
			printf("�����͸� ����� ���\n");
			int* iter = Array;

			for (int i = 0; i < 8; ++i)
			{
				printf("%d\n", (*(iter + i)));

			}
		}
		


		// iter + i, *(iter + i)
	}


	return 0;
}