#include "Headers.h"

#include"Child1.h"
#include"Child2.h"
// ** 상속
// ** namespace : 동일한 클래스, 함수 등을 사용할 수 있도록 해준다.
// ** 추상성
// ** 가상함수 & 순수가상함수.

// ** 핵심은 메인부터 만들기.
// ** Parent 클래스 만들고 -> 자식클래스 정의 -> 메인 함수 호출해보기
// ** 오버라이딩()

// ** namespace를 사용하여 클래스를 작성하는 것이 가능하다.

 

int main()
{
	/*
	Parent* pP = new Parent;
	Child* pC = new Child;
	*/
	// 부모가 자식을 안고있는 개념, 
	// 큰것에서 작은걸 담을 수 있어도 작은것에서 큰걸 담을 수 없다.
	// 자식 클래스포인터간에는 바꿔서 사용가능하다.
	// 확실하지 않을 경우 형변환을 사용하지 않는게 좋다.

	// int Number = (float)3.141592f; -> 3만 출력됨. 정수형이기 때문
	// ** float 값을 형변환을 해서 준다고 해도, Number의 형태는 절대 변하지 않는다.

	// new Child1로 만들어도 pP1->했을경우 initialize가 나오지않음
	// ** Parent* pP1도 마찬가지로
	// ** new Child1을 해서 pP1에 Child1클래스를 주었다고 해도,
	// ** pP1의 타입은 Parent* 타입이며 Child* 타입으로 변경되지 않는다.
	Parent* ObjectList[2];
	
	ObjectList[0]->Initialize();
	ObjectList[0]->Initialize();
	
	Parent* pP1 = new Child1;

	// ** 현재 Parent*는 함수가 존재하지 않기 때문에 
	// ** 형변환을 통하여 Child1의 클래스에 있는 함수를 호출하여야 한다.
	pP1->Initialize();
	pP1->Render();

	// ** Child2를 생성
	Parent* pP2 = new Child2;
	//** Child1의 함수를 호출하여 값을 초기화.
	pP2->Initialize();
	// ** 임꺽정이 나와야 하지만 홍길동이 나온다.
	pP2->Render();

	// ** 부모가 동일한 데잍터타입일 경우에는 자식 클래스의
	// ** 형 변환이 가능하다. 다만 포함하고 있는 데이터까지 공유되는 것은 아니기
	// ** 때문에 데잍터의 값을 출력하거나 사용할 경우 신중하게 생각하여야 한다.

	// ** 하나의 데이터 타입으로 여러 자식클래스를 둘 수 있다.
	// ** 일괄 호출
	for (int i = 0; i < 2; ++i)
		ObjectList[i]->Render();

	return 0;
}