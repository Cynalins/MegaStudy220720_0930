#pragma once
#include "Scene.h"

class Logo : public Scene
{
public:
	void Start()override;
	void Update()override;
	void Render()override;
	void Release()override;
public:
	Logo();
	~Logo();
};

