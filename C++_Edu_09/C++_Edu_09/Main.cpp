#include <iostream>

using namespace std;

// ** 
class Object
{
private:
	string Name;

public:
	string GetName() { return Name; }
	void SetName(string _Name)
	{
		Name = _Name;
	}
	/*
	void SetName(string Name)
	{
		this->Name = Name;
	}
	*/
};

// ** 인스턴스 = 잠시 생성됬다가 사라질 수 있는 상태(?), 필요에의해서 만들어짐
class Singleton
{
// ** static : 어디서나 쉽고 빠르게 접근할 수 있어야 한다.
// ** Singleton* Instance : 객체는 하나만 존재하여야 한다. 
// ** 꼭 private이어야만 하나? -> 데이터를 바꾸거나 지우는 것을 방지만 할 수 있으면 상관없음.
private:
	static Singleton* Instance;
public:
	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new Singleton;
		return Instance;
	}
private:
	Object* pObj; // <- 임시 변수
public:
	Object* GetObject() { return pObj; }
	void SetObject(Object* _pObj) { pObj = _pObj; }

// ** private : 객체는 어디에서도 생성할수 없어야 한다.
private:
	Singleton() : pObj(nullptr) {}
};

Singleton* Singleton::Instance = nullptr;

// ** 연산자 오버로딩
class Operator
{
public:
	int Number;
// ** 자기자신을 반환한다 / & <- 를 안적으면 메모리 복사가 이루어짐.
public:
	Operator operator+(Operator& _ref) // operator = 자기자신.
	{	
		return Operator(Number + _ref.Number);
	}
	// ** 결합
	void operator+=(Operator& _ref)
	{
		Number += _ref.Number;
	}
	/*
	*  [반환값]  =  [피연산자] [연산자] [피연산자]
	* 
	* [반환할 값의 형태] [자기자신]+([연산할 항목])
	* {
	*	return([반환값])
	* }
	*/
	Operator operator-(Operator& _ref)
	{
		return Operator(Number - _ref.Number);
	}
public:
	Operator() {}
	Operator(int _Value) : Number(_Value) {}
	Operator(char* _Value) : Number(*_Value) {}
};

int main()
{
	// ** 단정도 부동 소수점
	// 
	// float 쓰는 방법(계산법)
	/*
	* 계산
	* 정수부. 실수부
	* 실수부는 곱하기 2
	* 정수부는 나누기 2
	* -> 나온 값의 소수점을 첫번째 정수 뒤로 보냄
	* 보낸만큼의 길이 + 비트수;
	* 방금 나온 값을 나누어서 2진수로 나타냄 -> 앞의 수
	* 위의 첫번째를 제외한 값을 나타냄 -> 가수부
	* 부호수 앞의수 가수부 로 2진수를 표현
	* 
	*/
	float  






	/*
	Operator oper1;
	Operator oper2;

	oper1.Number = 10;
	oper2.Number = 20;

	Operator oper3 = oper1 + oper2;
	Operator oper4 = oper2 - oper1;
	Operator oper5 = oper1 + oper2;
	
	cout << oper3.Number << endl;
	cout << oper4.Number << endl;
	cout << oper5.Number << endl;
	*/
	
	/*
	{
		Object* O1 = new Object();

	O1->SetName("홍길동");

	Singleton::GetInstance()->SetObject(O1);
	}

	string str = Singleton::GetInstance()->GetObject()->GetName();

	cout << str << endl;

	*/
	return 0;
}