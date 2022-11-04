#pragma once
#include "Enermy.h"
#include "Bullet.h"
#include "Player.h"

class Vector3;
class Object;
// 템플릿을 함수위에 올려놓고 사용하는 경우가 많다 -> 같은 클래스 내부에 여러개의 함수중 모든 함수가 데이터타입이 필요하지 않을 수 있기에
// 필요한 함수에서만 사용할 수 있기위하여 함수위에 올려둔다.
// 템플릿 -> 하나의 형태, <typename T> T라는 이름으로 타입을 붙히겠다, 형태를 보냄(type)
// factory는 객체상태로 존재하지 않음.
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