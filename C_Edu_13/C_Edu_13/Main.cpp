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


	Std[0].name = (char*)"홍길동";
	Std[0].kor = 100;
	Std[0].eng = 90;
	Std[0].math= 90;
	Std[0].number = 1;
	
	// **배열의 크기를 알 수 있다.
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
// 배열의 인덱스 == 주소
// 매개변수 == 지역변수
// ** 매개변수로 배열이 전달 될 때에는 배열의 크기를 함께 전달해주어야 한다.
// 배열의 크기를 전달해주지 않으면 범위를 넘어갈 수 있기 때문.
void Output(Student* _std, int _size)
{
	// 결과적으로 출력해야하는 데이터가 포인터인지 아닌지를 구별.
	// 구조체 == 집합. 구조체 내부의 변수를 가리켜야함. 따라서 위치를 나타내는걸 출력하는게 아니기때문에 *을 안씀.
	// 하지만 가리키는곳이 포인터라면(출력값이 포인터라면) *을 붙여줘야함.
	for (int i = 0; i < _size; ++i)
	{
		//printf("이름	 : %s\n", _std->name);
		printf("국어점수 : %d\n", (_std+i)->kor); // int형 (_std+i) == 주소
		printf("영어점수 : %d\n", (_std+i)->eng);
		printf("수학점수 : %d\n", (_std+i)->math);
		printf("학생번호 : %d\n", (_std+i)->number);
	}
	
}