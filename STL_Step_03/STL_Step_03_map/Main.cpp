#include <iostream>
#include <list>
#include <map>
#include <string>

using namespace std;

class Object
{
public:
	int Kor;
	int Eng;
	int Math;

	int Mean;
public:
	Object() {};
	~Object() {};
};

int main()
{
	// ** vector<value>
	// ** list<value>
	//** map<key, value>

	// 맵은 이진 트리구조를 가진다.
	// 좌측부터 만들어짐. 숫자가 만들어지면 좌측과 비교하여 <n< 형태로 바꾸어준다. 

	// ** map<key, value*> <- 데이터의 스왑을 가볍게 하기 위하여 포인터를 되도록 사용한다.
	// map을 사용할때 정해진 db를 사용

	map<int, string> names;

	// 데이터를 온전하게 넣을 경우 make_pair()를 써야한다.
	names.insert(make_pair(1, "홍길동"));
	names.insert(make_pair(2, "임꺽정"));
	names.insert(make_pair(3, "이몽룡"));
	names.insert(make_pair(4, "성춘향"));

	// ** 이렇게도 출력할 수 있다.
	for (map<int, string>::iterator iter = names.begin(); iter != names.end(); ++iter)
	{
		// (*iter).first; // key
		// (*iter).second; // value

		cout << (*iter).first << " : " << (*iter).second << endl;
	}

	cout << names[1] << endl;
	cout << names[2] << endl;
	cout << names[3] << endl;
	cout << names[4] << endl;

	// 불안전한 형태
	map<string, int> numbers;
	numbers["홍길동"] = 1;


	// *******************************************************************************************************
	// map<int, list<string>>
	// map<int, vector<string>>
	// *******************************************************************************************************


	return 0;
}