#include "ObjectManager.h"

ObjectManager* ObjectManager::Instance = nullptr;

ObjectManager::ObjectManager() 
{
	*(*Objects) = nullptr;
}

ObjectManager::~ObjectManager()
{

}

