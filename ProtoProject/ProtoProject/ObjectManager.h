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
	list<Object*> ObjectList;
public:
	void Start();
private:
	ObjectManager();
public:
	~ObjectManager();
};

