#include <stdio.h>
#include <malloc.h>

struct Node
{
	int Value;
	Node* Next;
};

Node* Begin;
Node* End;
int size;

void AddData(int _Value);
void Output();
void Test2(Node* _List, int _Value);
void Testcase1(Node* _List, const int _Value);
int Pop();


int main()
{
	Node* List = (Node*)malloc(sizeof(Node));
	Begin = List; // �׻� ù��°�� ��ȯ.(�ּ�, ���)
	End = List;
	List -> Value = 10;
	size = 1;

	AddData(20);
	AddData(30);
	AddData(40);
	Test2(List, 50);
	Testcase1(List, 60);
	
	Output();
	
	printf("������ �����͸� �����մϴ� \n");
	printf("%d\n", Pop());

	Output();
	

	return 0;
}

// ** �ݺ����� ����� ������ �߰�.
void Test2(Node* _List, int _Value)
{
	// ** ù��° ��ġ�� ��带 �޴´�.
	Node* pList = _List;

	// ** ������ ��带 ã�´�
	while (pList->Next != nullptr)
		pList = pList->Next;

	// ** ������ ��带 ã�Ҵٸ� ������ ����� ���� ��忡 ���ο� ��带 �߰�����.
	pList->Next = (Node*)malloc(sizeof(Node));
	// ** �������� �̵�.
	pList = pList->Next;

	// ** ������ �ʱ�ȭ
	pList->Value = _Value;
	pList->Next = nullptr;

	End = pList;

	++size;

}

// ��� ����. ( END �� �������̹Ƿ� END�� Next�� �� ���� ���� -> �� �Է� �Լ�) 
void AddData(int _Value)
{
	End->Next = (Node*)malloc(sizeof(Node));
	End = End->Next;

	End->Next = nullptr;
	End->Value = _Value;
	
	++size;
}

// ** ����Լ��� ȣ���ϴ� ���.
void Testcase1(Node* _List, const int _Value)
{
	// ** ����Ʈ�� �����������͸� ã�´�.
	if (_List->Next == nullptr)
	{
		// ** ������ �����Ͷ�� ���� ��忡 �߰��� ���ο� ��带 ����.
		Node* pList = (Node*)malloc(sizeof(Node));

		// ** �����͸� �ʱ�ȭ �Ѵ�.
		pList->Value = _Value;
		pList->Next = nullptr;

		// ** ���Ӱ� ������ ��带 ������ ��ġ�� �߰�.
		_List->Next = pList;

		End = pList;
	}
	else
		// ** ������ ��尡 �ƴ϶�� ������带 ã�� ���� ���ȣ���Ѵ�.
		// ** ����Լ��� ȣ���� ������ ���� ��带 �����ش�.
		Testcase1(_List->Next, _Value);

	++size;
}

void Output()
{
	Node* NodeList = Begin; // Begin�� ���鼭 ���� �����ϰԵǸ� Begin�� �ƴϱ⶧��.
	printf("\n<��ü �����͸� ��� �մϴ�.>\n");
	while (NodeList != nullptr)
	{
		printf("%d\n", NodeList->Value);
		NodeList = NodeList->Next;
	}
}

int Pop()
{
	// ** ������ ��ġ�� ���� �޾ƿ´�.
	int Value = End->Value;

	// ** ó�� ��带 ����
	Node* pList = Begin;
	
	// ** ����Ʈ�� ��ü ������ ��ŭ �ݺ�
	for (int i = 0; i < size - 1; ++i)
	{
		// ** ���� ����� ���� ���� ����� ���� ���� ��带 ã�´ٸ�
		if (pList->Next->Value == Value)
		{
			// ** ������� ������ ����� ���� ����̹Ƿ� ������ ���� �ʱ�ȭ.
			End = pList;

			// ** ���� ��带 ������ ���� ����
			pList = pList->Next;

			break;
		}
		// ** if������ ������ ��带 ã�� ���ߴٸ� ���� ���� �̵�.
		pList = pList->Next;
	}
	// ** �ݺ����� ����Ǿ��ٸ� ���� ���� ������ ��� �̹Ƿ� �������ش�.
	free(pList);
	// ** �׸��� ������ ����� ��ġ�� nullptr�� �ʱ�ȭ �Ѵ�.
	End->Next = nullptr;

	// ** ���Ұ� �����Ǿ����Ƿ�, ����� �ٿ��ش�.
	--size;

	// ** ������ ������ ��� ���� ��ȯ�ϰ� �Լ��� �����Ѵ�.
	return Value;
}
