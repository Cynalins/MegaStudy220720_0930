#pragma once
#include "Parent.h"

class Child2 : public Parent
{
public:
	// ** 가독성을 위하여 virtual함수라고 붙여준다.
	// ** 쓰지 않아도 버츄얼 함수이다.
	virtual void Initialize()override;
	virtual void Render();
};

// 오버라이딩 : 
