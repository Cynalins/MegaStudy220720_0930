/*
* chapter 15
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	/*
	{
		// ** 1���� �迭 �� �ʱ�ȭ
		int Array[2] = {1, 2};
	}
	
	{
		// ** 2���� �迭 �� �ʱ�ȭ
		int Array[2][2] = { {1, 2}, {1, 2} };
	}

	{
		// ** 3���� �迭 �� �ʱ�ȭ
		int Array[2][2][2] = {			
			{
				{1, 2},
				{1, 2}
			},

			{
				{1, 2},
				{1, 2}
			}
		};
	}

	{
		// ** ������ �迭 �� �ʱ�ȭ
		int Array[2][3][4][5] =
		{
			{
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				}
			},
			{
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				},
				{
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 }
				}
			}

		};

		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				for (int k = 0; k < 4; ++k)
				{
					for (int l = 0; l < 5; ++l)
					{
						printf("%d", Array[i][j][k][l]);
					}
					printf("\n");
				}
				printf("\n");
			}
			printf("\n\n");
		}

	}
	*/
	// ========================================================================
	
	{
		// ** 3���� �迭�� ���ʱ�ȭ
		int Array[][3][4] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		
		for (int i = 0; i < 4; ++i)
		{

			for(int j = 0; j < 3; ++j)
				for (int k = 0; k < 4; ++k)
				{
					printf("%d", Array[i][j][k]);
				}
			printf("\n\n");
		}

	}

	// ========================================================================

	// ** double pointer
	{
		int number = 10;
		int* pnum = &number;

		int** ppnum = &pnum;

		// ** �ʱ�ȭ
		pnum = nullptr;
		

		// �ʱ�ȭ
		free(pnum); // �����.
		pnum = nullptr;
		ppnum = nullptr; // nullptr = NULL������.


		if (ppnum != nullptr)
		{
			printf("%d\n", **ppnum);
			printf("%d\n", *pnum);
			printf("%d\n", number);
		}

	}
	
	
	return 0;
}