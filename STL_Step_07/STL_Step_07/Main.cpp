#include "Headers.h"
#include "Alatreon.h"

// ** DesignPattern
// ** ObjectPool Pattern : 재활용패턴


int main(void)
{
	//list<Object*> EnableList;
	//list<Object*> DesableList;
	map<string, list<Object*>> EnableList;
	map<string, list<Object*>> DesableList;

	

	while (true)
	{
		system("cls");

		if (GetAsyncKeyState(VK_RETURN))
		{
			if (!DesableList.empty())
			{
				string key = "Alasteon";
				auto iter1 = DesableList.find(key);
				
				Object* pObj = (*iter1).second.front();
				pObj->Start();

				auto iter2 = EnableList.find(pObj->GetKey());
				for (iter2 == EnableList.end())
				{
					list<Object*> temp;
					temp.push_back(pObj);
					EnableList.insert(make_pair(pObj->GetKey(), temp));
				}
				DesableList.find(pObj->GetKey())->second.pop_front();
			}
			else
			{
				Object* pObj = new Alatreon;
				pObj->Start();
				EnableList.find(pObj->GetKey())->second.push_back(pObj);
			}
		}
		//for(auto object : EnableList)
		for (auto iter = EnableList.begin(); iter != EnableList.end(); )
		{
			for (auto iter2 = (*iter).second.begin(); iter2 != (*iter).second.end(); ++iter2)
			{
				int result = (*iter2)->Update();
				(*iter2)->Render();

				if (result == 1)
				{
					DesableList.find((*iter2)->GetKey())->second.push_back((*iter));
					iter = (*iter2).second.erase(iter);
				}
				else
					++iter;
			}		
		}

		cout << "[DesableList]" << endl;
		for (auto object : (*iter1).second)
			cout << object->GetKey() << endl;
	}

	return 0;
}