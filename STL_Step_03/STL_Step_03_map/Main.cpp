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

	// ���� ���� Ʈ�������� ������.
	// �������� �������. ���ڰ� ��������� ������ ���Ͽ� <n< ���·� �ٲپ��ش�. 

	// ** map<key, value*> <- �������� ������ ������ �ϱ� ���Ͽ� �����͸� �ǵ��� ����Ѵ�.
	// map�� ����Ҷ� ������ db�� ���

	map<int, string> names;

	// �����͸� �����ϰ� ���� ��� make_pair()�� ����Ѵ�.
	names.insert(make_pair(1, "ȫ�浿"));
	names.insert(make_pair(2, "�Ӳ���"));
	names.insert(make_pair(3, "�̸���"));
	names.insert(make_pair(4, "������"));

	// ** �̷��Ե� ����� �� �ִ�.
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

	// �Ҿ����� ����
	map<string, int> numbers;
	numbers["ȫ�浿"] = 1;


	// *******************************************************************************************************
	// map<int, list<string>>
	// map<int, vector<string>>
	// *******************************************************************************************************


	return 0;
}