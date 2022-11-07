#pragma once
#include "Object.h"

class Alatreon : public Object
{
public:
	void Start()override;
	int Update()override;
	void Render()override;
	void OnDestroy(Object* pObj)override;
public:
	Alatreon();
	~Alatreon();
};

