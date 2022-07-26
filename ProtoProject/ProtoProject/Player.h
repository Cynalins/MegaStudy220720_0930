#pragma once
#include "Object.h"

class Player : public Object
{
public:
	virtual Object* Initalize(const string& key)override;
	virtual void Start()override;
	virtual void Update()override;
	virtual void Render()override;
	virtual void Release()override;
public:
	virtual Object* Clone()override { return new Player(*this); }
public:
	Player();
	Player(const Trans& _Info) : Object(_Info) {}
	virtual ~Player();
};

