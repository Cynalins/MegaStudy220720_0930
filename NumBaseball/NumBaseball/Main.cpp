/*
* ���ھ߱� ����.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int com[4];
int player[4];
int playerNum;

int main() {

	int strike = 0;
	int ball = 0;
	
	// com �����ѹ�.
	srand(time(NULL));
	for (int i = 0; i < 4; i++) 
	{
		com[i] = rand() % 10;
		if (com[0] == 0)
		{
			continue;
		}
		for (int j = 0; j < i; j++)
		{
			if (com[i] == com[j])
			{
				i--;
			}
		}
	}
	printf("%d,%d,%d,%d", com[0], com[1], com[2], com[3]);
	
	// ����� �� �Է�
	printf("4�ڸ� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &playerNum);

	player[0] = playerNum / 1000;
	player[1] = (playerNum / 100) % 10;
	player[2] = (playerNum / 10) % 10;
	player[3] = playerNum % 10;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (com[i] == player[j])
			{
				strike++;
			}
			else if (i != j && com[i] == player[j])
			{
				ball++;
			}
		}
	}

	if (ball >= 1 || (strike >= 1 && strike < 4))
	{
		printf("%d ��Ʈ����ũ, %d ��", strike, ball);
	}
	else if (strike == 4)
	{
		printf("�����Դϴ�.");
	}
	else
	{
		printf("OUT");
	}

	


	return 0;
}




