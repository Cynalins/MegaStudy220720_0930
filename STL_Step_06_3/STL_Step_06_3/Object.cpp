#include "Object.h"

Object::Object(string key, string name)
{
	this->key = key;
	this->name = name;
}

Object::Object(string name, Vector2 Position)
{
	this->name = name;
	this->Position.x = Position.x;
	this->Position.y = Position.y;
}
