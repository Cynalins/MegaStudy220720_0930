/*
* chapter13
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>


// 
struct Student
{
	char* name;
	int number;
	int kor;
	int eng;
	int math;
};

void Output(Student* _std, int _size);

int main()
{
	Student Std[10];


	Std[0].name = (char*)"ȫ�浿";
	Std[0].kor = 100;
	Std[0].eng = 90;
	Std[0].math= 90;
	Std[0].number = 1;
	
	// **�迭�� ũ�⸦ �� �� �ִ�.
	int count = sizeof(Std) / sizeof(Std[0]);

	for (int i = 0; i < count; ++i)
	{
		Std[i].kor = i * 10;
		Std[i].eng = i * 20;
		Std[i].math = i * 30;
		Std[i].number = i + 1;
	}

	Output(Std, count);



	printf("%d\n", sizeof(Student));
	

	return 0;
}
// �迭�� �ε��� == �ּ�
// �Ű����� == ��������
// ** �Ű������� �迭�� ���� �� ������ �迭�� ũ�⸦ �Բ� �������־�� �Ѵ�.
// �迭�� ũ�⸦ ���������� ������ ������ �Ѿ �� �ֱ� ����.
void Output(Student* _std, int _size)
{
	// ��������� ����ؾ��ϴ� �����Ͱ� ���������� �ƴ����� ����.
	// ����ü == ����. ����ü ������ ������ �����Ѿ���. ���� ��ġ�� ��Ÿ���°� ����ϴ°� �ƴϱ⶧���� *�� �Ⱦ�.
	// ������ ����Ű�°��� �����Ͷ��(��°��� �����Ͷ��) *�� �ٿ������.
	for (int i = 0; i < _size; ++i)
	{
		//printf("�̸�	 : %s\n", _std->name);
		printf("�������� : %d\n", (_std+i)->kor); // int�� (_std+i) == �ּ�
		printf("�������� : %d\n", (_std+i)->eng);
		printf("�������� : %d\n", (_std+i)->math);
		printf("�л���ȣ : %d\n", (_std+i)->number);
	}
	
}