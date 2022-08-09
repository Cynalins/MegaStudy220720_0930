/*
* chapter 06
*/

#include <stdio.h>

int main(void)
{
	// **�ݺ��� (while)
	// ��� �ݺ������� �ʱ⹮, ���ǹ�, �������� �ʿ��ϴ�.
	// while(����) , ������ ���� ��쿡�� �ݺ��ȴ�.(����ȴ�)
	// while�� : ������ ���ѷ��� ������ ��, Ż���� �� �ִ� ��Ұ� �ʿ��ϴ�. ���ѷ����� ���� ����.
	{
		while (true)
		{
			if (true)
			{
				break;
			}
		}
	}
	// ���� Ƚ�� ��ŭ �ݺ��ؾ��Ҷ�, �ʱ⹮,���ǹ�,������ �� ������ ��Ұ� �ʿ��ϴ�.
	{
		int i = 0; // �ʱ⹮.

		while (i < 10) // ���ǹ�
		{
			printf("while �ݺ��� %d\n", i + 1);
			++i; // ������.
		}
	}

	// *�ݺ��� (for) = ���� Ƚ����ŭ �ݺ��ؾ��Ҷ� ���� ����.
	{
		// for(�ʱ⹮; ���ǹ�; ������)
		for (int i = 0; i < 10; ++i)
		{
			printf("for �ݺ��� %d\n", i);
		}
	}

	// *for���� ���ѷ��� �����϶�
	{
		for (; true;)
		{
			printf("for �ݺ���\n");
			if (true)
			{
				break;
			}
		}
	}

	// do ~ while���� ������ �ѹ��� �����. �� ���� ������ ���̸� �ݺ�, �����̸� �ݺ�x
	{
		do
		{
			// ** ���� 1ȸ�� �ݵ�� �����.
			printf("���ʿ� �ѹ��� �����.");
			break;
			// ** �� �Ŀ� ������ Ȯ���ϰ� ������ true�� ��� �ݺ�.
		} while (false);
		printf("\n\n");
	}

	//===========================================================================================

	// [������]
	// for���� 3�� ��ø�� ����ǥ���̶�� �� �� ����. x, y, z;
	{
		int x, y;
		printf("���۴� / ���� �Է� : ");
		scanf_s("%d %d", &x, &y);

		for (int i = x; i < y; ++i)
		{
			if (i % 2 == 0)
			{
				continue;
			}
			else
			{
				for (int j = 1; j < 10; ++j)
				{
					// if(i % 2 || !(j % 2))
					//		continue;
					if (j % 2 != 0)
					{
						continue;
					}
					else
					{
						printf("%d * %d = %02d | ", i, j, i * j);
					}
				}
			}
			printf("\n");
		}
	}

	{
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				printf("��");
			}
			printf("\n");
		}
		printf("\n\n");
	}

	return 0;
}