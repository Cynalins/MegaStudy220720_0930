#pragma once
#include "Headers.h"
#include "Alatreon.h"

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
	Object* Objects[EndID][MaxID];
public:
	// void SetObjects(Object* _Objects) { *(*Objects) = _Objects; }
	void SetObjects(Object* _Objects) { *(*Objects) = _Objects; }
private:
	ObjectManager();
public:
	~ObjectManager();
};

