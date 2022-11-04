#include "Headers.h"
#include "ObjectManager.h"
#include "Student.h"

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		Object* pobj = new Student(Info(rand() % 71 + 30, rand() % 71 + 30, rand() % 71 + 30));

		pobj->Initialize();
		ObjectManager::GetInstance()->AddObject(pobj);
	}
	
	ObjectManager::GetInstance()->Render();


	return 0;
}