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
	Begin = List; // 항상 첫번째를 반환.(주소, 노드)
	End = List;
	List -> Value = 10;

	AddData(20);
	AddData(30);
	AddData(40);

	Output();


	return 0;
}

// 노드 증가. ( END 가 마지막이므로 END의 Next는 빈 공간 생성 -> 값 입력 함수) 
void AddData(int _Value)
{
	End->Next = (Node*)malloc(sizeof(Node));
	End = End->Next;

	End->Next = nullptr;
	End->Value = _Value;
	
}

void Output()
{
	Node* NodeList = Begin; // Begin이 돌면서 값이 증가하게되면 Begin이 아니기때문.
	while (NodeList != nullptr)
	{
		printf("%d\n", NodeList->Value);
		NodeList = NodeList->Next;
	}
}