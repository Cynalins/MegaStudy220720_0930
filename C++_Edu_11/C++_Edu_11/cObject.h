#pragma once
#include "Headers.h"

// 추상 클래스
class cObject
{
protected:
	Transform info;
public:
	virtual void Start()PURE;
	virtual void Update()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;
public:
	cObject();
	// virtual을 소멸자에 써줌으로써 자식 클래스의 소멸자를 호출 해 줄수있다.
	virtual ~cObject();
};

