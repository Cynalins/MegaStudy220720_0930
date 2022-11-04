#pragma once
#include "Headers.h"

struct Vector2
{
	float x;
	float y;
};

// 사실은 세터를 따로 넣지 않음.
class Object
{
protected:
	string key;
	string name;
	Vector2 Position;
public:
	string GetName() { return name; }
	Vector2 GetPosition() { return Position; }

	// 데이터를 얼마나 잘 보존시킬 수 있는가, 이런식으로 세터는 존재하지않을 것.
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
	Object(string name, Vector2 Position); // 값을 세팅할때에는 복사생성자를 통해서만 한번만 세팅할 수 있다.
	virtual ~Object() {};
};

