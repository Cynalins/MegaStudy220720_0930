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
	Object* Player;
	Object* Objects[EndID][MaxID]; // <- 종류는 줄 수있지만 개체수를 줄 수는 없다.

public:
	void SetPlayer(Object* _Player) { Player = _Player; }
	Object* GetPlayer() { return Player; }

	void SetObjects(Object* _Objects) { *(*Objects) = _Objects; }

	/*
	void addObject(Object* _Player);
	Object* FindObject();
	*/
	
private:
	ObjectManager();
public:
	~ObjectManager();

};

