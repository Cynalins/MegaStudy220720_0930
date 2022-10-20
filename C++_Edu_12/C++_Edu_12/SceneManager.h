#pragma once
#include "Headers.h"

class Object;
class SceneManager
{
private:
	static SceneManager* Instance;
public:
	static SceneManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new SceneManager();
		return Instance;
	}
};

