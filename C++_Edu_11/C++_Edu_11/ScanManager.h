#pragma once
#include "Headers.h"

class Scene;
class ScanManager
{
private:
	static ScanManager* Instance;
public:
	static ScanManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new ScanManager();
		return Instance;
	}
private:
	Scene* SceneState;
public:
	void SetScene();
	void Update();
	void Render();
	void Release();
private:
	ScanManager();
public:
	~ScanManager();
};


