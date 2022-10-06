#pragma once
#include "Headers.h"

class Parent
{
protected:
	string Name;
	int Age;
public:
	// ** virtual Ű����� ���� �Լ� Ű����
	// ** ���� ���� �Լ�(�� �����Լ�) <- ����� �߻�Ŭ����
	virtual void Initialize() = 0;
	virtual void Render() = 0;

};

