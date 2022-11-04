#include "Object.h"

void Object::Render()
{
	cout << "국어 점수 : " << info.Kor << endl
		<< "영어 점수 : " << info.Eng << endl
		<< "수학 점수 : " << info.Math << endl << endl;
}
