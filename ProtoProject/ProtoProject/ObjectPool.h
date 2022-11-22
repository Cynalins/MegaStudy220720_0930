#pragma once
#include "Headers.h"

// ������Ʈ Ǯ : ����(�߰�), (����, ����), ���� = �����
class Object;
class ObjectPool
{
private:
	static ObjectPool* Instance;
public:
	static ObjectPool* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new ObjectPool();
		return Instance;
	}
private:
	map<string, list<Object*>> EnableList;
	map<string, list<Object*>> DisableList;
	map<string, int> Counts;
public:
	map<string, list<Object*>> GetEnableList()
	{
		return EnableList;
	}
	map<string, list<Object*>> GetDisableList() { return DisableList; }
public:
	void CreateObjecct(string key);

	void FindObjectList(string _key);
	void Update();

	Object* ObjectInsert(string _key);
	void Erase(Object* _Obj);

	void Release();
private:
	ObjectPool();
public:
	~ObjectPool();
};



