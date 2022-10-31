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
	// map<int, vector<string>> : 오브젝트를 관리하는 방식

	// list<map<int, string>> : 데이터만을 관리하는방식

	// vectorName.push_back(pobj)
	// mapName["key"] = vectorName;
	for (int i = 0; i < 5; ++i)
	{
		// ** 난수 값 초기화
		srand((unsigned int)time(NULL));

		// ** 오브젝트를 생성
		Object* pobj = CreateObject(rand() % 71 + 30, rand() % 71 + 30, rand() % 71 + 30);
		// 입력받을 값
		int value = 0;
		// 입력
		cout << "입력 : "; cin >> value;
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

	// ** 데이터가 없다면....
	if (iter == Objects.end())
	{
		// ** 리스트를 새롭게 생성하고
		list<Object*> temp;
		// ** 생성된 리스트에 오브젝트를 추가
		temp.push_back(_pobj);
		// ** 오브젝트가 추가된 리스트를 map에 넣는다.
		Objects.insert(make_pair(_value, temp));
	}
	else // 찾는 데이터가 있다면
		// ** 그곳에 오브젝트를 추가한다.
		iter->second.push_back(CreateObject(10, 20, 30));
}