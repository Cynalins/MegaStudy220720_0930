/*
* chapter 17
*/

#include "headerList.h"


int main()
{
	/*
	{
		// * ���� �ʱ�ȭ ���
		char Array[10] = { 'a','b','c','d','e','f','g','h','i','j' };

		for (int i = 0; i < 10; ++i)
		{
			printf("%c", Array[i]);
		}
		printf("\n");
	}
	{
		// * ���ڿ� �ʱ�ȭ ���
		char Array[10] = { "abcdefghi" };
		// * ���ڿ� �ʱ�ȭ �ÿ��� ������ ���ڿ��� ������ ������ NULL���� ���� �Ѵ�.
		// * NULL ���� ������ 1byte ��ŭ �ʿ��ϹǷ� ���� �ʱ�ȭ ������� ������ 1 �� �ʿ��ϴ�.
	
		printf("%s\n", Array);

		for (int i = 0; i < 10; ++i)
		{
			printf("%c", Array[i]);
		}
		printf("\n");
	
	}
	// NULL == '\0' �ι���

	{
		// * ���� �迭 �ʱ�ȭ
		char Buffer[] = { 'a','b','c','d','e','f','g','h','i',NULL };

		// * Buffer�� �ּҸ� str1���� ����
		char* str1 = Buffer;

		// * str1������ ���� �ּҸ� str2�� �����ϰ� �Ѱ��ش�.
		// * str1�� str2�� ���� �ּҸ� ���� �ް��ִ�.
		char* str2 = str1;
		printf("%p\n", str2);

		// �̶� str1�� �ּҿ� �ִ� ������ �����ϰ� �ȴٸ�
		str1[3] = 'a';

		char* str3 = str2;

		// str2�� ���� �ּҸ� ���� �޾ұ� ������ ������ �Բ� ���� �Ǵ°��� �� �� �ִ�.
		printf("%p\n", str3);
		printf("%s\n", str1);
	}
	*/

	{
		// * ���� �����(�����ϱ�)
		{

			FILE* pf = fopen("../Datas/Datas.txt", "w");

			if (pf == NULL)
			{
				printf("������ ���� ���߽��ϴ�\n");
			}
			else
			{
				int age = 32;
				char name[128] = "ȫ�浿";

				fscanf(pf, "%d", &age);
				fgets(name, sizeof(name), pf);
				fprintf(pf, "%s : %d", name, age);
			}
			fclose(pf);
		}

	}
	// ���� �ҷ�����
	{
		FILE* pf = fopen("../Datas/Datas.txt", "r");

		int age[20];
		char name[20][128] = "ȫ�浿";
		
		int count = 0;
		while (fgetc(pf) != NULL)
		{
			int n = fscanf(pf, "%d", &age);
			fgets(name[count], sizeof(name), pf);

			printf("%s\n", name[count]);
			fflush(pf);
		}
	}
	



	return 0;
}