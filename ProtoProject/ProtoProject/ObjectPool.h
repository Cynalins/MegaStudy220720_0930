#pragma once
#include "Headers.h"

// 오브젝트 풀 : 생성(추가), (쓰기, 제거), 변경 = 덮어쓰기
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



