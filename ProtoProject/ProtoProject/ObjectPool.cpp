#include "ObjectPool.h"
#include "Prototype.h"
#include "Object.h"

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
	Object* ProtoObject = Prototype::GetInstance()->FindObject("Player");

	//Counts.find(_key)->second

	if (ProtoObject != nullptr)
	{
		list<Object*> temp;
		for (int i = 0; i < 5; ++i)
		{
			temp.push_back(ProtoObject->Clone());
			DisableList.insert(make_pair(_key, temp));
		}
		cout << "goto" << endl;
		system("pause");
		goto START;
	}
	else
	{
		for (int i = 0; i < 5; ++i)
		{
			Object* pObj = ProtoOBject
		}
	}
}

void ObjectPool::FindObjectList(string _key)
{
	auto iter = DisableList.find(_key);

	if (iter == DisableList.end())
		return nullptr;

	return iter->second;
}

Object* ObjectPool::ObjectInsert(string _key)
{
	auto iter = DisableList.find(_key);

	START:

	if (iter == DisableList.end())
	{
		CREATE:
		CreateObjecct(_key);
		goto START;

		ErrorMessage(__LINE__);
		return nullptr;
		// »ý¼º
		/*
		Object* ProtoObject = Prototype::GetInstance()->FindObject("Player");

		if (ProtoObject != nullptr)
		{
			list<Object*> temp;
			for (int i = 0; i < 5; ++i)
			{
				temp.push_back(ProtoObject->Clone());
				DisableList.insert(make_pair(_key, temp));
			}
			cout << "goto" << endl;
			system("pause");
			goto START;
		}
		else
		{
			return nullptr;
		}	
		*/
	}
	else
	{
		if (iter->empty())
		{
			Object* pobj = iter->second.back();
			iter->second.pop_back();
			return pobj;
		}
		else
			goto CREATE;
	}
}

void ObjectPool::Erase(Object* _Obj)
{
	auto iter = EnableList.find(_Obj->GetKey());
	//auto iter = EnableList.find(_Obj->GetKey());
	//auto iter = _Obj->GetSpace();


	

	
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
