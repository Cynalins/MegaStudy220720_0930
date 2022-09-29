// #include <stdio.h>
#include <iostream> // stream : input 과 output을 사용하는 표준 라이브러리

// #이 들어가면 가장 우선

// const float Pi = 3.141592f; <- pi는 심볼릭 상수., 리터럴 상수 = 3.141592f;
// 심볼릭 상수 = 대문자로 써주는 것이 좋다. 상수 = 대문자

// ** pointer const 의 사용 예시.
const char* const FileName = "../Data/image.png";

/* ** 객체지향의 특징 5가지
 1. 정보 은닉
 2. 캡슐화
 3. 추상화
 4. 상속화
 5. 다향성
*/
// namespace = :: 로 접근. 네임스페이스의 이름 :: i or o (네임스페이스가 포함하고있는 함수나이름)
// 
/*
* std로 시작되지만 언급되어있는 목록만 생략가능.
using std::cout; C out
using std::endl; end line
using std::cin; <- 입력 C in
*/

// ** std로 시작되는 namespace는 모두 생략 가능하다.
using namespace std;

/*
namespace AAA
{

	void output()
	{
		cout << "AAA" << endl;
		// std::cout << "AAA\n"과 같다
	}
	// cout -> console out
}
*/
class AAA
{
public:
	// static const int MAX = 128; // static < 정적인.
	static int MAX;
};

int AAA::MAX = 0;

int main()
{
	int Number = 0;

	// 입력
	cin >> Number;

	// 출력
	cout << "Hello World! : " << Number << endl;
	
	return 0;
}