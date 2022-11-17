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
		// ���� ������Ʈ ������ ��ġ�� �޾ƿ´�.
		istringstream iss(__FILE__);

		// ��ε��� �߶󳻱� ���� �ӽ÷� ���� ���ڿ� ����
		string buffer = "";

		// �߶� ���ڿ��� ��� �����ϱ� ���� ����
		vector<string> temp;


		// ���ڿ��� �߶�
		while (getline(iss, buffer, '\\'))
		{
			temp.push_back(buffer);
		}
		
		// ���ڿ��� �߶�´ٸ� ������ 2���� ����
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