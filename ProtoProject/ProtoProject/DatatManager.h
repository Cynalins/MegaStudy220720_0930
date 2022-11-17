#pragma once
#include "Headers.h"
#include <sstream>

class DataManager
{
private:
	static list<string> filePath;
public:
	static void saveData(string fileName)
	{
		// 현재 프로젝트 파일의 위치를 받아온다.
		istringstream iss(__FILE__);

		// 경로들을 잘라내기 위해 임시로 사용될 문자열 공간
		string buffer = "";

		// 잘라낸 문자열을 잠시 보관하기 위한 공간
		vector<string> temp;


		// 문자열을 잘라냄
		while (getline(iss, buffer, '\\'))
		{
			temp.push_back(buffer);
		}
		
		// 문자열을 잘라냈다면 마지막 2개를 삭제
		temp.pop_back();
		temp.pop_back();

		string path = "";

		for (vector<string>::iterator iter = temp.begin(); iter != temp.end(); ++iter)
		{
			path += (*iter) + "\\";
		}
		filePath.push_back(path + "Resources" + fileName);
	}

	static void loadData()
	{
		for (list<string>::iterator iter = filePath.begin(); iter != filePath.end(); ++iter)
		{
			cout << (*iter) << endl;
		}
	}
};

list<string> DataManager::filePath;