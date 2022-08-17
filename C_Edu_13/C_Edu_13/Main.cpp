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


	Std.name = (char*)"홍길동";
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
	printf("이름	 : %s\n", _std -> name);
	printf("국어점수 : %d\n", _std -> kor);
	printf("영어점수 : %d\n", _std -> eng);
	printf("수학점수 : %d\n", _std -> math);
}