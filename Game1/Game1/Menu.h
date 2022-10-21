#pragma once
#include "Scene.h"

class Menu : public Scene
{
private:
	Transform Info;
	int color;
public:
	void Start()override;
	void Update()override;
	void Render()override;
	void Release()override;
public:
	Menu();
	~Menu();
};

