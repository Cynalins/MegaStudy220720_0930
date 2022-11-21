#include "Player.h"
#include "InputManager.h"
#include "Prototype.h"

Player::Player()
{
}

Player::~Player()
{
}

Object* Player::Initalize(const string& key)
{
	// ** 초기화 값이 있다면 초기화 진행
	Key = key;
	return this;
}

void Player::Start()
{
	
}

void Player::Update()
{
	DWORD key = InputManager::GetInstance()->GetwKey();

	if (key & KEYID_UP)
		cout << "KEYID_UP" << endl;
	if (key & KEYID_DOWN)
		cout << "KEYID_DOWN" << endl;
}

void Player::Render()
{
	cout << Key << endl;
}

void Player::Release()
{

}

