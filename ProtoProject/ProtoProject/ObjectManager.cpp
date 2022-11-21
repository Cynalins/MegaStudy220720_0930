#include "ObjectManager.h"
#include "ObjectPool.h"
#include "Object.h"

ObjectManager* ObjectManager::Instance = nullptr;


ObjectManager::ObjectManager()
{
}

ObjectManager::~ObjectManager()
{
}

void ObjectManager::Start()
{
	auto iter = EnableList->find("Player");

	Object* pobj = ObjectPool::GetInstance()->Pop("Player");

	if (iter == EnableList->end())
	{
		list<Object*> temp;
		for (int i = 0; i < 5; ++i)
		{
			temp.push_back(pobj->Clone());
			EnableList->insert(make_pair(pobj->GetKey(), temp));
		}
	}
	else
		iter->second.push_back(pobj);
	/*
	Object* pobj = ObjectPool::GetInstance()->Pop("Player");

	auto iter = EnableList->find("Player");
	if(pobj == nullptr)
	EnableList->insert(make_pair(pobj->GetKey(), pobj));
	*/
}