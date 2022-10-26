#include <iostream>
#include <vector>

using namespace std;

class Object
{
public:
	int Kor;
	int Eng;
	int Math;
};

int main()
{
	vector<int> numbers; // 벡터 사용하는 법

	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(40);
	numbers.push_back(50);
	
	cout << "[push_back]" << endl;
	for (int i = 0; i < numbers.size(); ++i)
		cout << numbers[i] << endl;

	cout << "\n[at]" << endl;
	cout << numbers.at(3) << endl; // 원하는 위치의 수를 뽑아온다.

	cout << "\n[front,back]" << endl;
	cout << numbers.front() << endl; // 첫번째원소를 가르킨다
	cout << numbers.back() << endl; // 마지막 원소를 가르킨다

	
	cout << "\n[size , capacity]" << endl;
	cout << "size : " << numbers.size() << endl;  // ** 컨테이너가 들고있는 원소의 개수
	cout << "capacity : " << numbers.capacity() << endl; // ** 컨ㅇ테이너가 수용할 수 있는 최대 공간.

	numbers.pop_back(); // ** 컨테이너의 마지막 원소를 제거한다.
	cout << numbers.back() << endl;
	/*
	// ** 반복자 : eterator
	numbers.begin();
	numbers.end();
	
	numbers.front();
	numbers.back();

	numbers.size();
	numbers.capacity();

	numbers.insert();
	numbers.empty();
	numbers.clear();

	numbers.pop_back();
	numbers.erase();
	=====================================
	실습예제
	======================================
	*/

	Object* obj = new Object;
	obj->Eng = 80;
	obj->Kor = 90;
	obj->Math = 70;

	vector<Object> Objects1;
	vector<Object*> pObject;
	vector<int> Objects;
	Objects.push_back(obj->Eng);
	Objects.push_back(obj->Kor);
	Objects.push_back(obj->Math);

	Objects.begin();
	Objects.end();

	Objects.pop_back();

	for (int i = 0; i < Objects.size(); ++i)
	{
		cout << Objects[i] << endl;
	}


	return 0;
}