/*
* chapter 16
*/
#include "Define.h"
#include "Functions.h"




struct Object
{
	char* Name;
	int Age;
};

Object* CreateObject(bool _b);

int main()
{
	printf("%f\n", PI);
	
	Output("");
	/*
	{

		Object* o = CreateObject(false);

		if (!o) // *ERR �߻�!
		{
			ERR_MSG("���");
			exit(0);
		}
	}
	*/
	{
		printf("�� ���� ���� : %d\n", SUM(10, 20));
		printf("�� ���� ���� : %d\n", MUL(10, 20));
	}
	
	/*
	//#if
// ** ������ �ڵ�� �����Ű�� ���� �ڵ带 ����.
#ifndef 1

#endif // !1

#ifdef DEBUG
	printf("DEBUG�� ���� �Ǿ����ϴ�.\n");
#else
	printf("DEBUG�� ���ǵ��� �ʾҽ��ϴ�.\n");

#endif // DEBUG

	*/
	Count = 10;
	Func();

	return 0;
}

Object* CreateObject(bool _b)
{
	Object* obj;

	if (_b)
		obj = (Object*)malloc(sizeof(Object));
	else
		obj = nullptr;

	return obj;
}
