#pragma once

struct Info
{
	int Kor;
	int Eng;
	int Math;

	Info() : Kor(0), Eng(0), Math(0) {};
	Info(int _kor, int _eng, int _math) : Kor(_kor), Eng(_eng), Math(_math) {};
};