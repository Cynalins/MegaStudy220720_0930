#pragma once
#include "Headers.h"

class Object
{
protected:
	Info info;
	int key;
public:
	virtual void Initalize()PURE;

	int GetKey() { return key; }
	void Render();
public:
	Object() : key(0) {}
	Object(Info _info) : info(_info), key(0) {}
};

