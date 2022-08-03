/*
* 숫자야구 게임.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int com[4];
int player[4];

int main() {
	
	// com 랜덤넘버.
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
	
	// 사용자 수 입력
	printf("4자리 숫자를 입력하세요 : ");
	scanf_s("%d", &player);

	


	return 0;
}




