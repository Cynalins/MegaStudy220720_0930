#pragma once
#include "Object.h"

class Player : public Object
{

public:
	void Start()override;
	void Update()override;
	void Render()override;
	void Release()override;
public:
	Player();
	virtual ~Player();
};

