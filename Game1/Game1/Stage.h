#pragma once
#include "Scene.h"

class Stage : public Scene
{
private:
	Transform Info;
	int color, color2;
	int count;
	int Atari;
public:
	void Start()override;
	void Update()override;
	void Render()override;
	void Release()override;
public:
	Stage();
	~Stage();
};

