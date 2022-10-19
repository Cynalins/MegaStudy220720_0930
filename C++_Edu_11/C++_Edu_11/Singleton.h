#pragma once
#include "Player.h"

class Singleton
{
private:
	static Singleton* Instance;
public:
	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new Singleton();
		return Instance;
	}
public:
	Object* CreatePlayer() { return new Player; }
private:
	Singleton(){}

};

Singleton* Singleton::Instance = nullptr;

