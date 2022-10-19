#pragma once
#include "cObject.h"
#include "Struct.h"

class Child : public cObject
{
public:
	void Start()override;
	void Update()override;
	void Render()override;
	void Release()override;
public:
	Child();
	virtual ~Child();
};

