/*
* Vector
*/

#include <stdio.h>
#include <malloc.h>


int* Front;
int* Back;

int size = 0;
int* Vector = nullptr;

void push_back(int _value);

int main()
{
	
	push_back(10);

	push_back(20);

	push_back(30);

	printf("%d\n", *(Vector + 8));
	
	printf("%d\n", *Front);
	printf("%d\n", *Back);
	printf("%d\n", size);
	/*
	int* Vector = (int*)malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; ++i)
	{
		Vector[i] = i;
	}

	Vector[0] = 0;
	Vector[1] = 1;

	Front = Vector;
	Back = &Vector[9];

	printf("%d\n", *Front);
	printf("%d\n", *Back);
	*/



	return 0;
}
void push_back(int _value)
{
	int* Temp = (int*)malloc(sizeof(int) * size);

	for (int i = 0; i < size; ++i)
		Temp[i] = Vector[i];

	free(Vector);

	++size;

	Vector = (int*)malloc(sizeof(int) * size);

	for (int i = 0; i < size - 1; ++i)
		Vector[i] = Temp[i];
	
	free(Temp);

	Vector[size - 1] = _value;
	// 값을 재입력하면 앞에 입력한 값(인덱스)들이 초기화 됨. 공간이 완전히 새로 만들어져서?
	// Vector[0] = 값이 없음. ,Vector[1] = 20, 공간 재생성의 문제, 여기서 공간을 만들고 나는 따로 참조.
	Front = Vector;
	Back = &Vector[size - 1];

}
