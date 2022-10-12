#pragma once
#include "Player.h"
#include "Enemy.h"

// ** ��ü ����(������ Ŭ������ ����ϱ� ����)
// ** �� �ϳ��� �Κ��Ͻ��� ����� ���� �� ����Ѵ�.
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

	// �ϱ� �������� ���� ��ü�� �ƴ� �������� ��ü�� ��������.
private:
	SingletonManager(){} // <- private���� �����ڸ� �ʱ�ȭ �������ν� ���ϰ�ü�� ����.
};

SingletonManager* SingletonManager::Instance = nullptr;

// static -> data����


// ����

// ����
// �ʱ�ȭ C
// ����	  R
// ����   U
// ����   D

// ���� = ���ͳλ��  