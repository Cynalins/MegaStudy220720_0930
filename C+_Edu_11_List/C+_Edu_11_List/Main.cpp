#include <stdio.h>
#include <malloc.h>

struct Node
{
	int Value;
	Node* Next;
};

Node* Begin;
Node* End;

void AddData(int _Value);
void Output();

int main()
{

	Node* List = (Node*)malloc(sizeof(Node));
	Begin = List; // �׻� ù��°�� ��ȯ.(�ּ�, ���)
	End = List;
	List -> Value = 10;

	AddData(20);
	AddData(30);
	AddData(40);

	Output();


	return 0;
}

// ��� ����. ( END �� �������̹Ƿ� END�� Next�� �� ���� ���� -> �� �Է� �Լ�) 
void AddData(int _Value)
{
	End->Next = (Node*)malloc(sizeof(Node));
	End = End->Next;

	End->Next = nullptr;
	End->Value = _Value;
	
}

void Output()
{
	Node* NodeList = Begin; // Begin�� ���鼭 ���� �����ϰԵǸ� Begin�� �ƴϱ⶧��.
	while (NodeList != nullptr)
	{
		printf("%d\n", NodeList->Value);
		NodeList = NodeList->Next;
	}
}