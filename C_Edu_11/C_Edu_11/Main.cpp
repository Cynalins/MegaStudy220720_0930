/*
* chapter 11
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>

void Print_arr(int*, int);
void Print_arr1(int _pArr[], int _size);

int main()
{
	/*
	{
		// ** 배열을 사용한 문자 출력
		// char Buffer[5] = "한글";
		char Buffer[] = "한글";
		printf("%c%c%c%c\n",
			Buffer[0],
			Buffer[1],
			Buffer[2],
			Buffer[3]);
	}

	{
		// ** 포인터를 사용한 문자 출력
		// ** "한글" = 문자열로 초기화 되어있기 때문에 char[5] 만큼의 길이를 갖고있다.
		// ** 문자열 또한 배열로 인식하기 때문에 다음과 같이 형 변환이 필요하다.
		char* Buffer = (char*)"한글"; // 문자열 앞에있는 (char*)는 문자열포인터로 형변환.
		printf("%c%c%c%c",
			Buffer[0],
			Buffer[1],
			Buffer[2],
			Buffer[3]);
	}

	{
		// ** 포인터 변수에 문자를 직접 입력받을 수 없음.
		char* Buffer = (char*)"한글";

		scanf("%s", Buffer);

		printf("%s", Buffer);


	}
	{
		char Buffer[128] = "";

		scanf("%s", Buffer);

		printf("%s", Buffer);

	}
	{
		// 포인터와 배열은 연관성이 있음.
		// 포인터도 배열처럼 사용가능.
		// malloc => 메모리 할당.
	}
	*/
	{
		// ; 을 붙이는 중괄호(변수 초기화, )
		int Array[5] = { 10, 20, 30, 40, 50 };

		int* pArr = Array;
		int* pArr2 = Array + 2;

		printf("1. 주소 : %d\n", Array); 
		printf("2. 값 : %d\n", *Array); // 시작점 주소
		printf("3. 값 : %d\n", *(Array + 1)); // 20
		printf("4. 주소 : %d\n", pArr + 2); // 인덱스번호 2주소(30)ㅇ
		printf("5. 값 : %d\n", *(pArr + 2));
		printf("6. %d\n", pArr[3]); // 40
		printf("7. %d\n", *pArr2); // 30
		printf("8. %d\n", pArr2 - pArr); // 
		printf("9. %d\n", pArr2[-2]);
		printf("10. %d\n", *(++pArr));
		// *을 붙이거나 []를 써도 둘다 데이터를 출력함
	}
	{
		int Array[5] = { 10, 20, 30, 40, 50 };
		Print_arr(Array, 5);
		Print_arr1(Array, 5);

		// 같은 지역
		int size = sizeof(Array) / sizeof(Array[0]);
		printf("%d\n", size);
	}

	return 0;
}

// ** 배열을 함수로 전달 할 때에는 반드시 배열의 크기를 함께 전달하여야 한다.
void Print_arr(int* _pArr, int _size)
{
	for (int i = 0; i < _size; ++i)
	{
		printf("%d. %d\n", i, _pArr[i]);
		// printf("2. %d\n", *(pArr + i));
	}
}

// 배열을 전달할 대에는 [int * ]와 같은 방식으로 int Array[]와 같이 전달이 가능하다.
void Print_arr1(int _pArr[], int _size)
{
	// int Size = sizeof(_pArr) / sizeof(_pArr[0])
	for (int i = 0; i < _size; ++i)
	{
		printf("%d. %d\n", i, _pArr[i]);
		// printf("2. %d\n", *(pArr + i));
	}
}