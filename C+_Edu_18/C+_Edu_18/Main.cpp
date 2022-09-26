#include <stdio.h>
#include <Windows.h>

struct Vector2
{
	int x, y;

	Vector2() : x(0), y(0) { }

	Vector2(int _x, int _y) : x(_x), y(_y) { }
};

struct Object
{
	Vector2 Position;
	Vector2 Scale;
	char* Texture;
};

typedef struct Node
{
	Object* pObj;
	Node* Front;
	Node* Back;
	int index;
};

// ** ù��° ���Ҹ� ����Ű�� ���
Node* Begin;

// ** ������ ���Ҹ� ����Ű�� ���
Node* End;

int index;

Node* CreateNode();
Object* CreateObject(int _x, int _y, char* _Texture);
void BulletProgress(int _x, int _y, int index, char* _texture);
void Output();

int size = 0;

int main(void)
{
	// ** Begin�� BulletList�� ���� �������� ����Ų��.
	Node* BulletList = Begin = CreateNode();

	// ** �ʱ�ȭ ������ ��尡 �������� �����Ƿ� ����ų ��尡 ����.
	BulletList->Front = nullptr;
	BulletList->Back = nullptr;

	// ** Begin Object�� ����.
	BulletList->pObj = CreateObject(0, 0, (char*)"Begin");
	
	// ** �ε��� �ʱ�ȭ
	int index = 0;

	// ** ���� ���� ���۳��� ������ �����̱� ������ ���� 0���� ����.
	BulletList->index = ++index;

	// ** ��尡 �������� �ʱ� ������ �������� ����Ű�� ���ҵ� �������� ����.
	End = Begin;

	Object* Enemy = CreateObject(0, 0, (char*)"Enemy");

	ULONGLONG Time = GetTickCount64();


	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();
			system("cls");

			if (GetAsyncKeyState(VK_SPACE))
			{
				// BulletList->pObj = CreateObject(index, 0, (char*)"Bullet");
				BulletProgress(0, 0, ++index, (char*)"Bullet");
				//printf("%s", BulletList->pObj->Texture);
			}
			Output();
		}
	}

	return 0;
}

Node* CreateNode()
{
	Node* pNode = (Node*)malloc(sizeof(Node));

	pNode->pObj = nullptr;
	pNode->Front = nullptr;
	pNode->Back = nullptr;

	return pNode;
}

Object* CreateObject(int _x, int _y, char* _Texture)
{
	Object* pObj = (Object*)malloc(sizeof(Object));

	pObj->Position = Vector2(_x, _y);

	pObj->Texture = _Texture;
	pObj->Scale = Vector2(strlen(_Texture), 1);

	return pObj;
}

void BulletProgress(int _x, int _y, int _index, char* _texture)
{
	/* ���� ���� ��.
	Node* pNode = (Node*)malloc(sizeof(Node));
	pNode->Back = (Node*)malloc(sizeof(Node));

	pNode->Back->Front = pNode;

	pNode = pNode->Back;

	pNode->Back = nullptr;
	pNode->pObj = CreateObject(index, 0, (char*)"Bullet");

	printf("%s", pNode->pObj->Texture);
	*/
	// Ǯ��.
	// ** �ӽ��� ��忡 End�� ����Ű�� ���Ҹ� �Ѱ��ش�.
	Node* node = End;

	// ** ������ ��尡 ����Ű�� ���� ��ġ�� ���ο� ��带 ����.
	node->Back = CreateNode();
	// ** �׸��� ���� ���� ���Ӱ� ������ ����� ��ġ�� �̵���Ŵ.
	node = node->Back;

	// ** ���Ӱ� ������ ����� index�� �ʱ�ȭ.
	node->index = _index;

	// ** ���Ӱ� ������ ����� Obj�� object�� ����.
	node->pObj = CreateObject(_x, _y, _texture);

	// ** ���Ӱ� ������ ����� ���� ��带 �����ϰ�
	node->Front = End;
	// ** ���� ��尡 ����Ű�� ������ nullptr�� �ʱ�ȭ(����)
	node->Back = nullptr;

	// ** ��� �ʱⰪ�� ������ �Ϸ�Ǿ��ٸ�, ���Ӱ� ������ ��带 ������ ���� ����.
	End = node;
}
	

void Output()
{
	// ** ù��° ��带 �Խ� ��忡 ����
	Node* node = Begin;
	// ** ù��° ���� ���Ұ� �ƴϱ� ������ ���� ���� �̵���Ų��.
	node = node->Back;

	// ** ���� ��尡 �������� �ʰų�
	// ** ���� ��尡 ����Ű�� obj�� �������� ���� �� ���� �ݺ��Ͽ��ش�.
	while (node && node->pObj)
	{
		printf("%s : %d\n", node->pObj->Texture, node->index);
		// ** ������带 �������ش�.
		node = node->Back;
	}
}