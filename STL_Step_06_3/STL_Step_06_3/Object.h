#pragma once
#include "Headers.h"

struct Vector2
{
	float x;
	float y;
};

// ����� ���͸� ���� ���� ����.
class Object
{
protected:
	string key;
	string name;
	Vector2 Position;
public:
	string GetName() { return name; }
	Vector2 GetPosition() { return Position; }

	// �����͸� �󸶳� �� ������ų �� �ִ°�, �̷������� ���ʹ� ������������ ��.
	/*
	Object* SetName(string name) 
	{
		this->name = name;
		return this; 
	}
	Object* SetX(float x)
	{
		this->x = x;
		return this;
	}
	Object* SetY(float y)
	{
		this->y = y;
		return this;
	}
	*/

public:
	Object() {};
	Object(string key, string name);
	Object(string name, Vector2 Position); // ���� �����Ҷ����� ��������ڸ� ���ؼ��� �ѹ��� ������ �� �ִ�.
	virtual ~Object() {};
};

