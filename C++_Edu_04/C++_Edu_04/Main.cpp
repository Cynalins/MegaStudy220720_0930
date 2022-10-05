#include <iostream>
#include <string>

using namespace std;
// namespace

// ** 상속
// IS-A 관계 -> 본인의 기능은 본인이 가지는 것이 맞다.
// Has-a 관계 -> 본인과 맞지않은 것을 가질 수 없다. = 군인 학생 총 급식 
// 군인  -  총, 학생 - 급식 o | 군인 - 급식 , 학생 - 총 x
// ** 추상성 
// : 추상 클래스 (사람은 걸을 수 있지만 사람이라는 객체가 기능을 가지진 않는다.)
// ** 다형성

// ** 가상 함수 & 순수가상함수 : 기능은 없지만 기능을 할 수 있어야함.
// ** 오버로딩 & 오버라이딩
// ** 연산자 오버로딩



// 캡슐화 : 기능과 데이터를 묶어서 사용.
// 다이아몬드 상속 , w상속은 피하여야한다.
class Parent
{

};

class Child
{

};


class A // 최상위계층 클래스
{
	// ** 완전한 정보 은닉 상태
private:

	// ** 상속관계에서만 정보 공개 상태, 상속이 아닌 경우에는 비공개
	// ** 상속 : public
	// ** 비 상속 : private
protected:
	string Name;
	int Age;

	// ** 완전한 정보 공개 상태
public:
	void Output()
	{
		cout << Name << endl;
	}

	void initialize()
	{
		Name = "";
		Age = 0;
	}
};

class B : public A  // 상속 : public 부모클래스.
{
public:
	void initialize()
	{
		Name = "홍길동";
		Age = 32;
	}
};

class C : public A
{
public:
	void initialize()
	{
		Name = "임꺽정";
		Age = 38;
	}
};
/*
class D : public B, C
{
public:
	void initialize()
	{
		
	}

	void Output()
	{
		cout << Name << endl;
	}

};

class E
{

};
*/

// 스태틱 데이터 초기화(영역 밖으로 쓰기위해)

int main()
{
	// * 변수가 어떤 데이터 타입으로 만들어 졌는지 확인해야한다.
	B b;
	C c;

	b.initialize();
	c.initialize();

	b.Output();
	c.Output();




	return 0;
}