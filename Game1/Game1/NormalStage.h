#pragma once
#include "Scene.h"

class NormalStage : public Scene
{
private:
	Transform Info;
	int color, color2;
	int Atari;
	int count;
public:
	void Start()override;
	void Update()override;
	void Render()override;
	void Release()override;
public:
	NormalStage();
	~NormalStage();
};

