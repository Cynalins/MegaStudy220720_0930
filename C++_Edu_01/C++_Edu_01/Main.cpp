// #include <stdio.h>
#include <iostream> // stream : input �� output�� ����ϴ� ǥ�� ���̺귯��

// #�� ���� ���� �켱

// const float Pi = 3.141592f; <- pi�� �ɺ��� ���., ���ͷ� ��� = 3.141592f;
// �ɺ��� ��� = �빮�ڷ� ���ִ� ���� ����. ��� = �빮��

// ** pointer const �� ��� ����.
const char* const FileName = "../Data/image.png";

/* ** ��ü������ Ư¡ 5����
 1. ���� ����
 2. ĸ��ȭ
 3. �߻�ȭ
 4. ���ȭ
 5. ���⼺
*/
// namespace = :: �� ����. ���ӽ����̽��� �̸� :: i or o (���ӽ����̽��� �����ϰ��ִ� �Լ����̸�)
// 
/*
* std�� ���۵����� ��޵Ǿ��ִ� ��ϸ� ��������.
using std::cout; C out
using std::endl; end line
using std::cin; <- �Է� C in
*/

// ** std�� ���۵Ǵ� namespace�� ��� ���� �����ϴ�.
using namespace std;

/*
namespace AAA
{

	void output()
	{
		cout << "AAA" << endl;
		// std::cout << "AAA\n"�� ����
	}
	// cout -> console out
}
*/
class AAA
{
public:
	// static const int MAX = 128; // static < ������.
	static int MAX;
};

int AAA::MAX = 0;

int main()
{
	int Number = 0;

	// �Է�
	cin >> Number;

	// ���
	cout << "Hello World! : " << Number << endl;
	
	return 0;
}