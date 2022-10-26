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
	Object* pPlayer;
public:
	void SetPlayer(Object* _Player) { pPlayer = _Player; }
	Object* GetPlayer() { return pPlayer; }

private:
	ObjectManager();
public:
	~ObjectManager();
};

