#include <stdio.h>
#include <malloc.h>

int* front;
int* end;

int* vector = nullptr;

int size = 0;

void push_back(int _value);
void pop();
void erase(int _value);
void clear();

int main()
{

	push_back(20);
	push_back(30);
	push_back(40);
	push_back(50);
	push_back(60);
	pop();
	erase(40);
	erase(30);

	printf("front = %d\n", *front);
	printf("end = %d\n", *end);
	for (int i = 0; i < size; ++i)
	{
		printf("vector[%d] = %d\n", i, *(&vector[i]));
	}

	printf("%d\n", *(&vector[3]));

	clear();
	printf("clearÀÌÈÄ %d\n", *(&vector[0]));

	;
	return 0;
}
void push_back(int _value)
{
	int* temp = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; ++i)
		temp[i] = vector[i];

	free(vector);

	++size;

	vector = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; ++i)
		vector[i] = temp[i];

	free(temp);
	vector[size - 1] = _value;

	front = &vector[0];
	end = &vector[size - 1];
}
void pop()
{
	--size;
	int* temp = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; ++i)
		temp[i] = vector[i];

	free(vector);

	vector = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; ++i)
		vector[i] = temp[i];

	front = &vector[0];
	end = &vector[size - 1];
}
void erase(int _value)
{
	/*
	int* temp = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; ++i)
		temp[i] = vector[i];

	free(vector);
	int swap_temp;
	for (int i = 0; i < size; ++i)
	{
		if (temp[i] == _value)
		{
			swap_temp = temp[i];
			temp[i] = temp[size - 1];
			temp[size - 1] = swap_temp;
			swap_temp = temp[i];
			break;
		}
	}
	--size;

	for (int i = 0; i < size; ++i)
	{
		if (temp[i] == swap_temp)
		{
			swap_temp = temp[i];
			temp[i] = temp[size - 1];
			temp[size - 1] = swap_temp;
			break;
		}
	}

	vector = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; ++i)
		vector[i] = temp[i];

	free(temp);

	front = &vector[0];
	end = &vector[size - 1];
	*/
	int* temp = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size - 1; ++i)
	{
		if (vector[i] == _value)
		{
			int swap_value = vector[i];
			vector[i] = vector[i + 1];
			vector[i + 1] = swap_value;
		}		
		temp[i] = vector[i];
	}
	free(vector);
	--size;

	vector = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; ++i)
		vector[i] = temp[i];
	
	free(temp);
	front = &vector[0];
	end = &vector[size - 1];
}
void clear()
{
	free(vector);
}