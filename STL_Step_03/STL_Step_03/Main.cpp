#include "Headers.h"

class Object
{
public:
	int Kor;
	int Eng;
	int Math;

	int Mean;
public:
	Object() {};
	~Object() {};
};

Object* CreateObject(int _kor, int _eng, int _math);
bool Compare(Object*, Object*);

int main()
{
	list<Object*> Objects;


	Objects.push_back(CreateObject(20, 21, 22));
	Objects.push_back(CreateObject(30, 31, 32));
	Objects.push_back(CreateObject(40, 41, 42));
	Objects.push_back(CreateObject(50, 51, 52));

	Objects.push_front(CreateObject(10, 11, 12));
	
	/*
	for (list<Object*>::iterator iter = Objects.begin(); iter != Objects.end(); ++iter)
	{
		cout << (*iter)->Kor << endl;
		cout << (*iter)->Eng << endl;
		cout << (*iter)->Math << endl << endl;
	}
	*/

	cout << Objects.front()->Kor << endl;
	cout << Objects.front()->Eng << endl;
	cout << Objects.front()->Math << endl << endl;

	cout << Objects.back()->Kor << endl;
	cout << Objects.back()->Eng << endl;
	cout << Objects.back()->Math << endl << endl;

	cout << Objects.size() << endl << endl;

	list<Object*>::iterator iter = Objects.begin();
	Objects.insert(iter, CreateObject(60, 61, 62));

	/*
	for (list<Object*>::iterator iter = Objects.begin(); iter != Objects.end(); ++iter)
	{
		cout << (*iter)->Kor << endl;
		cout << (*iter)->Eng << endl;
		cout << (*iter)->Math << endl << endl;
	}
	*/
	// ** ���� �������� �ִ� ���Ҹ� ����.
	Objects.pop_back();

	// ** ù��°�� �ִ� ���Ҹ� ����
	Objects.pop_front();

	Objects.sort(Compare);

	/*
	cout << "[Compare]" << endl;
	for (list<Object*>::iterator iter = Objects.begin(); iter != Objects.end(); ++iter)
	{
		cout << (*iter)->Kor << endl;
		cout << (*iter)->Eng << endl;
		cout << (*iter)->Math << endl << endl;

		delete (*iter);
		*iter = nullptr;
	}

	Objects.clear();
	
	if (Objects.empty())
		cout << "����" << endl;
	*/
	
	// ���Ϳ� ����Ʈ�� ������
	// ���ʹ� ��ġ�� ã�ԵǸ� �ٷ� ������ �����ϴ�, ������ ����Ʈ�� ��ġ�� �˰� �Ǿ��� �Ͽ��� �ٷ� ������ �Ұ����ϴ�. 
	// ���ʹ� i�� �̿��Ͽ� �ٷ� ������ ����, ����Ʈ�� ��带 �̿��Ͽ� ����.

	Object* pNode = nullptr;

	for (list<Object*>::iterator iter = Objects.begin(); iter != Objects.end(); ++iter)
	{
		if ((*iter)->Mean > 30 && (*iter)->Mean < 40)
			pNode = (*iter);
	}
	
	cout << pNode->Kor << endl;
	cout << pNode->Eng << endl;
	cout << pNode->Math << endl << endl;
	

	return 0;
}

Object* CreateObject(int _kor, int _eng, int _math)
{
	Object* pobj = new Object;

	pobj->Kor = _kor;
	pobj->Eng = _eng;
	pobj->Math = _math;

	pobj->Mean = pobj->Kor + pobj->Eng + pobj->Math / 3;

	return pobj;
}

bool Compare(Object* _temp, Object* _dest)
{
	return _temp->Mean < _dest->Mean;
}
