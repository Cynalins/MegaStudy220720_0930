#pragma once
#include "Scene.h"

class NormalStage : public Scene
{
public:
	void Start()override;
	void Update()override;
	void Render()override;
	void Release()override;
public:
	NormalStage();
	~NormalStage();
};

