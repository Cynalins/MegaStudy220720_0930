#include "Prototype.h"
#include "Player.h"

Prototype* Prototype::Instance = nullptr;

Prototype::Prototype()
{
}

Prototype::~Prototype()
{
}

void Prototype::Initialize()
{
	Trans Info;;
	Info.Position = Vector3(0.0f, 0.0f, 0.0f);
	Info.Direction = Vector3(0.0f, 0.0f, 0.0f);
	Info.Scale = Vector3(0.0f, 0.0f, 0.0f);

	string key = "";
	PrototypeObject[key] = (new Player(Info))->Initalize(key = "Player");
	//PrototypeObject.insert(make_pair("Player", (new Player(Info))->Initalize()));
}

Object* Prototype::FindObject(string key)
{
	auto iter = PrototypeObject.find(key);

	if(iter == PrototypeObject.end())
		return nullptr;

	return iter->second;
}

