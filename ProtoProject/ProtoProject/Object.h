#pragma once
#include "Headers.h"

class Object
{
protected:
	Trans Info;
	string Key;
public:
	virtual Object* Initalize(const string& key)PURE;
	virtual void Start()PURE;
	virtual void Update()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;
	virtual Object* Clone()PURE;
public:
	string GetKey() { return Key; }
public:
	Object();
	Object(const Trans& _Info) : Info(_Info) {}
	virtual ~Object();
};

