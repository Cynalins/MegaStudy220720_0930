#pragma once
#include "Scene.h"

class Stage : public Scene
{
public:
	void SetScene()override;
	void Update()override;
	void Render()override;
	void Release()override;
public:
	Stage();
	~Stage();
};

