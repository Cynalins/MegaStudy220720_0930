/*
* chapter 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void n()
{
	printf("\n");
}

int main()
{
	{
		// ** �迭�� �������� ����

		// *�迭 ���� �� �ʱ�ȭ
		int Array[8] = { 0 };

		// * �ʱ�ȭ
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
		// �����͸� ����Ҷ� &(���ۼ�Ʈ)�����ڿ� �迭�� ���̸� �����ʴ� ���� : �ε��� �����ؼ�.

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
	// �ζ� ��ȣ�� �����ϴ� ���α׷��� �ۼ��� ���ô�.
	{

		/*
		int Number[5][6] = {
			{0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0}
		}
		*/
		int Number[5][6];
		srand(time(NULL));

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				//srand((i+1) * (j+1));
				Number[i][j] = rand() % 45 + 1;
			}
		}

		// ** ���� ����
		/*
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				for (int k = (j + 1); k < 6; ++k)
				{
					if (Number[i][j] > Number[i][k])
					{
						int temp = Number[i][j];
						Number[i][j] = Number[i][k];
						Number[i][k] = temp;
					}
				}
			}
		}
		*/
		// ���� ����
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				int select = j;
				for (int k = (j + 1); k < 6; ++k)
				{
					if (Number[i][select] > Number[i][k])
					{

						// 45, 30, 18, 25, 44, 9 
						select = k;
					}
				}
				int temp = Number[i][j];
				Number[i][j] = Number[i][select];
				Number[i][select] = temp;
			}
		}
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				printf("%02d ", Number[i][j]);
				
			}
			printf("\n");
		}
		
		
		


	}








	return 0;
}