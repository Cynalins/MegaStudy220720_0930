#include "Operator.h"

class Copy
{
public:
	char* name;
public:
	/*
	Copy* operator=(const Copy& _ref)
	{
		this->name = new char[strlen(_ref.name) + 1];
		strcpy(this->name, _ref.name);

		return new Copy(name);
	}
	*/

public:
	Copy() : name(nullptr) {}
	Copy(Copy* pCopy)
	{
		this->name = new char[strlen(pCopy->name)];
		strcpy(this->name, pCopy->name);
	}
};

int main()
{
	// ** 실수 연산

	// 부호    자수부               가수부
	// 0      00000000        000000000000000000000


	// 100.625 => 

	// ** 고정 소수점
	// 00000000 000000000 . 0000000000 00000000
	//			정수부				 실수부
	// 0 00000000 1000000000 . 101000000 00000000

	// 1.0000000101의 7승

	// 127 + 7 = 134
	// 부동 소수점.
	// 0  10000110	0000000101000000000000000
	// E는 지수부를 나타냄

	// ** 연산자 overload
	/*
	Operator o;
	o.setAge(32);
	o.setName((char*)" 홍길동");
	o.render();

	// ================================================

	// ** 깊은복사 & 얕은 복사
	// 복사를 어떻게 할것인가의 차이.

	char* name = (char*)"홍길동";
	char* name2 = name;

	cout << name << " , " << name2 << endl;

	name = (char*)" ";

	cout << name << " , " << name2 << endl;
	*/

	// ** c1을 생성
	Copy* c1 = new Copy;
	// ** c1의 name에 이름을 초기화
	c1->name = (char*)"홍길동";

	//Copy* c2(c1) -> 안됨.
	// 
	// ** c2에 c1을 복사
	Copy* c2 = new Copy(c1); // 됨.
	// 깊은복사와 얕은 복사의 차이.

	// ** c1이 삭제되기 전에 c2의 name은 정상 출력된다.
	// cout << c2->name << endl;

	// ** c1을 삭제
	delete c1;

	// ** c2의 name을 출력
	cout << c2->name << endl; // 출력되지 않음. 
	// -> c2가 가지고있던 주소가 c1이 가졌던 주소와 동일했기 때문

	
	// ** Getter
	// ** Setter




	return 0;
}