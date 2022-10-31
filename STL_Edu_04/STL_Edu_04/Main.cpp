#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <time.h>
#include <string>

using namespace std;

// **map

class Object
{
public:
	int Kor;
	int Eng;
	int Math;
	int Mean;
public:

};



int index = 0;
map<int, list<Object*>> Objects;

Object* CreateObject(int _kor, int _eng, int _math);
void AddObject(Object*, int);

int main()
{
	// map<int, vector<string>> : ������Ʈ�� �����ϴ� ���

	// list<map<int, string>> : �����͸��� �����ϴ¹��

	// vectorName.push_back(pobj)
	// mapName["key"] = vectorName;
	for (int i = 0; i < 5; ++i)
	{
		// ** ���� �� �ʱ�ȭ
		srand((unsigned int)time(NULL));

		// ** ������Ʈ�� ����
		Object* pobj = CreateObject(rand() % 71 + 30, rand() % 71 + 30, rand() % 71 + 30);
		// �Է¹��� ��
		int value = 0;
		// �Է�
		cout << "�Է� : "; cin >> value;
		AddObject(pobj, value);
	}
	for (map<int, list<Object*>>::iterator iter = Objects.begin(); iter != Objects.end(); ++iter)
	{
		for (list<Object*>::iterator iter2 = ; iter2 != ; ++iter2)
		{
			
		}
		cout << (*iter).first << " : " << (*iter).second << endl;
	}

	
	/*
	for (map<int, list<Object*>>::iterator iter = Objects.begin(); iter != Objects.end(); ++iter)
	{
		cout << (*iter).first << ":" << (*iter).second << endl;
	}
	*/


	return 0;
}

Object* CreateObject(int _kor, int _eng, int _math)
{
	Object* pobj = new Object;

	pobj->Kor = _kor;
	pobj->Eng = _eng;
	pobj->Math = _math;

	pobj->Mean = (_kor + _eng + _math) / 3;

	return pobj;
}

void AddObject(Object* _pobj, int _value)
{
	map<int, list<Object*>>::iterator iter = Objects.find(_value);

	// ** �����Ͱ� ���ٸ�....
	if (iter == Objects.end())
	{
		// ** ����Ʈ�� ���Ӱ� �����ϰ�
		list<Object*> temp;
		// ** ������ ����Ʈ�� ������Ʈ�� �߰�
		temp.push_back(_pobj);
		// ** ������Ʈ�� �߰��� ����Ʈ�� map�� �ִ´�.
		Objects.insert(make_pair(_value, temp));
	}
	else // ã�� �����Ͱ� �ִٸ�
		// ** �װ��� ������Ʈ�� �߰��Ѵ�.
		iter->second.push_back(CreateObject(10, 20, 30));
}