#pragma once
#include "Object.h"

class Student : public Object
{
public:
	void Initalize()override;
public:
	Student() {}
	Student(Info _info) : Object(_info) {}
};

