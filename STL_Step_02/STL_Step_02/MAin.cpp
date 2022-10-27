#include <iostream>
#include <vector>

using namespace std;

class Object
{
public:
	int Kor;
	int Eng;
	int Math;
public:
	Object() { cout << "생성" << endl; };
	~Object() { cout << "소멸자" << endl; }
};







Object* CreateObject(int _kor, int _eng, int _math)
{
	Object* pObj = new Object;

	pObj->Kor = _kor;
	pObj->Eng = _eng;
	pObj->Math = _math;

	return pObj;
}

int main()
{
	
	vector<Object*> Objects;

	for (int i = 0; i < 3; ++i)
	{
		Objects.push_back(CreateObject(i * 10 + 10, i * 10 + 10 + 1, i * 10 + 10 + 2));
	}

	/*
	for (auto Element : Objects)
	{
		cout << "국어 점수 : " << Element->Kor << endl;
		cout << "영어 점수 : " << Element->Eng << endl;
		cout << "수학 점수 : " << Element->Math << endl;
	}
	*/

	/*
	for (int i = 0; i < 3; ++i)
	{
		pObjects[i] = new Object;

		pObjects[i]->Kor = i * 10 + 10;
		pObjects[i]->Eng = i * 10 + 10 + 2;
		pObjects[i]->Math = i * 10 + 10 + 3;
	}
	//for (auto Element : pObjects)
	for (int i = 0; i < 3; ++i)
	{
		cout << "국어점수 : " << pObjects[i]->Kor << endl;
		cout << "영어점수 : " << pObjects[i]->Eng << endl;
		cout << "수학점수 : " << pObjects[i]->Math << endl;
	}

	for (int i = 0; i < 3; ++i)
	{
		Object* pObj = new Object;

		pObj->Kor = i * 10 + 10;
		pObj->Eng = i * 10 + 10 + 1;
		pObj->Math = i * 10 + 10 + 2;

		Objects.push_back(pObj);
	}

	for (auto Element : Objects)
	{
		cout << "국어 점수 : " << Element->Kor << endl;
		cout << "영어 점수 : " << Element->Eng << endl;
		cout << "수학 점수 : " << Element->Math << endl;
	}
	*/


	// 귀찮아도 반복자를 사용하여야 하는 이유 -> 배열을 통하여 출력을 하게되면 도는 도중 데이터와 프로그램 진행이 함께 삭제됨.
	// 반복자는 컨테이너의 주소를 가르키는것이기때문에 맞추어도 손실이 발생하지않음.
	// ** 반복자 = iterator
	// iterator = 포인터
	// 동일한 형태, iterator의 형태
	/*
	vector<Object*>::iterator iter;
	{
		// ** (시작점)첫번째 원소를 가르키는 반복자.
		iter = Objects.begin();
		cout << "국어 점수 : " << (*iter)->Kor << endl;
		cout << "영어 점수 : " << (*iter)->Eng << endl;
		cout << "수학 점수 : " << (*iter)->Math << endl;
	}

	{
		// ** 마지막을 가르키는 반복자.
		iter = Objects.end();

		if (iter == Objects.end())
			cout << "list의 마지막 입니다," << endl;
	}

	{
		for (vector<Object*>::iterator iter = Objects.begin();
			iter != Objects.end(); ++iter)
		{
			cout << "첫번째 원소의 국어 점수 : " << (*iter)->Kor << endl;
			cout << "첫번째 원소의 영어 점수 : " << (*iter)->Eng << endl;
			cout << "첫번째 원소의 수학 점수 : " << (*iter)->Math << endl << endl;;
		}
	}

	{
		// ** 원하는 위치에 원하는 값을 추가 한다.
		Objects.insert(Objects.begin(), CreateObject(0,1,2));
		cout << "[at]" << endl;
		for (int i = 0; i < Objects.size(); ++i)
		{
			cout << "국어 점수 : " << Objects[i]->Kor << endl;
			cout << "영어 점수 : " << Objects[i]->Eng << endl;
			cout << "수학 점수 : " << Objects[i]->Math << endl << endl;
		}
	}
	*/
	/*
	{
		// ** 원하는 위치의 값을 삭제 한다.
		for(vector<Object*>::iterator iter = Objects.begin(); iter != Objects.end();)
		{
			float result = ((*iter)->Kor + (*iter)->Eng + (*iter)->Math) / 3.0f;

			if (result < 16)
			{
				iter = Objects.erase(iter); // erase를 하게되면 다음에 있는 iterator를 반환
				
			}
			else
			{
				cout << "국어 점수 : " << (*iter)->Kor << endl;
				cout << "영어 점수 : " << (*iter)->Eng << endl;
				cout << "수학 점수 : " << (*iter)->Math << endl << endl;
				++iter;
			}	
		}
		// 따라서 ++iter를 for문안에 입력하면 중간의 값을 건너뛰어버림.
	}
	*/
	
	// erase, clear는 데이터를 지우는 것이 아니라 포인터이다. -> 지우려면 delete필요

	{
		// ** Container의 모든 내용을 삭제한다.
		Objects.clear(); // clear는 데이터를 지우는 애가 아님.
		for (vector<Object*>::iterator iter = Objects.begin(); iter != Objects.end(); ++iter)
		{
			cout << "국어 점수 : " << (*iter)->Kor << endl;
			cout << "영어 점수 : " << (*iter)->Eng << endl;
			cout << "수학 점수 : " << (*iter)->Math << endl << endl;

			delete (*iter);
			(*iter) = nullptr;
		}
	}
		
	
	{
		// ** 값이 있는지 없는지 확인한다.
		if (Objects.empty())
			cout << "Data가 없습니다." << endl;
	}

	

	

	


	return 0;
}