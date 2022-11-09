#include "ObjectPool.h"
#include "Alatreon.h"

ObjectPool* ObjectPool::Instance = nullptr;


ObjectPool::ObjectPool()
{

}

ObjectPool::~ObjectPool()
{

}

list<Object*>* ObjectPool::GetDesableObjectList(string key)
{
	// ** ������Ʈ�� ����ִ� ����Ʈ�� �����ϴ��� Ž��
	auto iter = DesableList.find(key);

	// ** ���� �Ѵٸ� ����Ʈ�� ��ȯ�ϰ�
	if (iter != DesableList.end())
		return iter->second;

	// ** �׷��� �ʴٸ� nullptr�� ��ȯ�Ѵ�.
	return nullptr;
}

void ObjectPool::addEnableObjectList(Object* pObj, ListType type)
{
	map<string, list<Object*>*>* mapList = nullptr;

	if (type == ListType::Enable)
	{
		mapList = &EnableList;
	}
	else
	{
		mapList = &DesableList;
	}
	
	// ** ������Ʈ�� ��ܾ� �� ������ �̹� �����ϴ��� Ž��
	auto iter = mapList->find(pObj->GetKey());

	// ** �������� �ʴ´ٸ� ���ο� ������ Ȯ���ϰ� �߰��Ѵ�.
	if (iter == mapList->end())
	{
		list<Object*>* temp = new list<Object*>();
		temp->push_back(pObj);
		mapList->insert(make_pair(pObj->GetKey(), temp));
	}
	else // ** ���� �Ѵٸ� �� �ش� ��ġ�� ��ü�� �ִ´�.
		iter->second->push_back(pObj);
}

void ObjectPool::CreateObjectList()
{
	/*
	list<Object*>* pList = GetDesableObjectList("Alatreon");
	if (pList == nullptr)
	{

	}
	else
	{

	}
	*/
	for (int i = 0; i < 4; ++i)
	{
		Object* pObj = new Alatreon();
		pObj->Start();

		addEnableObjectList(pObj, ListType::Desable);
	}

	Object* pObj = new Alatreon();
	pObj->Start();

	addEnableObjectList(pObj);
}

void ObjectPool::Update()
{
	// ** Enable
	for (auto iter = EnableList.begin(); iter != EnableList.end(); ++iter)
	{
		for (auto iter2 = iter->second->begin(); iter2 != iter->second->end(); ++iter2)
		{
			int result = (*iter2)->Update();
			if (result == 1)
			{
				addEnableObjectList((*iter2), ListType::Desable);
				iter2 = iter->second->erase(iter2);
			}
			else
				++iter2;
		}
			
	}
}

void ObjectPool::Render()
{
	// ** Enable
	for (auto iter = EnableList.begin(); iter != EnableList.end(); ++iter)
	{
		cout << "[Enable]" << endl;
		cout << " [" << iter->first << "] " << endl;

		for (auto iter2 = iter->second->begin(); iter2 != iter->second->end(); ++iter2)
			cout << (*iter2)->GetKey() << endl;
	}

	// ** Desable
	for (auto iter = DesableList.begin(); iter != DesableList.end(); ++iter)
	{
		cout << "[Desable]" << endl;
		cout << " [" << iter->first << "] " << endl;

		for (auto iter2 = iter->second->begin(); iter2 != iter->second->end(); ++iter2)
			cout << (*iter2)->GetKey() << endl;
	}
}