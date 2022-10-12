#pragma once
#include "Player.h"
#include "Enemy.h"

// ** 객체 관리(관리자 클래스로 사용하기 위함)
// ** 단 하나의 인슽턴스만 만들고 싶을 때 사용한다.
class Object;
class SingletonManager
{
private:
	static SingletonManager* Instance;
public:
	static SingletonManager* GetInstance()
	{

		if (Instance == nullptr)
			Instance = new SingletonManager;
		return Instance;
	}
public:
	Object* CreatePlayer() { return new Player; }
	Object* CreateEnemy() { return new Enemy; } // new -> hip

	// 하기 전까지는 단일 객체가 아닌 여러개의 객체를 생성가능.
private:
	SingletonManager(){} // <- private으로 생성자를 초기화 해줌으로써 단일객체로 존재.
};

SingletonManager* SingletonManager::Instance = nullptr;

// static -> data영역


// 관리

// 생성
// 초기화 C
// 변경	  R
// 갱신   U
// 삭제   D

// 문자 = 리터널상수  