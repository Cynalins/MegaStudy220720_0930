#pragma once
#include "Headers.h"

class InputManager
{
private:
	static InputManager* Instance;
public:
	static InputManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new InputManager();
		return Instance;
	}
private:
	// 키입력의 확인
	DWORD dwKey;
public:
	DWORD GetwKey() { return dwKey; }
	void InputKey();

private:
	InputManager();
public:
	~InputManager();
};

