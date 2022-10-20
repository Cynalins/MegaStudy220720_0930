#include "Stage.h"
#include "SceneManager.h"
#include "Child.h"
#include "ObjectManager.h"
#include "CursorManager.h"

Stage::Stage()
{
}

Stage::~Stage()
{
	Release();
}

void Stage::Start()
{
	/*
	Testcase->Start();
	Testcase = new Child; 
	*/
}

void Stage::Update()
{
	/*
	Testcase->Update(); // ������ �Ҹ�(������ ����)
	
	if (GetAsyncKeyState(VK_RETURN))				// 
		SceneManager::GetInstance->SetScene(EXITID); // 
	*/
	
	//  ��������� ������� ���� ��.
	// ť �޸� ������ ����Ͽ� ���� �ذ�.

	// �����̳� ������ �߻��� �����̶� ����. �����̳ʴ� �߻����̶� ������ �� �� ����.(ť)

	for (int i = 0; i < EndID; ++i)
		for (int j = 0; j < MaxID; ++i)
			Objects[i][j]->Update;
	

}

void Stage::Render()
{
	/*
	Testcase->Render();
	*/
}

void Stage::Release()
{
	/*
	delete Testcase;
	Testcase = nullptr;
	*/
}

