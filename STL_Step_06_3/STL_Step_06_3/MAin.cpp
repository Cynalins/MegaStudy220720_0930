#include "Headers.h"
#include "Object.h"
#include "ObjectFactory.h"

int main()
{

	Vector2 position;
	position.x = 0;
	position.y = 0;
	
	Object* pObj = ObjectFactory::CreateObject<Player>();

	cout << pObj->GetName() << endl;
	cout << pObj->GetPosition().x << endl;

	return 0;
}