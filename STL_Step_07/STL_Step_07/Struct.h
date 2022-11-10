#pragma once

struct Vector2
{
	int x, y;
};

typedef struct tagInfo
{
	int kor;
	int eng;
	int math;

	tagInfo() {}

	tagInfo(int _kor, int _eng, int _math) : kor(_kor), eng(_eng), math(_math) {}
}INFO;