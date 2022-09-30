#include <iostream>

// ** 생성자
// ** 복사 생성자
// ** 소멸자

using namespace std;

struct Vector2
{
	float x, y;

	// ** 생성자
	Vector2() : x(0), y(0) {};
	
	// ** 복사생성자
	Vector2(float _x, float _y) : x(_x), y(_y) {};
};

class Transform
{
	
private: // ** 비공개
	Vector2 Position;
protected: // ** 상속간의 공개

public: // ** 공개
	float x, y; // <- 멤버 변수(멤버 라고도 부름.)class 내부의 변수({안에있는 것})
	// ** 멤버변수가 아닌경우 : class밖에있거나, 특정 함수 안에있거나.

public:
	void output()
	{
		cout << Position.x << endl;
		cout << Position.y << endl;
	}

public:
	// ** 생성된 직후 직접 호출하지 않더라도 자동으로 호출이 되는 함수.
	// ** 기본생성자. -> Transform() {};
	// ** 사용자가 직접 정의하지 않더라도 기본 생성자가 호출됨.
	Transform() : x(0), y(0), Position(Vector2(0.0f,0.0f))
	{
		cout << "생성자" << endl; 
	};

	// ** 복사생성자는 직접 호출해야만 호출됨.
	// ** 매개변수(파라미터)
	// ** 복사생성자는 매개변수의 개수와 자료형의 타입으로 구분되어,
	// 여러개의 복사생성자를 정의할 수 있다.
	Transform(float _x, float _y) : x(_x), y(_y)
	{
		cout << "float _x, float _y" << endl;
	};

	Transform(int _x, int _y) : x(_x), y(_y)
	{
		cout << "int _x, int _y" << _x << "," << _y << endl;
	};

	Transform(float _x, int _y) : x(_x), y(_y)
	{
		cout << "float _x, int _y" << endl;
	};

	Transform(int _x, float _y) : x(_x), y(_y)
	{
		cout << "int _x, float _y" << endl;
	};

	// ** 소멸되기 직전에 자동으로 호출이 되는 함수.
	// ** 사용자가 직접 정의하지 않더라도 기본 소멸자가 호출됨
	/*
	* ~Transform(){}; <- 기본 소멸자
	*/
	~Transform()
	{
		cout << "소멸자" << endl;
	}
};

// ** inline = 키워드
// ** inline (데이터타입)(함수이름)()
// {
//		* 함수에 inline 키워드가 붙어있다면 그 함수는 우선처리 대상.
//		* 상황에 따라서 우선처리 대상에서 예외될 수도 있다.
//		* 예외라는건 완전 예외가 아니라 실행 순서가 밀릴 수 있다는 뜻.
// } 
// ** inline 함수 => 최우선 처리되는 함수. 

inline void name()
{
	cout << "아" << endl;
}

class empty
{
private:
	int number;
public:
	// ** 클래스 안에서 정의되는 함수는 inline함수
	// ** 클래스 밖에서 정의되는 함수는 그냥 함수.
	void output();

};
// ** 외부에서 사용하지 못해도 자기자신은 호출 할 수 있음.

int main()
{
	// ** 복사 생성자 호출
	// ** 생성자를 만드는 이유 -> 초기화 시키기 위해서.
	// ** 정의를 해주지 않으면 호출이 되지 않을 경우가 있다.(현재는 강제 형변환이있지만)
	// 나중에는 그렇지 않을 수 있다.
	Transform t = Transform('c', 1);
	name();
	t.output();

	cout << "프로그램이종료됩니다." << endl;
	return 0;
}

void empty::output()
{
	cin >> number;
	cout << number << endl;
}
