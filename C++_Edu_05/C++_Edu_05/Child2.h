#pragma once
#include "Parent.h"

class Child2 : public Parent
{
public:
	// ** �������� ���Ͽ� virtual�Լ���� �ٿ��ش�.
	// ** ���� �ʾƵ� ����� �Լ��̴�.
	virtual void Initialize()override;
	virtual void Render();
};

// �������̵� : 
