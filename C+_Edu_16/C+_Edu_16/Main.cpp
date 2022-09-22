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
//** �߰� ����
void insert(int _where, int _value);
void erase(int _where);
void output();

int main(void)
{
	int* Vector = nullptr;
	front = (int*)malloc(sizeof(int));

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

	insert(2, 25);

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
	// **capacity(���뷮) ��(��) size(���� ������ ����)�� ���� ���ٸ�
	// ** ���Ҹ� ���̻� �߰� �� �� ���� �����̹Ƿ�
	if (capacity == size)
	{
		// ** ���뷮�� �÷��ش�.
		int result = (capacity >> 1); // Ŀ�н����� ��
		capacity += (result < 1) ? 1 : result; 

		// ** ���뷮�� �þ�� �Ǹ� ���� �޸� ���� ���뷮�� �÷��� �ϱ� ������
		// ** �ø��� �������� �����͸� ���� �� �� �����Ƿ� �̸� �����͸� �Ű� �ξ�� �Ѵ�.
		// ** �׷��� ���� �ʿ��� �ӽ��� ������ ����.
		//int* Temp = (int*)malloc(sizeof(int) * size); // Ŀ�н�Ƽ�� �����޴ٸ� ���� ���� �Ҵ�
		//printf("size : %d\n", size);
		//printf("capacity : %d\n", capacity);
		
		// ** �ӽ��� ������ ���뷮��ŭ ���Ӱ� ����
		int* Temp = (int*)malloc(sizeof(int) * capacity); // ������

		// ** �ӽ��� ������ ���� �����͸� ���� �Ѵ�.
		// ** �̶�! �ּ��� ���簡 �ƴ϶� ���� ���簡 �̷�� ���� �Ѵ�.
		for (int i = 0; i < size; ++i)
			Temp[i] = front[i];

		// ** ���� �޸� ������ �ʱ�ȭ ���ش�.(�������ش�)
		free(front);

		// ** �þ ���뷮 ��ŭ�� ũ��� ���Ӱ� ������ �Ҵ� �Ѵ�.
		//front = (int*)malloc(sizeof(int) * capacity);

		// ** ���Ӱ� �Ҵ�� ������ �����ص� �����͸� �ٽ� ���´�.
		//for (int i = 0; i < size; ++i)
		//	front[i] = Temp[i];

		// ** �ӽ��� �����Ҵ��� �����Ѵ�.
		//free(Temp);
		// ** �ӽ� ������ �ּҸ� front���� ����.(�޾ƿ´�)
		// ** Temp�� ������ �ش� ������ ���������� �Ҹ�ȴ�.(����)
		// ** ������ �Ҵ�� �޸� �ּҴ� front�� ���޵Ǿ�(����) �����Ƿ� ��� ����.
		front = Temp; // ������
		
		
	}

	// ** ���� ��ġ������ �׻� ���뷮�� ���´�.
	// ** size < capacity�� ���� �����̹Ƿ� ���� �߰��� �����ϴ�.
	front[size] = _value;

	// ** ������������ �ּҰ� �ٲ�����Ƿ� ���Ӱ� ���� ���ش�.
	Back = &front[size];

	// ** ���Ұ� �߰��Ǿ����Ƿ� size�� �����ش�.
	++size;
}
	
void insert(int _where, int _value)
{
	if (capacity == size)
	{
		int result = (capacity >> 1); // Ŀ�н����� ��
		capacity += (result < 1) ? 1 : result;

		int* Temp = (int*)malloc(sizeof(int) * capacity);
		for (int i = 0; i < size - 1; ++i)
			Temp[i] = front[i];
		free(front);

		front = Temp;	
	}
	--_where;

	for (int i = _where; i > size; --i)
		front[i + 1] = front[i];

	front[_where] = _value;

	Back = &front[size];
	++size;
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