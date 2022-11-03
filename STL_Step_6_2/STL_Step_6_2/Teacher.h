#pragma once
#include "Object.h"

class Teacher : public Object
{
public:
	void Initalize()override;
public:
	Teacher() {}
	Teacher(Info _info) : Object(_info) {}
};

