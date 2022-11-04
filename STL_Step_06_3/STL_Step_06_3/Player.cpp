#include "Player.h"

Player::Player()
{
	cout << "Player" << endl;
}

Player::Player(string key, string name) : Object("Player", name)
{

}

Player::Player(string name, Vector2 position) : Object(name, position)
{

}

Player::~Player()
{
}
