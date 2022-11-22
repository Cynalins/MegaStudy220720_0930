#pragma once
#include "Headers.h"

class Object
{
protected:
	Trans Info;
	string Key;

	list<Object*>* Space;
	int Index;
public:
	virtual Object* Initalize(const string& key)PURE;
	virtual void Start()PURE;
	virtual void Update()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;
	virtual Object* Clone()PURE;
public:
	string GetKey() { return Key; }
	void SetSpace(list<Object*>* _Space) { Space = _Space; }
	list<Object*>* GetSpace() { return Space; }
public:
	Object();
	Object(const Trans& _Info) : Info(_Info), Space(nullptr), Index(0) {}
	virtual ~Object();
};

