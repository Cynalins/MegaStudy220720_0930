#include "Headers.h"

struct Info
{
	int Kor;
	int Eng;
	int Math;

	Info() : Kor(0), Eng(0), Math(0) {}
	Info(int _kor, int _eng, int _math) : Kor(_kor), Eng(_eng), Math(_math) {}
};

// ** Object
class Object
{
protected:
	Info info;
	int key;
public:
	int GetKey() { return key; }
	virtual void Initialize()PURE;
	void Render()
	{
		cout << "국어 점수 : " << info.Kor << "영어 점수 : " << info.Eng << "수학 점수 : " << info.Math << endl << endl;
	}
public:
	Object() {}
	Object(Info _info) : info(_info) {}
};

// ** Student
class Student : public Object
{
public:
	void Initialize()
	{
		key = 1;
	}
public:
	Student() {}
	Student(Info _info) : Object(_info){}
};

// ** Teacher
class Teacher : public Object
{
public:
	void Initialize()
	{
		key = 2;
	}
public:
	Teacher() {}
	Teacher(Info _info) : Object(_info) {}
};

class ObjectManager
{
private:
	static ObjectManager* Instance;
public:
	static ObjectManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new ObjectManager();
		return Instance;
	}
public:
	map<int, list<Object*>> Objects;
public:
	void AddObject(Object* _pobj);
	void Render();
private:
	ObjectManager() {};
public:
	~ObjectManager() {};
};

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
		// Info info = Info(rand() % 71 + 30, rand() % 71 + 30, rand() % 71 + 30);   스택의 낭비
		// ** 오브젝트를 생성
		// 함수를 써서 만드는것보다 생성자를 사용하여서 만드는 것이 훨씬 효율적이다.
		Object* pObj = new Student(Info(rand() % 71 + 30, rand() % 71 + 30, rand() % 71 + 30));
		pObj->Initialize();

		ObjectManager::GetInstance()->AddObject(pObj);
	}

	ObjectManager::GetInstance()->Render();
	
	/*
	for (map<int, list<Object*>>::iterator iter = Objects.begin(); iter != Objects.end(); ++iter)
	{
		for (list<Object*>::iterator iter2 = (*iter).second.begin(); iter2 != (*iter).second.end(); ++iter2)
		{
			cout << (*iter).first << " : " <<  << (*iter2)->Eng << (*iter2)->Math << endl;
		}	
	}
	for (map<int, list<Object*>>::iterator iter = Objects.begin(); iter != Objects.end(); ++iter)
	{
		cout << (*iter).first << ":" << (*iter).second << endl;
	}
	*/
	return 0;
}

/*
Object* CreateObject(int _kor, int _eng, int _math)
{
	Object* pobj = new Object;

	pobj->Kor = _kor;
	pobj->Eng = _eng;
	pobj->Math = _math;

	pobj->Mean = (_kor + _eng + _math) / 3;

	return pobj;
}
*/
void ObjectManager::AddObject(Object* _pobj)
{
	map<int, list<Object*>>::iterator iter = Objects.find(_pobj->GetKey());

	if (iter == Objects.end())
	{
		list<Object*> temp;
		temp.push_back(_pobj);
		Objects.insert(make_pair(_pobj->GetKey(), temp));
	}
	iter->second.push_back(_pobj);
}

void ObjectManager::Render()
{
	for (auto iter = Objects.begin(); iter != Objects.end(); ++iter)
	{
		cout << iter->first << endl;
		for (auto iter2 = iter->second.begin(); iter2 != iter->second.end(); ++iter2)
		{
			(*iter2)->Render();
		}
	}
}

/*
void AddObject(int _key, Object* _pobj)
{
	map<int, list<Object*>>::iterator iter = Objects.find(_key);

	// ** 데이터가 없다면....
	if (iter == Objects.end())
	{
		// ** 리스트를 새롭게 생성하고
		list<Object*> temp;
		// ** 생성된 리스트에 오브젝트를 추가
		temp.push_back(_pobj);
		// ** 오브젝트가 추가된 리스트를 map에 넣는다.
		Objects.insert(make_pair(_key, temp));
	}
	else // 찾는 데이터가 있다면
		// ** 그곳에 오브젝트를 추가한다.
		iter->second.push_back(new Object(10, 20, 30));
}
*/
