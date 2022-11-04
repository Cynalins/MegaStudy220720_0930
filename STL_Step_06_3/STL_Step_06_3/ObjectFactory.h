#pragma once
#include "Enermy.h"
#include "Bullet.h"
#include "Player.h"

class Vector3;
class Object;
// ���ø��� �Լ����� �÷����� ����ϴ� ��찡 ���� -> ���� Ŭ���� ���ο� �������� �Լ��� ��� �Լ��� ������Ÿ���� �ʿ����� ���� �� �ֱ⿡
// �ʿ��� �Լ������� ����� �� �ֱ����Ͽ� �Լ����� �÷��д�.
// ���ø� -> �ϳ��� ����, <typename T> T��� �̸����� Ÿ���� �����ڴ�, ���¸� ����(type)
// factory�� ��ü���·� �������� ����.
class ObjectFactory
{
public:	
	template <typename T>
	static Object* CreateObject()
	{
		return new T();
	}
	template <typename T>
	static Object* CreateObject(string name)
	{
		return new T(name);
	}
	/*
	static Object* CreateObject(Vector3* Position)
	{
		return new T();
	}
	*/
	static Object* CreateObject(string name, Vector2 Position)
	{
		Object* pObj = new T();
		return pObj->SetName(_name)->SetX(_x)->SetY(_y);
	}

private:
	ObjectFactory() {};
	~ObjectFactory() {};
};