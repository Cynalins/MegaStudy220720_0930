#pragma once
#include "Headers.h"

class Object;
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
private:
	map<int, list<Object*>> Objects;
public:
	void AddObject(Object* _pobj);
	void Render();
private:
	ObjectManager() {}
public:
	~ObjectManager() {}
};

