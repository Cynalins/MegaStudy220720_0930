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
	vector<int> numbers; // ���� ����ϴ� ��

	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(40);
	numbers.push_back(50);
	
	cout << "[push_back]" << endl;
	for (int i = 0; i < numbers.size(); ++i)
		cout << numbers[i] << endl;

	cout << "\n[at]" << endl;
	cout << numbers.at(3) << endl; // ���ϴ� ��ġ�� ���� �̾ƿ´�.

	cout << "\n[front,back]" << endl;
	cout << numbers.front() << endl; // ù��°���Ҹ� ����Ų��
	cout << numbers.back() << endl; // ������ ���Ҹ� ����Ų��

	
	cout << "\n[size , capacity]" << endl;
	cout << "size : " << numbers.size() << endl;  // ** �����̳ʰ� ����ִ� ������ ����
	cout << "capacity : " << numbers.capacity() << endl; // ** �������̳ʰ� ������ �� �ִ� �ִ� ����.

	numbers.pop_back(); // ** �����̳��� ������ ���Ҹ� �����Ѵ�.
	cout << numbers.back() << endl;
	/*
	// ** �ݺ��� : eterator
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
	�ǽ�����
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