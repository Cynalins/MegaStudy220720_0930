#include "Child.h"

Child::Child()
{
	cout << "Child ������" << endl;
}

Child::~Child()
{
	cout << "Child �Ҹ���" << endl;
}

void Child::Start()
{

}

void Child::Update()
{

}

void Child::Render()
{
	Vector3 v = Vector3(0.0f, 0.0f, 0.0f);
	
	info.Position = Vector3(0.0f, 0.0f, 0.0f);

	info.Position += v;

	cout << info.Position.x << endl;
	cout << info.Position.y << endl;
	cout << info.Position.z << endl;
}

void Child::Release()
{

}