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

// ** �ν��Ͻ� = ��� ������ٰ� ����� �� �ִ� ����(?), �ʿ信���ؼ� �������
class Singleton
{
// ** static : ��𼭳� ���� ������ ������ �� �־�� �Ѵ�.
// ** Singleton* Instance : ��ü�� �ϳ��� �����Ͽ��� �Ѵ�. 
// ** �� private�̾�߸� �ϳ�? -> �����͸� �ٲٰų� ����� ���� ������ �� �� ������ �������.
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
	Object* pObj; // <- �ӽ� ����
public:
	Object* GetObject() { return pObj; }
	void SetObject(Object* _pObj) { pObj = _pObj; }

// ** private : ��ü�� ��𿡼��� �����Ҽ� ����� �Ѵ�.
private:
	Singleton() : pObj(nullptr) {}
};

Singleton* Singleton::Instance = nullptr;

// ** ������ �����ε�
class Operator
{
public:
	int Number;
// ** �ڱ��ڽ��� ��ȯ�Ѵ� / & <- �� �������� �޸� ���簡 �̷����.
public:
	Operator operator+(Operator& _ref) // operator = �ڱ��ڽ�.
	{	
		return Operator(Number + _ref.Number);
	}
	// ** ����
	void operator+=(Operator& _ref)
	{
		Number += _ref.Number;
	}
	/*
	*  [��ȯ��]  =  [�ǿ�����] [������] [�ǿ�����]
	* 
	* [��ȯ�� ���� ����] [�ڱ��ڽ�]+([������ �׸�])
	* {
	*	return([��ȯ��])
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
	// ** ������ �ε� �Ҽ���
	// 
	// float ���� ���(����)
	/*
	* ���
	* ������. �Ǽ���
	* �Ǽ��δ� ���ϱ� 2
	* �����δ� ������ 2
	* -> ���� ���� �Ҽ����� ù��° ���� �ڷ� ����
	* ������ŭ�� ���� + ��Ʈ��;
	* ��� ���� ���� ����� 2������ ��Ÿ�� -> ���� ��
	* ���� ù��°�� ������ ���� ��Ÿ�� -> ������
	* ��ȣ�� ���Ǽ� ������ �� 2������ ǥ��
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

	O1->SetName("ȫ�浿");

	Singleton::GetInstance()->SetObject(O1);
	}

	string str = Singleton::GetInstance()->GetObject()->GetName();

	cout << str << endl;

	*/
	return 0;
}