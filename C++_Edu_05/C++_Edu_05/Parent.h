#pragma once
#include "Headers.h"

class Parent
{
protected:
	string Name;
	int Age;
public:
	// ** virtual 키워드는 가상 함수 키워드
	// ** 순수 가상 함수(빈 가상함수) <- 만들면 추상클래스
	virtual void Initialize() = 0;
	virtual void Render() = 0;

};

