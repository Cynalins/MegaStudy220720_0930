#pragma once
#include "Scene.h"

class Menu : public Scene
{
private:
	Transform Info, Info2;
	int color, color2;
public:
	void Start()override;
	void Update()override;
	void Render()override;
	void Release()override;
public:
	Menu();
	~Menu();
};

