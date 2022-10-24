#pragma once
#include "Headers.h"

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
	ObjectManager();
public:
	~ObjectManager();
};

