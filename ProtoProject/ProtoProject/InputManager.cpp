#include "InputManager.h"

InputManager* InputManager::Instance = nullptr;

InputManager::InputManager()
{
}

InputManager::~InputManager()
{
}

void InputManager::InputKey()
{
	dwKey = 0;

	if (GetAsyncKeyState(VK_UP))
		dwKey |= KEYID_UP;

	if (GetAsyncKeyState(VK_DOWN))
		dwKey |= KEYID_DOWN;

	if (GetAsyncKeyState(VK_RIGHT))
		dwKey |= KEYID_LEFT;
	
	if (GetAsyncKeyState(VK_LEFT))
		dwKey |= KEYID_RIGHT;
	
	if (GetAsyncKeyState(VK_SPACE))
		dwKey |= KEYID_SPACE;
	
	if (GetAsyncKeyState(VK_RETURN))
		dwKey |= KEYID_RETURN;
	
	if (GetAsyncKeyState(VK_ESCAPE))
		dwKey |= KEYID_ESC;
	
	if (GetAsyncKeyState(VK_CONTROL)) // ctrl
		dwKey |= KEYID_CTRL;
	
	if (GetAsyncKeyState(VK_MENU))  // alt
		dwKey |= KEYID_ALT;


}

// 0000 0001
// 0000 0010
// 0000 0100
// 0000 1000
// 0001 0000
// 0010 0000
// 0100 0000
// 1000 0000

