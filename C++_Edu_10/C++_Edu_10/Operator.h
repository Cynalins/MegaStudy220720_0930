#pragma once
#include "Headers.h"

class Operator
{
private:
	int age;
	char* name;

public:
	void render()
	{
		cout << name << " : " << age << endl;	
	}

public:
	void setName(char* name)
	{
		this->name = name;  // 얕은 복사.
	}
	void setAge(int _age) { this->age = _age; }

public:
	// ** 나와 같은 형태를 반환한다.
	void operator=(char* str)
	{
		this->name = new char[strlen(str) + 1];
		strcpy(this->name, str);
	}

public:
	Operator() : name(nullptr), age(0) {}
	Operator(char* _name, int _age) : name(_name), age(_age){}

};

