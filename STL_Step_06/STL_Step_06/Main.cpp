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
		cout << "���� ���� : " << info.Kor << "���� ���� : " << info.Eng << "���� ���� : " << info.Math << endl << endl;
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
	// map<int, vector<string>> : ������Ʈ�� �����ϴ� ���

	// list<map<int, string>> : �����͸��� �����ϴ¹��

	// vectorName.push_back(pobj)
	// mapName["key"] = vectorName;
	for (int i = 0; i < 5; ++i)
	{
		// ** ���� �� �ʱ�ȭ
		srand((unsigned int)time(NULL));
		// Info info = Info(rand() % 71 + 30, rand() % 71 + 30, rand() % 71 + 30);   ������ ����
		// ** ������Ʈ�� ����
		// �Լ��� �Ἥ ����°ͺ��� �����ڸ� ����Ͽ��� ����� ���� �ξ� ȿ�����̴�.
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

	// ** �����Ͱ� ���ٸ�....
	if (iter == Objects.end())
	{
		// ** ����Ʈ�� ���Ӱ� �����ϰ�
		list<Object*> temp;
		// ** ������ ����Ʈ�� ������Ʈ�� �߰�
		temp.push_back(_pobj);
		// ** ������Ʈ�� �߰��� ����Ʈ�� map�� �ִ´�.
		Objects.insert(make_pair(_key, temp));
	}
	else // ã�� �����Ͱ� �ִٸ�
		// ** �װ��� ������Ʈ�� �߰��Ѵ�.
		iter->second.push_back(new Object(10, 20, 30));
}
*/
