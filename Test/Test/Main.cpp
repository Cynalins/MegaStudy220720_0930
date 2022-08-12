#include <stdio.h>

void Line(int, int, int);

int main()
{
	int num1, num2, num3;
	int count = 0;


	printf("정수 3개를 입력하세요 : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	Line(num1, num2, num3);



	return 0;
}

void Line(int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
	{
		if (num2 > num3)
		{
			printf("%d > %d > %d", num1, num2, num3);
		}
		else
		{
			printf("%d > %d > %d", num1, num3, num2);
		}
	}
	else if (num2 > num1 && num2 > num3)
	{
		if (num1 > num3)
		{
			printf("%d > %d > %d", num2, num1, num3);
		}
		else
		{
			printf("%d > %d > %d", num2, num3, num1);
		}
	}
	else if (num3 > num1 && num3 > num2)
	{
		if (num1 > num2)
		{
			printf("%d > %d > %d", num3, num1, num2);
		}
		else
		{
			printf("%d > %d > %d", num3, num1, num2);
		}
	}
}