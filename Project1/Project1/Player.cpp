#include "Player.h"
#include "ObjectManager.h"
#include "SceneManager.h"

Player::Player()
{

}

Player::~Player()
{
	Release();
}

void Player::Start()
{
	Info.Position = Vector3(0.0f, 0.0f, 0.0f);
	Info.Rotation = Vector3(0.0f, 0.0f, 0.0f);
	Info.Scale = Vector3(0.0f, 0.0f, 0.0f);
	color = 7;
}

void Player::Update()
{
	
}

void Player::Render()
{
	cout << Info.Position.x << ", "
		<< Info.Position.y << endl;
}

void Player::Release()
{

}

