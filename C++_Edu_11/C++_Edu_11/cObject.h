#pragma once
#include "Headers.h"

// �߻� Ŭ����
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
	// virtual�� �Ҹ��ڿ� �������ν� �ڽ� Ŭ������ �Ҹ��ڸ� ȣ�� �� �ټ��ִ�.
	virtual ~cObject();
};

