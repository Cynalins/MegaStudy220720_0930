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

		if (!o) // *ERR 발생!
		{
			ERR_MSG("경로");
			exit(0);
		}
	}
	*/
	{
		printf("두 수의 합은 : %d\n", SUM(10, 20));
		printf("두 수의 곱은 : %d\n", MUL(10, 20));
	}
	
	/*
	//#if
// ** 실행할 코드와 실행시키지 않을 코드를 구분.
#ifndef 1

#endif // !1

#ifdef DEBUG
	printf("DEBUG가 정의 되었습니다.\n");
#else
	printf("DEBUG가 정의되지 않았습니다.\n");

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
