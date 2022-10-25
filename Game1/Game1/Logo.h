#pragma once
#include "Scene.h"

class Logo : public Scene
{
private:
	Transform Info1, Info2;
	int color1, color2;
	ULONGLONG Time;
	ULONGLONG DelayTime;
	int switching;

	SliderTransform Sliders[27];
public:
	void Start()override;
	void Update()override;
	void Render()override;
	void Release()override;
public:
	Logo();
	~Logo();
};

