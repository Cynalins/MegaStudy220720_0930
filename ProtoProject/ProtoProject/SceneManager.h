#pragma once
#include "Headers.h"

class Scene;
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
private:
	Scene* SceneState;
public:
	void SetScene(Scene_ID id);
	void Update();
	void Render();
	void Release();
private:
	SceneManager();
public:
	~SceneManager();
};

