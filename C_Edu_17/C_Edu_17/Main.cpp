/*
* chapter 17
*/

#include "headerList.h"


int main()
{
	/*
	{
		// * 개별 초기화 방법
		char Array[10] = { 'a','b','c','d','e','f','g','h','i','j' };

		for (int i = 0; i < 10; ++i)
		{
			printf("%c", Array[i]);
		}
		printf("\n");
	}
	{
		// * 문자열 초기화 방법
		char Array[10] = { "abcdefghi" };
		// * 문자열 초기화 시에는 마지막 문자열이 끝나는 지점에 NULL값이 들어가야 한다.
		// * NULL 값의 공간이 1byte 만큼 필요하므로 개별 초기화 방법보다 공간이 1 더 필요하다.
	
		printf("%s\n", Array);

		for (int i = 0; i < 10; ++i)
		{
			printf("%c", Array[i]);
		}
		printf("\n");
	
	}
	// NULL == '\0' 널문자

	{
		// * 문자 배열 초기화
		char Buffer[] = { 'a','b','c','d','e','f','g','h','i',NULL };

		// * Buffer의 주소를 str1으로 대입
		char* str1 = Buffer;

		// * str1변수가 받은 주소를 str2에 동일하게 넘겨준다.
		// * str1과 str2가 같은 주소를 참조 받고있다.
		char* str2 = str1;
		printf("%p\n", str2);

		// 이때 str1의 주소에 있는 내용을 변경하게 된다면
		str1[3] = 'a';

		char* str3 = str2;

		// str2도 같은 주소를 참조 받았기 때문에 내용이 함께 변경 되는것을 알 수 있다.
		printf("%p\n", str3);
		printf("%s\n", str1);
	}
	*/

	{
		// * 파일 입출력(저장하기)
		{

			FILE* pf = fopen("../Datas/Datas.txt", "w");

			if (pf == NULL)
			{
				printf("파일을 열지 못했습니다\n");
			}
			else
			{
				int age = 32;
				char name[128] = "홍길동";

				fscanf(pf, "%d", &age);
				fgets(name, sizeof(name), pf);
				fprintf(pf, "%s : %d", name, age);
			}
			fclose(pf);
		}

	}
	// 파일 불러오기
	{
		FILE* pf = fopen("../Datas/Datas.txt", "r");

		int age[20];
		char name[20][128] = "홍길동";
		
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