#pragma once
#include "Object.h"

class Student : public Object
{
public:
	void Initialize()override;
public:
	Student() {}
	Student(Info _info) : Object(_info) {}
};

