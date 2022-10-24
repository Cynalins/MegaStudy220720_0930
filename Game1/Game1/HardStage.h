#pragma once
#include "Scene.h"

class HardStage : public Scene
{
public:
	void Start()override;
	void Update()override;
	void Render()override;
	void Release()override;
public:
	HardStage();
	~HardStage();
};

