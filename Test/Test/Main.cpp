#include <stdio.h>

int main()
{
	// x�� �� �׸���
	{
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (i == j || (i + j) == 4)
					printf("��");
				else if (i != j)
					printf(" ");
			}
			printf("\n");
		}
	}

	int num;
	printf("�������Է��ϼ��� : ");
	scanf_s("%d", &num);
	
	

	for (int i = 0; i < num; ++i)
	{
		bool flag = true;
		for (int j = 0; j < i; ++j)
		{
			if (i % j == 0)
			{
				flag = false;
			}
		}

		if (flag)
		{
			printf("%d", i);
		}
	}



	return 0;
}