#include "ObjectManager.h"
#include "Object.h"

ObjectManager* ObjectManager::Instance = nullptr;

void ObjectManager::AddObject(Object* _pobj)
{
	map<int, list<Object*>>::iterator iter = Objects.find(_pobj->GetKey());
	if (iter == Objects.end())
	{
		list<Object*> temp;
		temp.push_back(_pobj);
		Objects.insert(make_pair(_pobj->GetKey(), temp));
	}
	else
		iter->second.push_back(_pobj);
}

void ObjectManager::Render()
{
	for (auto iter = Objects.begin(); iter != Objects.end(); ++iter)
	{
		cout << (*iter).first << endl;
		for (auto iter2 = (*iter).second.begin(); iter2 != (*iter).second.end(); ++iter2)
		{
			(*iter2)->Render();
		}
	}
}
