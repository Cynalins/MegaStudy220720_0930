/*
* 숫자야구 게임.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int com[4];
int player[4];

int main() {
	
	srand(time(NULL));
	for (int i = 0; i < 4; i++) 
	{
		com[i] = rand() % 10;
		if (com[0] == 0)
		{
			continue;
		}
		for (int j = 0; j < 4; j++)
		{
			if (com[i] == com[j])
			{
				i--;
			}
		}
	}
	printf("%d,%d,%d,%d", com[0], com[1], com[2], com[3]);

	


	return 0;
}




