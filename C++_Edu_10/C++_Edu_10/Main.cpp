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
	// ** �Ǽ� ����

	// ��ȣ    �ڼ���               ������
	// 0      00000000        000000000000000000000


	// 100.625 => 

	// ** ���� �Ҽ���
	// 00000000 000000000 . 0000000000 00000000
	//			������				 �Ǽ���
	// 0 00000000 1000000000 . 101000000 00000000

	// 1.0000000101�� 7��

	// 127 + 7 = 134
	// �ε� �Ҽ���.
	// 0  10000110	0000000101000000000000000
	// E�� �����θ� ��Ÿ��

	// ** ������ overload
	/*
	Operator o;
	o.setAge(32);
	o.setName((char*)" ȫ�浿");
	o.render();

	// ================================================

	// ** �������� & ���� ����
	// ���縦 ��� �Ұ��ΰ��� ����.

	char* name = (char*)"ȫ�浿";
	char* name2 = name;

	cout << name << " , " << name2 << endl;

	name = (char*)" ";

	cout << name << " , " << name2 << endl;
	*/

	// ** c1�� ����
	Copy* c1 = new Copy;
	// ** c1�� name�� �̸��� �ʱ�ȭ
	c1->name = (char*)"ȫ�浿";

	//Copy* c2(c1) -> �ȵ�.
	// 
	// ** c2�� c1�� ����
	Copy* c2 = new Copy(c1); // ��.
	// ��������� ���� ������ ����.

	// ** c1�� �����Ǳ� ���� c2�� name�� ���� ��µȴ�.
	// cout << c2->name << endl;

	// ** c1�� ����
	delete c1;

	// ** c2�� name�� ���
	cout << c2->name << endl; // ��µ��� ����. 
	// -> c2�� �������ִ� �ּҰ� c1�� ������ �ּҿ� �����߱� ����

	
	// ** Getter
	// ** Setter




	return 0;
}