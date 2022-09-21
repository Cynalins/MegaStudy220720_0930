/*
 * Vector
 */

// ����Ʈ�� ��ġ�� �������̷� ����(���� �޸�)
// ������ Ʈ��������°� �ִ�. 
#include <stdio.h>
#include <malloc.h>

int* front;
int* Back;

int size = 0;
int capacity = 0; // ���뷮. vector�� ����, �ѻ������� int�� ������ �� Ű����.

void push_back(int _value);
void erase(int _where);
void output();

int main(void)
{
	int* Vector = nullptr;

	push_back(10);
	push_back(20);
	push_back(30);
	push_back(40);
	push_back(50);
	push_back(60);
	push_back(70);

	printf("%d\n", *front);
	printf("%d\n", *Back);
	printf("%d\n", size);

	output();
	/*
	for (int i = 0; i < 10; ++i)
	{
		Vector[i] = i;
	}
	Fornt = &Vector[0];
	Back = &Vector[9];
	printf("%d\n", *Fornt);
	printf("%d\n", *Back);
	*/
	return 0;
}

void push_back(int _value)
{
	int* Temp = (int*)malloc(sizeof(int) * size);
	if (capacity == size)
	{
		int result = (capacity >> 1);
		capacity += (result < 1) ? 1 : result;

		printf("size : %d\n", size);
		printf("capacity : %d\n", capacity);

		for (int i = 0; i < size; ++i)
			Temp[i] = front[i];

		free(front);
	}
	else
	{
		// ���ڿ� ���縦 �����ʴ´�....
		
	}
	/*
	for each (object var in collection_to_loop)
	{

	}
	*/
	++size;

	front = (int*)malloc(sizeof(int) * capacity);

	for (int i = 0; i < size - 1; ++i)
		front[i] = Temp[i];

	free(Temp);

	front[size - 1] = _value;

	Back = &front[size - 1];
}

void output()
{
	printf("\n[ ��ü ���]\n");

	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", front[i]);
		// printf("%p\n", &front[i]);
	}
}

void erase(int _where)
{
	--size;
	for (int i = _where - 1; i < size; ++i)
		front[i] = front[i + 1];


}