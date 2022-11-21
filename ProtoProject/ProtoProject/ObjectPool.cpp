#include "ObjectPool.h"
#include "Prototype.h"

ObjectPool* ObjectPool::Instance = nullptr;

ObjectPool::ObjectPool()
{
}

ObjectPool::~ObjectPool()
{
	Release();
}

void ObjectPool::CreateObjecct(string key)
{

}

void ObjectPool::FindObject()
{

}

Object* ObjectPool::Pop(string _key)
{
	auto iter = DisableList.find(_key);

	START:

	if (iter == DisableList.end())
	{
		// »ý¼º

		Object* ProtoObject = Prototype::GetInstance()->FindObject("Player");

		if (ProtoObject != nullptr)
		{
			list<Object*> temp;
			for (int i = 0; i < 5; ++i)
			{
				temp.push_back(PrototypeObject->Clone());
				DisableList.insert(make_pair(_key, temp));
			}
				goto START;
		}
		else
		{
			return nullptr;
		}	
	}
	else
	{
		Object* pobj = iter->second.back();
		iter->second.pop_back();
		return pobj;
	}
}

void ObjectPool::Erase()
{

}

void ObjectPool::Update()
{

}

void ObjectPool::Release()
{
	for (auto iter = EnableList.begin(); iter != EnableList.end(); ++iter)
	{
		for (auto iter2 = iter->second.begin(); iter2 != iter->second.end(); ++iter2)
		{
			delete (*iter2);
			(*iter2) = nullptr;
		}
	}
	DisableList.clear();

	for (auto iter = DisableList.begin(); iter != DisableList.end(); ++iter)
	{
		for (auto iter2 = iter->second.begin(); iter2 != iter->second.end(); ++iter2)
		{
			delete (*iter2);
			(*iter2) = nullptr;
		}
	}
	EnableList.clear();
}
