#pragma once
#include "Scene.h"

class ShootStage : public Scene
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
	ShootStage();
	~ShootStage();
};

