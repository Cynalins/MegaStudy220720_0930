/*
* chapter13
*/

#include <stdio.h>
#include <stdlib.h>
#include <string>

struct Student
{
	char* name;
	int number;
	int kor;
	int eng;
	int math;
};

void Output(Student* _std);

int main()
{
	Student Std;


	Std.name = (char*)"ȫ�浿";
	Std.kor = 100;
	Std.eng = 90;
	Std.math= 90;
	Std.number = 1;
	

	Output(&Std);



	printf("%d\n", sizeof(Student));
	

	return 0;
}

void Output(Student* _std)
{
	printf("�̸�	 : %s\n", _std -> name);
	printf("�������� : %d\n", _std -> kor);
	printf("�������� : %d\n", _std -> eng);
	printf("�������� : %d\n", _std -> math);
}