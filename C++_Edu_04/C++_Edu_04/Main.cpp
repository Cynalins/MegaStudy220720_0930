#include <iostream>
#include <string>

using namespace std;
// namespace

// ** ���
// IS-A ���� -> ������ ����� ������ ������ ���� �´�.
// Has-a ���� -> ���ΰ� �������� ���� ���� �� ����. = ���� �л� �� �޽� 
// ����  -  ��, �л� - �޽� o | ���� - �޽� , �л� - �� x
// ** �߻� 
// : �߻� Ŭ���� (����� ���� �� ������ ����̶�� ��ü�� ����� ������ �ʴ´�.)
// ** ������

// ** ���� �Լ� & ���������Լ� : ����� ������ ����� �� �� �־����.
// ** �����ε� & �������̵�
// ** ������ �����ε�



// ĸ��ȭ : ��ɰ� �����͸� ��� ���.
// ���̾Ƹ�� ��� , w����� ���Ͽ����Ѵ�.
class Parent
{

};

class Child
{

};


class A // �ֻ������� Ŭ����
{
	// ** ������ ���� ���� ����
private:

	// ** ��Ӱ��迡���� ���� ���� ����, ����� �ƴ� ��쿡�� �����
	// ** ��� : public
	// ** �� ��� : private
protected:
	string Name;
	int Age;

	// ** ������ ���� ���� ����
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

class B : public A  // ��� : public �θ�Ŭ����.
{
public:
	void initialize()
	{
		Name = "ȫ�浿";
		Age = 32;
	}
};

class C : public A
{
public:
	void initialize()
	{
		Name = "�Ӳ���";
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

// ����ƽ ������ �ʱ�ȭ(���� ������ ��������)

int main()
{
	// * ������ � ������ Ÿ������ ����� ������ Ȯ���ؾ��Ѵ�.
	B b;
	C c;

	b.initialize();
	c.initialize();

	b.Output();
	c.Output();




	return 0;
}